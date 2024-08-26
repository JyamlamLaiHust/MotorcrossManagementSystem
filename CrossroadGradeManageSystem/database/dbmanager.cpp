#include "dbmanager.h"

DBManager::DBManager(QObject *parent) : QObject(parent)
{
    if (this->createDB())
    {

    }
}

/**
 * @brief RecordTableModel::createDB
 * @param dbName 数据库名称
 * 用于创建数据库
 */
bool DBManager::createDB() // createDB by name
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("CrossroadManageSystem");
    db.setUserName("root");
    db.setPassword("admin");
    bool ok = db.open();
    if (ok){
//        QMessageBox::information(this, "infor", "success");
        qDebug() << "database create success!";
        return true;
    }
    else {
//        QMessageBox::information(this, "infor", "open failed");
        qDebug()<< "database create failed!";
        return false;
    }
}

/**
 * @brief DBManager::dbClose
 * 关闭数据库
 */
void DBManager::dbClose()
{
    if(db.isOpen())
        db.close();
}

/**
 * @brief DBManager::getTableNames
 * @return  数据库表集合
 * 获取数据库所有表的表名
 */
QStringList DBManager::getTableNames()
{
    QStringList tables; // get table by name
    QString sqlText = QObject::tr("select name from sqlite_master where type='table' order by name;");
    QSqlQuery query;
    query.exec(sqlText);
    while(query.next())
    {
        tables << query.value(0).toString();
    }
    return tables;
}

static DBManager *dbManager;
/**
 * @brief DB_Init
 * 创建数据库管理对象实体，初始化数据库
 */
void DB_Init()
{
    dbManager = new DBManager();
}
/**
 * @brief DB_Close
 * 关闭数据库
 */
void DB_Close()
{
    dbManager->dbClose();
}
/**
 * @brief getTableNames
 * @return QStringList型的表名集合
 * 获取数据库所有表的表名
 */
QStringList getTableNames()
{
    return dbManager->getTableNames();  // wrap for get table
}

