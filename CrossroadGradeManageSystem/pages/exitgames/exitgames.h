#ifndef EXITGAMES_H
#define EXITGAMES_H

#include <QDialog>
#include "serialThread/serialportthread.h"
#include "database/dbmanager.h"
#include "inc/m1356dll.h"
#include <QMessageBox>

namespace Ui {
class ExitGames;
}

class ExitGames : public QDialog
{
    Q_OBJECT

public:
    explicit ExitGames(QWidget *parent = 0, QString *rfidTag = 0, SerialPortThread *serial = 0);
    ~ExitGames();

private slots:
    void on_btn_recognize_clicked();

    void on_btn_exitgame_clicked();

    void on_tagIdReceived(QString tagId);

private:
    Ui::ExitGames *ui;

    SerialPortThread *serialThread;//串口线程

    M1356Dll *m1356dll;//13.56MHz模块库

    QString *rfidTag;//用户名
};

#endif // EXITGAMES_H
