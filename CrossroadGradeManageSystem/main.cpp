#include "mainwindow.h"
#include "database/database_api.h"
#include <QApplication>
#include <QtCore>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling,true);

    QApplication a(argc, argv);
    a.setAttribute(Qt::AA_EnableHighDpiScaling);
    MainWindow w;
    DB_Init();//数据库初始化
    w.show();
    return a.exec();
}
