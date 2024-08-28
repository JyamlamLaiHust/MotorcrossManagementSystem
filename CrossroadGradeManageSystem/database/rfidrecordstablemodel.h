#ifndef RFIDTAGSTABLEMODEL_H
#define RFIDTAGSTABLEMODEL_H

#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlRecord>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QString>
#include <QDebug>

class RfidRecordsTableModel : public QObject
{
    Q_OBJECT
private:
    QSqlTableModel *model;//sqltablemodel,作为管理员的model

    QString tableName;//表名

    QStringList header;//表头
public:
    explicit RfidRecordsTableModel(QObject *parent = 0);
    void createTable();//创建表
    void bindTable(void);//绑定表
    QSqlTableModel* getModel(void);//获取管理员表的model
    QSqlRecord findRecord(const int &RfidTags_id);//查找记录
    int insertRecords(int record_id, QString rfid_tag_id, QString checkpoint_id,
                                              QString timestamp, QString direction); //插入记录
//    bool updateRecords(QString personName, QString pwd, QString time);//更新记录

//signals:

//public slots:
};

#endif
