#ifndef CHECKPOINTSTABLEMODEL_H
#define CHECKPOINTSTABLEMODEL_H

#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlRecord>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QString>
#include <QDateTime>
#include <QDebug>
#include <QMessageBox>


class CheckPointsTableModel : public QObject
{
    Q_OBJECT
private:
    QSqlTableModel *model;//sqltablemodel,作为管理员的model

    QString tableName;//表名

    QStringList header;//表头
public:
    explicit CheckPointsTableModel(QObject *parent = 0);
    void createTable();//创建表
    void bindTable(void);//绑定表
    QSqlTableModel* getModel(void);//获取管理员表的model
    int findRecord(QString eventName, QString checkPointName);//查找记录
    int insertRecords(QString eventName, QString checkPointName, float segmentDistance,
                      float segmentElevation, QDateTime openTime, QDateTime closeTime);
    bool deleteRecord(QString checkpointname);
    bool checkRaceDataConsistency(const QString &eventName);
    bool checkCheckpointTimes(const QString &eventName, QDateTime openTime, QDateTime closeTime);
//    bool updateRecords(QString personName, QString pwd, QString time);//更新记录

//signals:

//public slots:
};

#endif
