#include "broadcast.h"
#include "ui_broadcast.h"

#include <QtCore/QDateTime>
//#include <QtMqtt/QMqttClient>
#include "QtMqtt/qmqttclient.h"
#include <QtWidgets/QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>

BroadCast::BroadCast(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BroadCast)
{
    ui->setupUi(this);

    m_client = new QMqttClient(this);
//    m_client->setHostname("broker.hivemq.com");
    m_client->setHostname("8.130.126.65");
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

    QSqlQuery query;
    query.exec("select * from table_matches;");

    QSqlRecord rec = query.record();

    QString eventname;
    while(query.next())
    {
         int index_name = rec.indexOf("赛事名称");
          eventname = query.value(index_name).toString();
//         qDebug() << "赛事名称:" << data_name;
         ui->eventName_comboBox->addItem(eventname);
    }

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
    QString topic = "crossroadmanagesystem";
    QSqlQuery query;

    // 获取当前选中的赛事名称
    QString eventName = ui->eventName_comboBox->currentText();

    // SQL 查询语句
    QString sql = "SELECT 成绩记录id, 赛事名称, 打卡点名称, 时间戳, 方向, 总用时, 名次, rfid标签卡号 "
                  "FROM table_results "
                  "WHERE 方向='1' AND 赛事名称 = :eventName "
                  "AND (rfid标签卡号, 时间戳) IN ("
                  "    SELECT rfid标签卡号, MAX(时间戳) "
                  "    FROM table_results "
                  "    WHERE 方向='1' AND 赛事名称 = :eventName "
                  "    GROUP BY rfid标签卡号"
                  ") "
                  "ORDER BY rfid标签卡号";

    query.prepare(sql);
    query.bindValue(":eventName", eventName);

    // 执行 SQL 语句
    if (query.exec()) {
        while (query.next()) {
            QString resultId = query.value(0).toString();
            QString eventName = query.value(1).toString();
            QString checkPointName = query.value(2).toString();
            QString dateStamp = query.value(3).toString();
            QString direction = query.value(4).toString();
            QString sumTime = query.value(5).toString();
            QString rank = query.value(6).toString();
            QString rfidTag = query.value(7).toString();

            // 构建马拉松成绩格式的消息
//            QString str = "resultId: " + resultId + " eventName: " + eventName + " checkPointName: " + checkPointName +
//                          " timestamp: " + dateStamp + " totalTime: " + sumTime + " direction: " + direction + " rank: " + rank + " rfidTag: " + rfidTag;

            QString str = "尊敬的 " + rfidTag + " 号运动员：\n"
                    + "恭喜您成功完成了 " + eventName +" 比赛！\n"
                    + "您的比赛成绩为： "+ dateStamp + "\n"
                    + "您的名次为：" + rank + "\n"
                    + "感谢您的参与，希望您在 " + eventName + " 中收获了美好的记忆。期待下一次再次见到充满活力的您！\n"
                    + eventName + "组织方";

            // 发布消息
            if (m_client->publish(topic, str.toUtf8()) == -1) {
                qDebug() << "Could not publish message: " << str;
            } else {
                qDebug() << "Published message: " << str;
            }
        }
    } else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
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
