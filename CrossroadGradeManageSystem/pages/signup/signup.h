#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include "database/dbmanager.h"
#include "serialThread/serialportthread.h"
#include "inc/m1356dll.h"
#include <QMessageBox>
#include <QTime>
#include <QDateTime>

namespace Ui {
class SignUp;
}

class SignUp : public QWidget
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = 0, SerialPortThread *serial = 0);
    ~SignUp();

private slots:

    void on_btn_Time_clicked();

    void on_btn_refresh_clicked();

    void on_btn_reset_clicked();

    void on_btn_recognize_clicked();

private:
    Ui::SignUp *ui;

    SerialPortThread *serialThread;//串口线程

    M1356Dll *m1356dll;//13.56MHz模块的库类
};

#endif // SIGNUP_H
