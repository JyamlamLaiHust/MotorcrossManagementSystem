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
