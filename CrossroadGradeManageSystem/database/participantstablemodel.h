#ifndef PARTICIPANTSTABLEMODEL_H
#define PARTICIPANTSTABLEMODEL_H

#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlRecord>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QString>
#include <QDebug>

class ParticipantsTableModel : public QSqlTableModel
{
    Q_OBJECT
private:
    QSqlTableModel *model;//sqltablemodel,作为管理员的model

    QString tableName;//表名

    QStringList header;//表头
public:
    // 定义 tableData 为 QList 的 QList<QString>
    QList<QList<QString>> tableData;

    explicit ParticipantsTableModel(QObject *parent = 0);
    void createTable();//创建表
    void bindTable(void);//绑定表
    QSqlTableModel* getModel(void);//获取管理员表的model
    int findRecord(QString participantName);//查找记录
    int findRecordByRfidTag(QString RfidTag);
    int findRecordByIdCard(QString idcard);
    int insertRecords(QString name, QString eventName, QString gender,
                      QString idCard, QString contactNumber, QString sizeTshirt,
                      QString rfidTag, QString emergencyContactName, QString emergencyContactNumber);
    bool deleteRecords(int row);

//    bool updateRecords(QString personName, QString pwd, QString time);//更新记录

//signals:

//public slots:
};

#endif
