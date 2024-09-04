#include "matchestablemodel.h"
#include "database/database_api.h"
#include <QSqlRecord>
#include <QSqlField>
/**************************************
 *作者: JaylenLaiHUST
 *日期: 2024-08-27
 *描述: 运动员表的model
***************************************/
MatchesTableModel::MatchesTableModel(QObject *parent) : QSqlTableModel(parent)
{
    tableName = TABLE_NAME_MATCHES;
    header<<QObject::trUtf8("赛事id")<<QObject::trUtf8("赛事名称")<< QObject::trUtf8("赛事开始时间")
         <<QObject::trUtf8("赛事结束时间")<<QObject::trUtf8("赛程距离")<<QObject::trUtf8("总攀升高度")
        <<QObject::trUtf8("赛事报名费用");
    model = new QSqlTableModel(this);
}

/**
 * @brief MatchesTableModel::createTable
 * @param tableName 数据块表名称
 * 用于创建MATCHES表
 */
void MatchesTableModel::createTable()
{
    QSqlQuery query;
    QString str;

    str  = tr("CREATE TABLE ") + tableName + tr(" ( ");
    str += header.at(0) + tr(" INT AUTO_INCREMENT PRIMARY KEY, ");
    str += header.at(1) + tr(" VARCHAR(100) NOT NULL, ");
    str += header.at(2) + tr(" DATETIME NOT NULL, ");
    str += header.at(3) + tr(" DATETIME NOT NULL, ");
    str += header.at(4) + tr(" FLOAT NOT NULL, ");
    str += header.at(5) + tr(" FLOAT, ");
    str += header.at(6) + tr(" DECIMAL(10, 2)); ");

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
void MatchesTableModel::bindTable(void)
{
    model->setTable(tableName);
    model->select();
}

/**
 * @brief MatchesTableModel::getModel
 * @return   QSqlTableModel型model
 * 获取运动员表的Model
 */
QSqlTableModel* MatchesTableModel::getModel(void)
{
    return model;
}

/**
 * @brief MatchesTableModel::findRecord
 * @param eventName 比赛名称
 * @return row 记录所在的行号
 * 根据运动员id查找记录
 */
int MatchesTableModel::findRecord(QString eventName)
{
    int count = model->rowCount();
    for(int row=0; row < count; row++){
        if((model->data(model->index(row, 1))).toString() == eventName)
            return row;
    }
    return -1;
}

/**
 * @brief MatchesTableModel::insertRecords
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
int MatchesTableModel::insertRecords(QString eventName, QDateTime startTime, QDateTime endTime,
                                     float raceDistance, float elevationGain, float registerationFee)
{
    QSqlRecord record;

    record.append(QSqlField(header.at(1), QVariant::Int));
    record.append(QSqlField(header.at(2), QVariant::DateTime));
    record.append(QSqlField(header.at(3), QVariant::DateTime));
    record.append(QSqlField(header.at(4), QVariant::Double));
    record.append(QSqlField(header.at(5), QVariant::Double));
    record.append(QSqlField(header.at(6), QVariant::Double));


    record.setValue(0, eventName);
    record.setValue(1, startTime);
    record.setValue(2, endTime);
    record.setValue(3, raceDistance);
    record.setValue(4, elevationGain);
    record.setValue(5, registerationFee);

    model->insertRecord(-1,record);
    return model->rowCount();
}

bool MatchesTableModel::deleteRecord(QString eventName)
{
    // 添加一个查询记录逻辑
    QSqlQuery query;
    QString sql = "DELETE FROM table_matches WHERE 赛事名称 = :eventName;";

    // 准备 SQL 语句
    query.prepare(sql);
    query.bindValue(":eventName", eventName);

    if(query.exec()) {
        qDebug() << "Delete operation failed:" << query.lastError().text();
    } else {
        qDebug() << "Record deleted successfully.";
    }
}

/**
    根据比赛名称查找开始时间
*/
QDateTime MatchesTableModel::getStartTime(const QString &eventName)
{
    QSqlQuery query;
    QString sql = "SELECT 赛事开始时间 FROM table_matches WHERE 赛事名称 = :eventName;";
    query.prepare(sql);
    query.bindValue(":eventName", eventName);

    if (query.exec()) {
        if (query.next()) {
            return query.value(0).toDateTime();
        }
    } else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }

    return QDateTime(); // 返回默认的 QDateTime 对象
}

///**
// * @brief MatchesTableModel::updateRecords
// * @param personName 用户名
// * @param pwd 新密码
// * @param time 更新的时间
// * @return 如果更新成功返回true，否则false
// * 更新密码
// */
//bool MatchesTableModel::updateRecords(QString personName,QString pwd,QString time)
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
