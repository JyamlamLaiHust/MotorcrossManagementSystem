#include "Resultstablemodel.h"
#include "database/database_api.h"
#include <QSqlRecord>
#include <QSqlField>
#include <QMessageBox>

/**************************************
 *作者: JaylenLaiHUST
 *日期: 2024-08-27
 *描述: 运动员表的model
***************************************/
ResultsTableModel::ResultsTableModel(QObject *parent) : QSqlTableModel(parent)
{
    tableName = TABLE_NAME_RESULTS;
    header<<QObject::trUtf8("成绩记录id")<<QObject::trUtf8("赛事名称")<< QObject::trUtf8("打卡点名称")
         <<QObject::trUtf8("时间戳")<<QObject::trUtf8("方向")<<QObject::trUtf8("总用时")<<QObject::trUtf8("名次")<<QObject::trUtf8("rfid标签卡号");
    model = new QSqlTableModel(this);
}

/**
 * @brief ResultsTableModel::createTable
 * @param tableName 数据块表名称
 * 用于创建Results表
 */
void ResultsTableModel::createTable()
{
    QSqlQuery query;
    QString str;

    str  = tr("CREATE TABLE ") + tableName + tr(" ( ");
    str += header.at(0) + tr(" INT AUTO_INCREMENT PRIMARY KEY, ");
    str += header.at(1) + tr(" VARCHAR(100) NOT NULL, ");
    str += header.at(2) + tr(" VARCHAR(100) NOT NULL, ");
    str += header.at(3) + tr(" TIME, ");
    str += header.at(4) + tr(" CHAR(1) NOT NULL, ");
    str += header.at(5) + tr(" INT, ");
    str += header.at(6) + tr(" INT, ");
    str += header.at(7) + tr(" VARCHAR(20) NOT NULL);");

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
void ResultsTableModel::bindTable(void)
{

    QMessageBox message;

    model->setTable(tableName);
    model->select();
}

/**
 * @brief ResultsTableModel::getModel
 * @return   QSqlTableModel型model
 * 获取运动员表的Model
 */
QSqlTableModel* ResultsTableModel::getModel(void)
{
    return model;
}

/**
 * @brief ResultsTableModel::findRecord
 * @param rfidTag 标签卡号
 * @return QSqlRecord型记录集
 * 根据运动员id查找记录
 */
int ResultsTableModel::findRecord(QString rfidTag, QString direction)
{
    int count = model->rowCount();
    for(int row=0; row < count; row++){
        if((model->data(model->index(row, 7))).toString() == rfidTag && model->data(model->index(row, 4)) == direction)
            return row;
    }
    return -1;
}

/**
 * @brief ResultsTableModel::insertRecords
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
int ResultsTableModel::insertRecords(QString eventName, QString checkPointName, QTime time, QString direction, int sumTime, int rank, QString rfidTag)
{
    QSqlRecord record;

    record.append(QSqlField(header.at(1), QVariant::String));
    record.append(QSqlField(header.at(2), QVariant::String));
    record.append(QSqlField(header.at(3), QVariant::Time));
    record.append(QSqlField(header.at(4), QVariant::String));
    record.append(QSqlField(header.at(5), QVariant::Int));
    record.append(QSqlField(header.at(6), QVariant::Int));
    record.append(QSqlField(header.at(7), QVariant::String));

    record.setValue(0, eventName);
    record.setValue(1, checkPointName);
    record.setValue(2, time);
    record.setValue(3, direction);
    record.setValue(4, sumTime);
    record.setValue(5, rank);
    record.setValue(6, rfidTag);

    qDebug() << record;

    // 插入记录
    bool success = model->insertRecord(-1, record);

    if (success) {
        // 如果插入成功，提交更改
        if (model->submitAll()) {
            // 如果提交成功，则返回新的行数
            return model->rowCount();
        } else {
            // 如果提交失败，打印错误信息并返回-1
            qDebug() << "Failed to submit changes:" << model->lastError().text();
            return -1;
        }
    } else {
        // 如果插入失败，打印错误信息并返回-1
        qDebug() << "Failed to insert record:" << model->lastError().text();
        return -1;
    }

    return model->rowCount();
}

int ResultsTableModel::getRank(const QString &matchName, const QString &checkpointName, const QString &direction, int totalTime)
{
    QSqlQuery query;
    QString sql = "SELECT COUNT(*) "
                  "FROM (SELECT r1.* "
                  "      FROM table_results r1 "
                  "      WHERE r1.赛事名称 = :matchName "
                  "        AND r1.打卡点名称 = :checkpointName "
                  "        AND r1.方向 = :direction "
                  "        AND r1.总用时 <= :totalTime "
                  "      ORDER BY r1.总用时 ASC) subquery "
                  "WHERE subquery.总用时 < :totalTime";

    query.prepare(sql);
    query.bindValue(":matchName", matchName);
    query.bindValue(":checkpointName", checkpointName);
    query.bindValue(":direction", direction);
    query.bindValue(":totalTime", totalTime);

    if (query.exec()) {
        if (query.next()) {
            return query.value(0).toInt() + 1; // 加1是因为当前记录也算在内
        }
    } else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }

    return -1; // 如果查询失败或其他原因，返回-1表示无法确定排名
}

bool ResultsTableModel::checkRfidTagInMatches(const QString& rfidTag, const QString& eventName)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM table_participants WHERE rfid标签卡号 = :rfidTag AND 参赛名称 = :eventName");
    query.bindValue(":rfidTag", rfidTag);
    query.bindValue(":eventName", eventName);

    if (!query.exec()) {
        qDebug() << "Error executing query:" << query.lastError().text();
        return false; // 查询执行失败
    }

    if (query.next()) {
        int count = query.value(0).toInt();
        qDebug() << "the number of record: " <<count;
        return count > 0; // 如果计数大于0，则找到了对应的rfidTags
    }
    qDebug() << "没有找到对应的rfidTags: " << query.lastError().text();
    return false; // 没有找到对应的rfidTags
}

///**
// * @brief ResultsTableModel::updateRecords
// * @param personName 用户名
// * @param pwd 新密码
// * @param time 更新的时间
// * @return 如果更新成功返回true，否则false
// * 更新密码
// */
//bool ResultsTableModel::updateRecords(QString personName,QString pwd,QString time)
//{
//    model->setFilter(tr("用户名 = '%1'").arg(personName));
//    model->select();
//    if (model->rowCount() == 1)
//    {
//        model->setData(model->index(0, 0), QVariant(personName));
//        model->setData(model->index(0, 1), QVariant(pwd));
//        model->setData(model->index(0, 2), QVariant(time));
//        return model->submitAll();
//    }
//    return false;
//}
