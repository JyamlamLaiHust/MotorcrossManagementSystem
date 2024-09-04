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
    explicit SignUp(QWidget *parent = 0);
    ~SignUp();

private slots:
    
    void on_btn_arrivalTime_clicked();

    void on_btn_departmentTime_clicked();

    void on_btn_refresh_clicked();

    void on_btn_reset_clicked();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUP_H
