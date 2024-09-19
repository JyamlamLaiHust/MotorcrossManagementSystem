#include "checkpointstablemodel.h"
#include "database/database_api.h"
#include <QSqlRecord>
#include <QSqlField>
/**************************************
 *作者: JaylenLaiHUST
 *日期: 2024-08-27
 *描述: 运动员表的model
***************************************/
CheckPointsTableModel::CheckPointsTableModel(QObject *parent) : QObject(parent)
{
    tableName = TABLE_NAME_CHECKPOINTS;
    header<<QObject::trUtf8("打卡点id")<<QObject::trUtf8("对应赛事名称")<< QObject::trUtf8("检查站名称")
         <<QObject::trUtf8("分段距离")<<QObject::trUtf8("分段攀升")
        <<QObject::trUtf8("开放时间")<<QObject::trUtf8("关闭时间");
    model = new QSqlTableModel(this);
}

/**
 * @brief CheckPointsTableModel::createTable
 * @param tableName 数据块表名称
 * 用于创建CheckPoints表
 */
void CheckPointsTableModel::createTable()
{
    QSqlQuery query;
    QString str;

    str  = tr("create table ") + tableName + tr(" ( ");
    str += header.at(0) + tr(" INT AUTO_INCREMENT PRIMARY KEY, ");
    str += header.at(1) + tr(" VARCHAR(100) NOT NULL, ");
    str += header.at(2) + tr(" VARCHAR(100) NOT NULL, ");
    str += header.at(3) + tr(" FLOAT, ");
    str += header.at(4) + tr(" FLOAT, ");
    str += header.at(5) + tr(" DATETIME, ");
    str += header.at(6) + tr(" DATETIME, ");
    str += tr("FOREIGN KEY (对应赛事名称) REFERENCES table_matches(赛事名称));");

    qDebug()<<"Sql: " << str.toUtf8().data();
    bool ret = query.exec(str);
    if(ret == true){
        qDebug()<<tableName<<QObject::tr(" table create success");
    }
    else{
        qDebug()<<tableName<<QObject::tr(" table create failed");
    }
}

/**
 * @brief PersonTableModel::bindTable
 * 绑定表格
 */
void CheckPointsTableModel::bindTable(void)
{
    model->setTable(tableName);
    model->select();
}

/**
 * @brief CheckPointsTableModel::getModel
 * @return   QSqlTableModel型model
 * 获取运动员表的Model
 */
QSqlTableModel* CheckPointsTableModel::getModel(void)
{
    return model;
}

/**
 * @brief CheckPointsTableModel::findRecord
 * @param checkPointName 打卡点名称
 * @return row 记录列号
 * 根据打卡点名称查找记录
 */
int CheckPointsTableModel::findRecord(QString eventName, QString checkPointName)
{
    QSqlQuery query;
    // 准备SQL语句
    QString strSql = "SELECT * FROM table_checkpoints WHERE 对应赛事名称=:eventName AND 检查站名称=:checkpointName;";
    query.prepare(strSql);

    // 绑定参数
    query.bindValue(":eventName", eventName);
    query.bindValue(":checkpointName", checkPointName);

    // 执行查询
    if (!query.exec()) {
        // 如果查询失败，可以输出错误信息到日志或直接抛出异常
        qDebug() << "Error: " << query.lastError().text();
        return -1; // 或者抛出异常，这里根据实际情况处理
    }

    // 检查是否有结果
    if (query.next()) {
        // 返回记录ID或其他相关信息，根据表结构决定
//        return query.value("记录ID列名").toInt(); // 替换"记录ID列名"为实际的字段名
        return 0;
    } else {
        // 如果没有找到记录，返回一个适当的值，比如-1表示未找到
        return -1;
    }
}

/**
 * @brief CheckPointsTableModel::insertRecords
 * @param personName 人员名称
 * @param personType 身份类别
 * @param remark 备注信息
 * @param
 * @param
 * @param
 * @param
 * @param
 * @param
 * @return 插入记录的行号
 * 向表格中插入记录
 */
int CheckPointsTableModel::insertRecords(QString eventName, QString checkPointName, float segmentDistance,
                                         float segmentElevation, QDateTime openTime, QDateTime closeTime)
{
    QSqlRecord record;

    record.append(QSqlField(header.at(1), QVariant::String));
    record.append(QSqlField(header.at(2), QVariant::String));
    record.append(QSqlField(header.at(3), QVariant::Double));
    record.append(QSqlField(header.at(4), QVariant::Double));
    record.append(QSqlField(header.at(5), QVariant::DateTime));
    record.append(QSqlField(header.at(6), QVariant::DateTime));

    record.setValue(0, eventName);
    record.setValue(1, checkPointName);
    record.setValue(2, segmentDistance);
    record.setValue(3, segmentElevation);
    record.setValue(4, openTime);
    record.setValue(5, closeTime);

//    qDebug() << record;

    model->insertRecord(-1,record);
    return model->rowCount();
}

bool CheckPointsTableModel::checkRaceDataConsistency(const QString &eventName)
{
    QSqlQuery query;

    QString str = "SELECT "
                  "    c.对应赛事名称, "
                  "    SUM(c.分段距离) AS 总赛程距离, "
                  "    t.赛程距离,"
                  "    t.总攀升高度 "
                  "FROM "
                  "    table_checkpoints c "
                  "JOIN "
                  "    table_Matches t ON c.对应赛事名称 = t.赛事名称 "
                  "WHERE"
                  "     c.对应赛事名称 = :eventName "
                  "GROUP BY "
                  "    c.对应赛事名称 "
                  "HAVING "
                  "    SUM(c.分段距离) <= t.赛程距离;";


    qDebug() << str;
    // 准备 SQL 查询语句
    query.prepare(str);
    query.bindValue(":eventName", eventName);

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
        return false;
    }


    //    // 检查是否有结果
    //    if (!query.isActive()) {
    //        qDebug() << "No active result set.";
    //        return false;
    //    }

    //    if (query.size() == -1) {
    //        qDebug() << "Result set size is unknown.";
    //    } else if (query.size() == 0) {
    //        qDebug() << "Result set is empty.";
    //        return false;
    //    }

    // 处理查询结果
    while (query.next()) {
        // 如果查询结果为空，则表示没有符合条件的记录
        if (eventName.isEmpty()) {
            qDebug() << "No matching events found.";
            return false;
        }

        // 如果查询结果中有符合条件的记录，则表示数据一致
        qDebug() << "总距离测试：Data consistency verified for event:" << eventName;
        return true;
    }

//    return false;
}

bool CheckPointsTableModel::deleteRecord(QString checkpointname)
{
    // 添加一个查询记录逻辑
    QSqlQuery query;
    QString sql = "DELETE FROM table_checkpoints WHERE 检查站名称 = :checkpointname;";
    QMessageBox message;

    // 准备 SQL 语句
    query.prepare(sql);
    query.bindValue(":checkpointname", checkpointname);

    if(!query.exec()) {
        qDebug() << "Delete operation failed:" << query.lastError().text();
        return false;
    } else {
        qDebug() << "Record deleted successfully.";
    }
    return true;
}

bool CheckPointsTableModel::checkCheckpointTimes(const QString &eventName, QDateTime openTime, QDateTime closeTime)
{
    QSqlQuery query;

    QString str = "SELECT * "
                  "FROM table_matches "
                  "WHERE 赛事名称 = :eventName "
                  "AND :openTime >= 赛事开始时间 "
                  "AND :closeTime <= 赛事结束时间;";

    qDebug() << "SQL Query:" << str;

    // 准备 SQL 查询语句
    query.prepare(str);
    query.bindValue(":eventName", eventName);
    query.bindValue(":openTime", openTime);
    query.bindValue(":closeTime", closeTime);

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
        return false;
    }

    // 处理查询结果
    if (query.next()) {
        // 获取赛事的相关信息
        QString eventName = query.value("赛事名称").toString();
        QTime raceOpenTime = query.value("赛事开始时间").toTime();
        QTime raceCloseTime = query.value("赛事结束时间").toTime();

        // 输出日志信息
        qDebug() << "Event Name:" << eventName
                 << "Race Open Time:" << raceOpenTime.toString()
                 << "Race Close Time:" << raceCloseTime.toString();

        // 如果查询结果中有符合条件的记录，则表示数据一致
        qDebug() << "Check Point times within Race times for event:" << eventName;
        return true;
    }

    // 如果没有符合条件的记录，则返回 false
    qDebug() << "No matching data found for event:" << eventName;
    return false;
}
