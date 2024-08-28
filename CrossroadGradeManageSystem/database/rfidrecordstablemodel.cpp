#include "RfidRecordstablemodel.h"
#include "database/database_api.h"
#include <QSqlRecord>
#include <QSqlField>
/**************************************
 *作者: JaylenLaiHUST
 *日期: 2024-08-27
 *描述: 运动员表的model
***************************************/
RfidRecordsTableModel::RfidRecordsTableModel(QObject *parent) : QObject(parent)
{
    tableName = TABLE_NAME_RFIDRECORDS;
    header<<QObject::trUtf8("标签id")<<QObject::trUtf8("标签卡号")<< QObject::trUtf8("检查站id")
         <<QObject::trUtf8("时间戳")<<QObject::trUtf8("方向");
    model = new QSqlTableModel(this);
}

/**
 * @brief RfidRecordsTableModel::createTable
 * @param tableName 数据块表名称
 * 用于创建RfidRecords表
 */
void RfidRecordsTableModel::createTable()
{
    QSqlQuery query;
    QString str;
//    str = tr("CREATE TABLE ") + tableName + tr(" (标签记录id INT AUTO_INCREMENT PRIMARY KEY, 标签id VARCHAR(20) NOT NULL, 打卡点id INT NOT NULL, 时间戳 DATETIME NOT NULL, 方向 CHAR(1) NOT NULL, FOREIGN KEY (标签id) REFERENCES participants(RFID标签编码), FOREIGN KEY (打卡点id) REFERENCES checkpoints(打卡点id));");
    str = tr("CREATE TABLE ") + tableName + tr(" (标签记录id INT AUTO_INCREMENT PRIMARY KEY, 标签id VARCHAR(20) NOT NULL, 打卡点id INT NOT NULL, 时间戳 DATETIME NOT NULL, 方向 CHAR(1) NOT NULL, FOREIGN KEY (标签id) REFERENCES table_participants(RFID标签编码), FOREIGN KEY (打卡点id) REFERENCES table_checkpoints(打卡点id));");
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
void RfidRecordsTableModel::bindTable(void)
{
    model->setTable(tableName);
    model->select();
}

/**
 * @brief RfidRecordsTableModel::getModel
 * @return   QSqlTableModel型model
 * 获取运动员表的Model
 */
QSqlTableModel* RfidRecordsTableModel::getModel(void)
{
    return model;
}

/**
 * @brief RfidRecordsTableModel::findRecord
 * @param RfidRecords_id 人员编号
 * @return QSqlRecord型记录集
 * 根据运动员id查找记录
 */
QSqlRecord RfidRecordsTableModel::findRecord(const int &RfidRecords_id)
{
    int count = model->rowCount();
    for(int row=0; row < count; row++){
        if(model->data(model->index(row, 0)) == RfidRecords_id)
            return model->record(row);
    }
    return QSqlRecord();
}

/**
 * @brief RfidRecordsTableModel::insertRecords
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
int RfidRecordsTableModel::insertRecords(int record_id, QString rfid_tag_id, QString checkpoint_id,
                                          QString timestamp, QString direction)
{
    QSqlRecord record;

    record.append(QSqlField(header.at(0), QVariant::Int));
    record.append(QSqlField(header.at(1), QVariant::String));
    record.append(QSqlField(header.at(2), QVariant::String));
    record.append(QSqlField(header.at(3), QVariant::String));
    record.append(QSqlField(header.at(4), QVariant::String));

    record.setValue(0, record_id);
    record.setValue(1, rfid_tag_id);
    record.setValue(2, checkpoint_id);
    record.setValue(3, timestamp);
    record.setValue(4, direction);

    model->insertRecord(-1,record);
    return model->rowCount();
}

///**
// * @brief RfidRecordsTableModel::updateRecords
// * @param personName 用户名
// * @param pwd 新密码
// * @param time 更新的时间
// * @return 如果更新成功返回true，否则false
// * 更新密码
// */
//bool RfidRecordsTableModel::updateRecords(QString personName,QString pwd,QString time)
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
