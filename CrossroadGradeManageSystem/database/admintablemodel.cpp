#include "admintablemodel.h"
#include "database/database_api.h"
#include <QSqlRecord>
#include <QSqlField>
/**************************************
 *作者: JaylenLaiHUST
 *日期: 2024-08-28
 *描述: 管理员表的model
***************************************/
AdminTableModel::AdminTableModel(QObject *parent) : QObject(parent)
{
    tableName = TABLE_NAME_ADMINS;
    header<<QObject::trUtf8("用户名")<<QObject::trUtf8("密码")<< QObject::trUtf8("备注信息");
    model = new QSqlTableModel(this);
}

/**
 * @brief AdminTableModel::createTable
 * @param tableName 数据块表名称
 * 用于创建Admin表
 */
void AdminTableModel::createTable()
{
    QSqlQuery query;
    QString str;
    str  = tr("CREATE TABLE ") + tableName + tr(" ( ");
    str += header.at(0) + tr(" VARCHAR(20) NOT NULL PRIMARY KEY, ");
    str += header.at(1) + tr(" VARCHAR(20) NOT NULL, ");
    str += header.at(2) + tr(" VARCHAR(20) NOT NULL); ");
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
void AdminTableModel::bindTable(void)
{
    model->setTable(tableName);
    model->select();
}
/**
 * @brief AdminTableModel::getModel
 * @return   QSqlTableModel型model
 * 获取注销表的Model
 */
QSqlTableModel* AdminTableModel::getModel(void)
{
    return model;
}
/**
 * @brief AdminTableModel::findRecord
 * @param personId 人员编号
 * @return QSqlRecord型记录集
 * 根据人员编号查找记录
 */
QSqlRecord AdminTableModel::findRecord(const QString &userName)
{
    int count = model->rowCount();
    qDebug() << count;

    for(int row=0; row < count; row++){
//        qDebug() << model->data(model->index(row, 0)).toString();
        if(model->data(model->index(row, 0)).toString() == userName)
            qDebug() << model->record(row);
            return model->record(row);
    }

    return QSqlRecord();
}
/**
 * @brief AdminTableModel::insertRecords
 * @param personName 人员名称
 * @param personType 身份类别
 * @param remark 备注信息
 * @return 插入记录的行号
 * 向表格中插入记录
 */
int AdminTableModel::insertRecords(QString userName, QString pawd, QString remark)
{
    QSqlQuery query;
    bool ret = false;

    // 准备 SQL 语句
    query.prepare("INSERT INTO table_admins (用户名, 密码, 备注信息) VALUES (:username, :password, :remark);");

    // 绑定参数
    query.bindValue(":username", userName);
    query.bindValue(":password", pawd);
    query.bindValue(":remark", remark);

    // 执行 SQL 语句
    ret = query.exec();

    // 提交更改
    if (ret) {
        qDebug() << "successfully insert";
    }
    else {
        qDebug() << "failed insert";
    }
    return model->rowCount();
}
/**
 * @brief AdminTableModel::updateRecords
 * @param personName 用户名
 * @param pwd 新密码
 * @param time 更新的时间
 * @return 如果更新成功返回true，否则false
 * 更新密码
 */
bool AdminTableModel::updateRecords(QString personName,QString pwd,QString time)
{
    model->setFilter(tr("用户名 = '%1'").arg(personName));
    model->select();
    if (model->rowCount() == 1)
    {
        model->setData(model->index(0, 0), QVariant(personName));
        model->setData(model->index(0, 1), QVariant(pwd));
        model->setData(model->index(0, 2), QVariant(time));
        return model->submitAll();
    }
    return false;
}
