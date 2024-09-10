#ifndef CHECKIN_H
#define CHECKIN_H

#include <QWidget>
#include "database/dbmanager.h"
#include "serialThread/serialportthread.h"
#include "inc/m1356dll.h"
#include <QMessageBox>
#include "QtMqtt/qmqttclient.h"


namespace Ui {
class CheckIn;
}

class CheckIn : public QWidget
{
    Q_OBJECT

public:
    explicit CheckIn(QWidget *parent = 0, SerialPortThread *serial = 0);
    ~CheckIn();

private slots:
    void on_tagIdReceived(QString tagId);//卡号接收槽

    void on_btn_identify_clicked(); //识别

    void on_btn_register_clicked(); //注册

    void on_btn_refresh_clicked(); //刷新注册表

    void on_btn_reset_clicked(); //重置



private:
    Ui::CheckIn *ui;

    SerialPortThread *serialThread;//串口线程

    M1356Dll *m1356dll;//13.56MHz模块库类

    QMqttClient *m_client;
};

#endif // CHECKIN_H
