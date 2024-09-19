#ifndef RESULTSTABLE_H
#define RESULTSTABLE_H

#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlRecord>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QString>
#include <QTime>
#include <QDebug>

class ResultsTableModel : public QSqlTableModel
{
    Q_OBJECT
private:
    QSqlTableModel *model;//sqltablemodel,作为管理员的model

    QString tableName;//表名

    QStringList header;//表头
public:
    explicit ResultsTableModel(QObject *parent = 0);
    void createTable();//创建表
    void bindTable(void);//绑定表
    QSqlTableModel* getModel(void);//获取管理员表的model
    int findRecord(QString rfidTag, QString checkPointName, QString direction);//查找记录
    int insertRecords(QString eventName, QString checkPointName, QTime time, QString direction, int sumTime, int rank, QString rfidTag);
    int getRank(const QString &matchName, const QString &checkpointName, const QString &direction, int totalTime);
    bool checkRfidTagInMatches(const QString& rfidTag, const QString& eventName);
    //    bool updateRecords(QString personName, QString pwd, QString time);//更新记录

//signals:

//public slots:
};

#endif
