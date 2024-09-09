#include "broadcast.h"
#include "ui_broadcast.h"

#include <QtCore/QDateTime>
//#include <QtMqtt/QMqttClient>
#include "QtMqtt/qmqttclient.h"
#include <QtWidgets/QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

BroadCast::BroadCast(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BroadCast)
{
    ui->setupUi(this);

    m_client = new QMqttClient(this);
    m_client->setHostname("broker.hivemq.com");
    m_client->setPort(1883);

    connect(m_client, &QMqttClient::stateChanged, this, &BroadCast::updateLogStateChange);
//    connect(m_client, &QMqttClient::disconnected, this, &Broadcast::brokerDisconnected);

    connect(m_client, &QMqttClient::messageReceived, this, [this](const QByteArray &message, const QMqttTopicName &topic) {
        const QString content = QDateTime::currentDateTime().toString()
                    + QLatin1String(" Received Topic: ")
                    + topic.name()
                    + QLatin1String(" Message: ")
                    + message
                    + QLatin1Char('\n');
        ui->editLog->insertPlainText(content);
    });

    connect(m_client, &QMqttClient::pingResponseReceived, this, [this]() {
        ui->btn_ping->setEnabled(true);
        const QString content = QDateTime::currentDateTime().toString()
                    + QLatin1String(" PingResponse")
                    + QLatin1Char('\n');
        ui->editLog->insertPlainText(content);
    });

//    connect(ui->lineEditHost, &QLineEdit::textChanged, m_client, &QMqttClient::setHostname);
//    connect(ui->spinBoxPort, QOverload<int>::of(&QSpinBox::valueChanged), this, &Broadcast::setClientPort);
    updateLogStateChange();
}

BroadCast::~BroadCast()
{
    delete ui;
}

void BroadCast::on_btn_pub_clicked()
{

    QString sql = "SELECT 成绩记录id，赛事名称，打卡点名称，时间戳，方向，总用时，名次，rfid标签卡号 FROM table_results";

    QSqlQuery query;
    query.prepare(sql);

    // 执行 SQL 语句
    if (query.exec()) {
        qDebug() << "Record deleted successfully.";
    } else {
        qDebug() << "Delete operation failed:" << query.lastError().text();
    }

    while (query.next()) {
        QString resultId = query.value(0).toString();
        QString eventName = query.value(1).toString();
        QString checkPointName = query.value(2).toString();
        QString dateStamp = query.value(3).toString();
        QString sumTime = query.value(4).toString();
        QString direction = query.value(5).toString();
        QString rank = query.value(6).toString();
        QString rfidTag = query.value(7).toString();

        QString str = resultId + eventName + checkPointName + dateStamp + sumTime + direction + rank + rfidTag;

        if (m_client->publish(str, str.toUtf8()) == -1) {
            QMessageBox::critical(this, QLatin1String("Error"), QLatin1String("Could not publish message"));
        } else {
            qDebug() << "Published message" << str;
        }
    }

//    if (m_client->publish(ui->lineEditTopic->text(), ui->lineEditMessage->text().toUtf8()) == -1)
//        QMessageBox::critical(this, QLatin1String("Error"), QLatin1String("Could not publish message"));
}

void BroadCast::updateLogStateChange()
{
    const QString content = QDateTime::currentDateTime().toString()
                    + QLatin1String(": State Change")
                    + QString::number(m_client->state())
                    + QLatin1Char('\n');
    ui->editLog->insertPlainText(content);
}

void BroadCast::on_btn_ping_clicked()
{
    if (m_client->state() == QMqttClient::Disconnected) {
//        ui->lineEditHost->setEnabled(false);
//        ui->spinBoxPort->setEnabled(false);
        ui->eventName_comboBox->setEnabled(false);
        ui->btn_ping->setText(tr("Disconnect"));
        m_client->connectToHost();
    } else {
//        ui->lineEditHost->setEnabled(true);
//        ui->spinBoxPort->setEnabled(true);
        ui->eventName_comboBox->setEnabled(true);
        ui->btn_ping->setText(tr("Connect"));
        m_client->disconnectFromHost();
    }
}
