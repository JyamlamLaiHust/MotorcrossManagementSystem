#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QObject>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlRecord>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include "database_api.h"

class DBManager : public QObject
{
    Q_OBJECT
public:
    explicit DBManager(QObject *parent = 0);

    void dbClose(); //关闭数据库

    QStringList getTableNames();//获取所有表的表名

private:
    QSqlDatabase db;

    //创建数据库
    bool createDB();
};

#endif // DBMANAGER_H
