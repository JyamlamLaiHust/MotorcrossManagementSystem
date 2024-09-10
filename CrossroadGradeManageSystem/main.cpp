#include "mainwindow.h"
#include "database/database_api.h"
#include <QApplication>
#include <QtCore>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling,true);
    DB_Init();//数据库初始化
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
