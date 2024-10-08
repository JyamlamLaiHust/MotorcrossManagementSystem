#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QDialog>
#include "QtMqtt/qmqttclient.h"

namespace Ui {
class LoginPage;
}
/**************************************
 *作者: JaylenLaiHUST
 *日期: 2024-08-29
 *描述: 登陆页面
***************************************/
class LoginPage : public QDialog
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = 0,QString *name = 0);
    ~LoginPage();

private slots:
    void on_btn_Return_clicked();//返回

    void on_btn_Login_clicked();//登陆

private:
    Ui::LoginPage *ui;
    QString *name;//用户名
    QMqttClient *m_client;
};

#endif // LOGINPAGE_H
