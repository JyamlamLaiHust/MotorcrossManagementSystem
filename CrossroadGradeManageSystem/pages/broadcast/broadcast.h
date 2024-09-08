#ifndef BROADCAST_H
#define BROADCAST_H

#include <QWidget>

#include "QtMqtt/qmqttclient.h"

namespace Ui {
class BroadCast;
}

class BroadCast : public QWidget
{
    Q_OBJECT

public:
    explicit BroadCast(QWidget *parent = nullptr);
    ~BroadCast();

private slots:
    void on_btn_pub_clicked();

    void updateLogStateChange();

    void on_btn_ping_clicked();

private:
    Ui::BroadCast *ui;

    QMqttClient *m_client;
};

#endif // BROADCAST_H
