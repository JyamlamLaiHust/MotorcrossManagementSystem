#ifndef CANCELGAMES_H
#define CANCELGAMES_H

#include <QDialog>
#include "serialThread/serialportthread.h"
#include "database/dbmanager.h"
#include "inc/m1356dll.h"
#include <QMessageBox>

namespace Ui {
class CancelGames;
}

class CancelGames : public QDialog
{
    Q_OBJECT

public:
    explicit CancelGames(QDialog *parent = 0);
    ~CancelGames();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CancelGames *ui;

    SerialPortThread *serialPortThread;//串口线程

    M1356Dll *m1356dll;//13.56MHz模块库
};

#endif // CANCELGAMES_H
