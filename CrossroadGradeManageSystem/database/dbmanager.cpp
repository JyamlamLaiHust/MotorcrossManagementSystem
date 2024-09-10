#include "dbmanager.h"

DBManager::DBManager(QObject *parent) : QObject(parent)
{
    if (this->createDB())
    {
        if(!this->tableExist(TABLE_NAME_ADMINS))    //op AdminsTableModel
        {
            AdminTableModel admins;
            admins.createTable();
        }
        if(!this->tableExist(TABLE_NAME_PARTICIPANTS))    //op ParticipantsTableModel
        {
            ParticipantsTableModel participants;
            participants.createTable();
        }
        if(!this->tableExist(TABLE_NAME_MATCHES))    //op ParticipantsTableModel
        {
            MatchesTableModel results;
            results.createTable();
        }
        if(!this->tableExist(TABLE_NAME_CHECKPOINTS))    //op ParticipantsTableModel
        {
            CheckPointsTableModel checkpoints;
            checkpoints.createTable();
        }
//        if(!this->tableExist(TABLE_NAME_RFIDRECORDS))    //op ParticipantsTableModel
//        {
//            RfidRecordsTableModel rfidrecords;
//            rfidrecords.createTable();
//        }
        if(!this->tableExist(TABLE_NAME_RESULTS))    //op ParticipantsTableModel
        {
            ResultsTableModel results;
            results.createTable();
        }   
    }
}

/**
 * @brief DBManager::tableExist
 * @param tableName 表名
 * @return  如果存在返回true，否则返回false
 * 用于判断表是否存在
 */
bool DBManager::tableExist(const QString &tableName)    //judge DB exist
{
    int count = 0 ;
    QString sqlText = QObject::tr("SELECT COUNT(*) FROM INFORMATION_SCHEMA.TABLES WHERE TABLE_SCHEMA = 'crossroadmanagesystem' AND TABLE_NAME = '%1';").arg(tableName);
    QSqlQuery query;        // judge by select ans
    query.exec(sqlText);
    if(query.next())
        count = query.value(0).toInt();
    if(count > 0)
        return true;
    else
        return false;
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
    db.setDatabaseName("crossroadmanagesystem");
    db.setUserName("root");
    db.setPassword("123456");
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
    QString sqlText = QObject::tr("SELECT TABLE_NAME "
                                  "FROM INFORMATION_SCHEMA.TABLES "
                                  "WHERE TABLE_SCHEMA = DATABASE() "
                                  "ORDER BY TABLE_NAME;");
    QSqlQuery query;

//    // 打印 SQL 查询语句
//    qDebug() << "Executing SQL query:" << sqlText;

//    if (!query.exec(sqlText)) {
//        // 如果查询失败，打印错误信息
//        qDebug() << "Query execution failed:" << query.lastError().text();
//        return tables;
//    }

//    // 查询成功
//    qDebug() << "Query executed successfully.";

    while (query.next()) {
        tables << query.value(0).toString();
    }

//    // 打印获取到的表名数量
//    qDebug() << "Number of tables found:" << tables.size();
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
