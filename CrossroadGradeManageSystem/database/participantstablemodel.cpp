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
//    qDebug() << tableName;
    header<<QObject::trUtf8("运动员id")<<QObject::trUtf8("姓名")<< QObject::trUtf8("参赛名称") << QObject::trUtf8("性别")
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
    str += header.at(2) + tr(" VARCHAR(100) NOT NULL, ");
    str += header.at(3) + tr(" CHAR(100) NOT NULL, ");
    str += header.at(4) + tr(" VARCHAR(50) UNIQUE NOT NULL, ");
    str += header.at(5) + tr(" VARCHAR(100), ");
    str += header.at(6) + tr(" char(100) DEFAULT 'L', ");
    str += header.at(7) + tr(" VARCHAR(100) UNIQUE NOT NULL, ");
    str += header.at(8) + tr(" VARCHAR(100), ");
    str += header.at(9) + tr(" VARCHAR(100)); ");

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
//    qDebug() << "participants's bindTable: " << tableName;
    model->setTable(tableName);
    model->select();
//    qDebug() << "!";
//    qDebug() << model->rowCount();
//    qDebug() << model->columnCount();

//    QList<QPair<int, QString>> tableData;

//    QSqlQuery query;
//    if (!query.exec("SELECT * FROM table_participants")) {
//        qDebug() << "Query execution failed:" << query.lastError().text();
//        return;
//    }

//    while (query.next()) {
//        // 假设每行有两列：id 和 name
//        int id = query.value(0).toInt();
//        QString name = query.value(1).toString();
//        tableData.append(QPair<int, QString>(id, name)); // 添加数据到容器中

//        // 打印每条记录，用于调试
//        qDebug() << "Loaded record:" << id << name;
//    }

//    bool success = model->select();
//    if(success) {
//        qDebug() << "Data loaded successfully";
//        qDebug() << model->rowCount();
//        qDebug() << model->columnCount();
//    } else {
//        qDebug() << "failed to load data: " << model->lastError().text();
//    }
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
        if((model->data(model->index(row, 1))).toString() == participantName)
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
    qDebug() << count;

    for(int row=0; row < count; row++){
//        qDebug() << model->data(model->index(row, 4));
        if(model->data(model->index(row, 4)) == idcard)
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
//        qDebug() << model->data(model->index(row, 7));
        if(model->data(model->index(row, 7)) == RfidTag)
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
int ParticipantsTableModel::insertRecords(QString name, QString eventName, QString gender,
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
    record.append(QSqlField(header.at(9), QVariant::String));

//    record.setValue(0, participants_id);
    record.setValue(0, name);
    record.setValue(1, eventName);
    record.setValue(2, gender);
    record.setValue(3, idCard);
    record.setValue(4, contactNumber);
    record.setValue(5, sizeTshirt);
    record.setValue(6, rfidTag);
    record.setValue(7, emergencyContactName);
    record.setValue(8, emergencyContactNumber);

    qDebug() << record;


    bool success = model->insertRecord(-1,record);
    if (!success) {
        qDebug() << "Insert failed:" << model->lastError().text();
        return -1;
    } else {
        return model->rowCount();
    }
}

/**
 * @brief ParticipantsTableModel::deleteRecords
 * @param row 待删除的行
 * @return  如果删除成功返回true，否则false
 * 删除一行记录
 */
bool ParticipantsTableModel::deleteRecord(QString rfidTag)
{
    // 添加一个查询记录逻辑
    QSqlQuery query;
    QString sql = "DELETE FROM table_participants WHERE rfid标签卡号=:rfidTag;";
    QMessageBox message;

    // 准备 SQL 语句
    query.prepare(sql);
    query.bindValue(":rfidTag", rfidTag);

    if(!query.exec()) {
        qDebug() << "Delete operation failed:" << query.lastError().text();
        return false;
    } else {
        qDebug() << "Record deleted successfully.";
    }
    return true;
}
