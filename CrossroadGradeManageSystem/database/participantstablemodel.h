#ifndef PARTICIPANTSTABLEMODEL_H
#define PARTICIPANTSTABLEMODEL_H

#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlRecord>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QString>
#include <QDebug>

class ParticipantsTableModel : public QObject
{
    Q_OBJECT
private:
    QSqlTableModel *model;//sqltablemodel,作为管理员的model

    QString tableName;//表名

    QStringList header;//表头
public:
    explicit ParticipantsTableModel(QObject *parent = 0);
    void createTable();//创建表
    void bindTable(void);//绑定表
    QSqlTableModel* getModel(void);//获取管理员表的model
    QSqlRecord findRecord(const int &participants_id);//查找记录
    int insertRecords(int participants_id, QString name, QString gender,
                                              QString id_number, QString contact_number, QString size_tshirt,
                                              QString rfid_tag_id, QString emergency_contact_name, QString emergency_contact_number);
//    bool updateRecords(QString personName, QString pwd, QString time);//更新记录

//signals:

//public slots:
};

#endif
