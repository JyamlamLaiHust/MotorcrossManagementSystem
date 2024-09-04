#include "Resultstablemodel.h"
#include "database/database_api.h"
#include <QSqlRecord>
#include <QSqlField>
/**************************************
 *作者: JaylenLaiHUST
 *日期: 2024-08-27
 *描述: 运动员表的model
***************************************/
ResultsTableModel::ResultsTableModel(QObject *parent) : QObject(parent)
{
    tableName = TABLE_NAME_RESULTS;
    header<<QObject::trUtf8("成绩记录id")<<QObject::trUtf8("赛事id")<< QObject::trUtf8("运动员id")
         <<QObject::trUtf8("打卡点id")<<QObject::trUtf8("到达时间")<<QObject::trUtf8("离开时间")
        <<QObject::trUtf8("总用时")<<QObject::trUtf8("名词");
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
    str += header.at(1) + tr(" INT NOT NULL, ");
    str += header.at(2) + tr(" INT NOT NULL, ");
    str += header.at(3) + tr(" INT NOT NULL, ");
    str += header.at(4) + tr(" DATETIME, ");
    str += header.at(5) + tr(" DATETIME, ");
    str += header.at(6) + tr(" TIME, ");
    str += header.at(7) + tr(" INT, ");
    str += tr(" FOREIGN KEY (运动员id) REFERENCES table_participants(运动员id),");
    str += tr(" FOREIGN KEY (赛事id) REFERENCES table_matches(赛事id),");
    str += tr(" FOREIGN KEY (打卡点id) REFERENCES table_checkpoints(打卡点id));");

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
int ResultsTableModel::findRecord(QString rfidTag)
{
    int count = model->rowCount();
    for(int row=0; row < count; row++){
        if((model->data(model->index(row, 0))).toString() == rfidTag)
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
int ResultsTableModel::insertRecords(QString eventName, QString checkPointName, QTime departureTime, QTime sumTime, int rank, QString rfidTag)
{
    QSqlRecord record;

    record.append(QSqlField(header.at(0), QVariant::String));
    record.append(QSqlField(header.at(1), QVariant::String));
    record.append(QSqlField(header.at(2), QVariant::Time));
    record.append(QSqlField(header.at(3), QVariant::Time));
    record.append(QSqlField(header.at(4), QVariant::Int));
    record.append(QSqlField(header.at(5), QVariant::String));

    record.setValue(0, eventName);
    record.setValue(1, checkPointName);
    record.setValue(2, departureTime);
    record.setValue(3, sumTime);
    record.setValue(4, rank);
    record.setValue(5, rfidTag);

    model->insertRecord(-1,record);
    return model->rowCount();
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
