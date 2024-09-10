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
int CheckPointsTableModel::findRecord(QString checkPointName)
{
    int count = model->rowCount();
    for(int row=0; row < count; row++){
        if((model->data(model->index(row, 2))).toString() == checkPointName)
            return row;
    }
    return -1;
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

    qDebug() << record;

    model->insertRecord(-1,record);
    return model->rowCount();
}

bool CheckPointsTableModel::checkRaceDataConsistency(const QString &eventName)
{
    QSqlQuery query;

    QString str = "SELECT "
                  "    c.对应赛事名称, "
                  "    SUM(c.分段距离) AS 总赛程距离, "
                  "    SUM(c.分段攀升) AS 总攀升高度, "
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
                  "    SUM(c.分段距离) <= t.赛程距离 AND SUM(c.分段攀升) <= t.总攀升高度;";


//    qDebug() << str;
    // 准备 SQL 查询语句
    query.prepare(str);
    query.bindValue(":eventName", eventName);

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
        return false;
    }

    // 处理查询结果
    while (query.next()) {
        QString eventName = query.value("对应赛事名称").toString();
        int totalSegmentDistance = query.value("总赛程距离").toInt();
        int totalSegmentElevation = query.value("总攀升高度").toInt();
        int raceDistance = query.value("赛程距离").toInt();
        int elevationGain = query.value("总攀升高度").toInt();

        qDebug() << "Event Name:" << eventName
                 << "Total Segment Distance:" << totalSegmentDistance
                 << "Total Segment Elevation:" << totalSegmentElevation
                 << "Race Distance:" << raceDistance
                 << "Elevation Gain:" << elevationGain;

        // 如果查询结果为空，则表示没有符合条件的记录
        if (eventName.isEmpty()) {
            qDebug() << "No matching events found.";
            return false;
        }

        // 如果查询结果中有符合条件的记录，则表示数据一致
        qDebug() << "Data consistency verified for event:" << eventName;
        return true;
    }

//    qDebug() << "skip all the process of the function.";
    return false;
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

bool CheckPointsTableModel::checkCheckpointTimes(const QString &checkpointname)
{
    QSqlQuery query;

    QString str = "SELECT "
                  "    c.对应赛事名称, "
                  "    c.检查站名称, "
                  "    c.开放时间, "
                  "    c.关闭时间,"
                  "    t.赛事开始时间,"
                  "    t.赛事结束时间 "
                  "FROM "
                  "    table_checkpoints c "
                  "JOIN "
                  "    table_Matches t ON c.对应赛事名称 = t.赛事名称 "
                  "WHERE"
                  "     c.开放时间 < t.赛事开始时间 AND c.关闭时间 > 赛事结束时间 AND c.检查站名称 = :checkpointname;";

    // 准备 SQL 查询语句
    query.prepare(str);
    query.bindValue(":checkpointname", checkpointname);

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
        return false;
    }

    // 处理查询结果
    while (query.next()) {
        QString eventName = query.value("对应赛事名称").toString();
        QString checkPointName = query.value("检查站名称").toString();
        QTime openTime = query.value("开放时间").toTime();
        QTime closeTime = query.value("关闭时间").toTime();
        QTime raceOpenTime = query.value("赛事开始时间").toTime();
        QTime raceCloseTime = query.value("赛事结束时间").toTime();

        qDebug() << "Event Name:" << eventName
                 << "Check Point Name:" << checkPointName
                 << "Open Time:" << openTime.toString()
                 << "Close Time:" << closeTime.toString()
                 << "Race Open Time:" << raceOpenTime.toString()
                 << "Race Close Time:" << raceCloseTime.toString();

        // 如果查询结果中有符合条件的记录，则表示数据一致
        qDebug() << "Check Point times within Race times for event:" << eventName;
        return true;
    }

    qDebug() << "skip all the process of the function.";
    return false;
}
