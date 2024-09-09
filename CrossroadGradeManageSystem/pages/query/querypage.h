#ifndef QUERYPAGE_H
#define QUERYPAGE_H

#include "database/dbmanager.h"
#include "serialThread/serialportthread.h"
#include "inc/m1356dll.h"
#include <QWidget>
#include <QDebug>

namespace Ui {
class QueryPage;
}

class QueryPage : public QWidget
{
    Q_OBJECT

public:
    explicit QueryPage(QWidget *parent = 0, SerialPortThread *serial = 0);
    ~QueryPage();

private slots:
    void on_tagIdReceived(QString tagId);//卡号接收槽

    void on_btn_recognise_clicked();

    void on_btn_Query_clicked();

    void currentAction(QAction *action);

    void updateTableView(QSqlTableModel *model);//更新表TableView视图

    void on_comboBox_currentIndexChanged(const QString &text);//combox索引发生改变时调用


private:
    Ui::QueryPage *ui;

    QSqlTableModel *currentModel;//用于存放当前的model

    SerialPortThread *serialThread;//串口线程

    M1356Dll *m1356dll;//13.56MHz模块的库类
};

#endif // QUERYPAGE_H
