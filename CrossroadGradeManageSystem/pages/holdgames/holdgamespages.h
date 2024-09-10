#ifndef HOLDGAMESPAGES_H
#define HOLDGAMESPAGES_H

#include <QWidget>
#include "database/dbmanager.h"
#include "serialThread/serialportthread.h"
#include "inc/m1356dll.h"
#include <QMessageBox>
#include "QtMqtt/qmqttclient.h"

namespace Ui {
class HoldGamesPages;
}

class HoldGamesPages : public QWidget
{
    Q_OBJECT

public:
    explicit HoldGamesPages(QWidget *parent = 0);
    ~HoldGamesPages();

private slots:
    void on_btn_create_clicked();

    void on_btn_bond_clicked();

private:
    Ui::HoldGamesPages *ui;
    QMqttClient *m_client;
};

#endif // HOLDGAMESPAGES_H
