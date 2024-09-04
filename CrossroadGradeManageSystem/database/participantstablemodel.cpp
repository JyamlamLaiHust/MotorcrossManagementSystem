#include "participantstablemodel.h"
#include "database/database_api.h"
#include <QSqlRecord>
#include <QSqlField>
/**************************************
 *作者: JaylenLaiHUST
 *日期: 2024-08-27
 *描述: 运动员表的model
***************************************/
ParticipantsTableModel::ParticipantsTableModel(QObject *parent) : QSqlTableModel(parent)
{
    tableName = TABLE_NAME_PARTICIPANTS;
    header<<QObject::trUtf8("运动员id")<<QObject::trUtf8("姓名")<< QObject::trUtf8("性别")
         <<QObject::trUtf8("身份证")<<QObject::trUtf8("联系方式")<<QObject::trUtf8("T恤尺码")
        <<QObject::trUtf8("rfid标签卡号")<<QObject::trUtf8("紧急联系人姓名")<<QObject::trUtf8("紧急联系人联系方式");
    model = new QSqlTableModel(this);
}

/**
 * @brief ParticipantsTableModel::createTable
 * @param tableName 数据块表名称
 * 用于创建Participants表
 */
void ParticipantsTableModel::createTable()
{
    QSqlQuery query;
    QString str;

    str  = tr("create table ") + tableName + tr(" ( ");
    str += header.at(0) + tr(" INT AUTO_INCREMENT PRIMARY KEY, ");
    str += header.at(1) + tr(" VARCHAR(100) NOT NULL, ");
    str += header.at(2) + tr(" CHAR(1) NOT NULL, ");
    str += header.at(3) + tr(" VARCHAR(50) UNIQUE NOT NULL, ");
    str += header.at(4) + tr(" VARCHAR(20), ");
    str += header.at(5) + tr(" char(5) DEFAULT 'L', ");
    str += header.at(6) + tr(" VARCHAR(20) UNIQUE NOT NULL, ");
    str += header.at(7) + tr(" VARCHAR(100), ");
    str += header.at(8) + tr(" VARCHAR(20)); ");

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
void ParticipantsTableModel::bindTable(void)
{
    model->setTable(tableName);
    model->select();
}

/**
 * @brief ParticipantsTableModel::getModel
 * @return   QSqlTableModel型model
 * 获取运动员表的Model
 */
QSqlTableModel* ParticipantsTableModel::getModel(void)
{
    return model;
}

/**
 * @brief ParticipantsTableModel::findRecord
 * @param participantsName 运动员姓名
 * @return QSqlRecord型记录集
 * 根据运动员姓名查找记录
 */
int ParticipantsTableModel::findRecord(QString participantName)
{
    int count = model->rowCount();
    for(int row=0; row < count; row++){
        if((model->data(model->index(row, 0))).toString() == participantName)
            return row;
    }
    return -1;
}


/**
 * @brief ParticipantsTableModel::findRecord
 * @param idCard 运动员身份证
 * @return QSqlRecord型记录集
 * 根据身份证查找记录
 */
int ParticipantsTableModel::findRecordByIdCard(QString idcard)
{
    int count = model->rowCount();
    for(int row=0; row < count; row++){
        if(model->data(model->index(row, 0)) == idcard)
            return row;
    }
    return -1;
}

/**
 * @brief ParticipantsTableModel::findRecord
 * @param idCard 运动员身份证
 * @return QSqlRecord型记录集
 * 根据身份证查找记录
 */
int ParticipantsTableModel::findRecordByRfidTag(QString RfidTag)
{
    int count = model->rowCount();
    for(int row=0; row < count; row++){
        if(model->data(model->index(row, 0)) == RfidTag)
            return row;
    }
    return -1;
}

/**
 * @brief ParticipantsTableModel::insertRecords
 * @param name 运动员姓名
 * @param gender 性别
 * @param idCard 身份证号
 * @param contactNumber 联系方式
 * @param sizeTshirt T恤尺码
 * @param rfidTag RFID标签卡号
 * @param emergencyContactName 紧急联系人姓名
 * @param emergencyContactNumber 紧急联系人电话
 * @return 插入记录的行号
 * 向表格中插入记录
 */
int ParticipantsTableModel::insertRecords(QString name, QString gender,
                                          QString idCard, QString contactNumber, QString sizeTshirt,
                                          QString rfidTag, QString emergencyContactName, QString emergencyContactNumber)
{
    QSqlRecord record;

//    record.append(QSqlField(header.at(0), QVariant::Int));
    record.append(QSqlField(header.at(1), QVariant::String));
    record.append(QSqlField(header.at(2), QVariant::String));
    record.append(QSqlField(header.at(3), QVariant::String));
    record.append(QSqlField(header.at(4), QVariant::String));
    record.append(QSqlField(header.at(5), QVariant::String));
    record.append(QSqlField(header.at(6), QVariant::String));
    record.append(QSqlField(header.at(7), QVariant::String));
    record.append(QSqlField(header.at(8), QVariant::String));

//    record.setValue(0, participants_id);
    record.setValue(0, name);
    record.setValue(1, gender);
    record.setValue(2, idCard);
    record.setValue(3, contactNumber);
    record.setValue(4, sizeTshirt);
    record.setValue(5, rfidTag);
    record.setValue(6, emergencyContactName);
    record.setValue(7, emergencyContactNumber);


    model->insertRecord(-1,record);
    return model->rowCount();
}

/**
 * @brief ParticipantsTableModel::deleteRecords
 * @param row 待删除的行
 * @return  如果删除成功返回true，否则false
 * 删除一行记录
 */
bool ParticipantsTableModel::deleteRecords(int row)
{
    return removeRow(row);
}
