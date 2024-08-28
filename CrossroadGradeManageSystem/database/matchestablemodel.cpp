#include "matchestablemodel.h"
#include "database/database_api.h"
#include <QSqlRecord>
#include <QSqlField>
/**************************************
 *作者: JaylenLaiHUST
 *日期: 2024-08-27
 *描述: 运动员表的model
***************************************/
MatchesTableModel::MatchesTableModel(QObject *parent) : QObject(parent)
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
 * @param MATCHES_id 人员编号
 * @return QSqlRecord型记录集
 * 根据运动员id查找记录
 */
QSqlRecord MatchesTableModel::findRecord(const int &MATCHES_id)
{
    int count = model->rowCount();
    for(int row=0; row < count; row++){
        if(model->data(model->index(row, 0)) == MATCHES_id)
            return model->record(row);
    }
    return QSqlRecord();
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
int MatchesTableModel::insertRecords(int MATCHES_id, QString name, QString gender,
                                          QString id_number, QString contact_number, QString size_tshirt,
                                          QString rfid_tag_id, QString emergency_contact_name, QString emergency_contact_number)
{
    QSqlRecord record;

    record.append(QSqlField(header.at(0), QVariant::Int));
    record.append(QSqlField(header.at(1), QVariant::String));
    record.append(QSqlField(header.at(2), QVariant::String));
    record.append(QSqlField(header.at(3), QVariant::String));
    record.append(QSqlField(header.at(4), QVariant::String));
    record.append(QSqlField(header.at(5), QVariant::String));
    record.append(QSqlField(header.at(6), QVariant::String));
    record.append(QSqlField(header.at(7), QVariant::String));
    record.append(QSqlField(header.at(8), QVariant::String));

    record.setValue(0, MATCHES_id);
    record.setValue(1, name);
    record.setValue(2, gender);
    record.setValue(3, id_number);
    record.setValue(4, contact_number);
    record.setValue(5, size_tshirt);
    record.setValue(6, rfid_tag_id);
    record.setValue(7, emergency_contact_name);
    record.setValue(8, emergency_contact_number);


    model->insertRecord(-1,record);
    return model->rowCount();
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
