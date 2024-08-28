#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>
#include "database/database_api.h"
#include "pages/pages.h"
#include "serialThread/serialportthread.h"
#include "inc/m1356dll.h"
#include <QLabel>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void addWidgets(); //加载页面

    void handConnect();//信号插槽连接

private slots:
    void Login(); //登陆

    void viewMainPage(); //显示主页

private:
    Ui::MainWindow *ui;

    QString adminName;//管理员

    bool IsLogin;//登陆标志

    SerialPortThread *serialPortThread;//自定义串口处理线程

    QSerialPort *serialPort;//串日类对象

    M1356Dll *m1356dll;//13.56M的库对象

    SettingsDialog *settingsDialog;//串口配置对话框

//    Qstring tagId;//卡号
};

#endif // MAINWINDOW_H
