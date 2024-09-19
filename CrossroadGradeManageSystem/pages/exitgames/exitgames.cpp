#include "exitgames.h"
#include "ui_exitgames.h"
#include <QJsonObject>
#include <QJsonDocument>

ExitGames::ExitGames(QWidget *parent, QString *rfidTags, SerialPortThread *serial) :
    QDialog(parent),
    ui(new Ui::ExitGames),
    rfidTag(rfidTags),
    serialThread(serial)
{
    ui->setupUi(this);
    this->serialThread = serial;
    m1356dll = new M1356Dll();

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

    m_client = new QMqttClient(this);
//    m_client->setHostname("broker.hivemq.com");
    m_client->setHostname("8.130.126.65");
    m_client->setPort(1883);
    m_client->connectToHost();
}

ExitGames::~ExitGames()
{
    delete ui;
}

void ExitGames::on_btn_recognize_clicked()
{
    if(!serialThread->serialPortIsOpen())
    {
        QMessageBox::warning(this,tr("温馨提示"),tr("请先连接读卡器后再试！"),QMessageBox::Yes);
        return;
    }
    uint16 frameLen;
    quint8 buffer[1];
    uint8 *p;
    memset(buffer, 0, 1);
    buffer[0] = RC632_14443_ALL;
    p = m1356dll->RC632_SendCmdReq(RC632_CMD_REQUEST_A,buffer,1);
    frameLen = BUILD_UINT16(p[0], p[1]);
    serialThread->writeData((char *)(p + 2 ),frameLen);
}

void ExitGames::on_btn_exitgame_clicked()
{
    QMessageBox message;

    QString rfidTag = ui->rfidTags_lineEdit->text();

    ParticipantsTableModel *participantsTable = new ParticipantsTableModel(this);
    participantsTable->bindTable();

    qDebug() << "rfidTag: " <<rfidTag;
    int row = participantsTable->findRecordByRfidTag(rfidTag);

    QString topic = "crossroadmanagesystem";

    // 创建一个QMap用于存储键值对
    QMap<QString, QString> eventData;

    // 将数据添加到map中
    eventData["rfidTag"] = rfidTag;

    QJsonObject jsonObject;
    for (auto it = eventData.begin(); it != eventData.end(); ++it) {
        jsonObject.insert(it.key(), QJsonValue(it.value()));
    }

    // 将QJsonObject转换为QJsonDocument
    QJsonDocument jsonDoc(jsonObject);

    // 将QJsonDocument转换为 QByteArray
    QByteArray mqttmessage = jsonDoc.toJson(QJsonDocument::Compact);


    if (m_client->publish(topic, mqttmessage) == -1) {
        QMessageBox::critical(this, QLatin1String("Error"), QLatin1String("Could not publish message"));
    } else {
        qDebug() << "Published message" << mqttmessage;
    }

    if(row != -1) {
        participantsTable->deleteRecord(rfidTag);
        message.setText(tr("运动员退出比赛成功！"));
        message.exec();
        return ;
    } else
    {
        message.setText(tr("找不到该运动员记录。"));
        message.exec();
        return ;
    }
}

/**
 * @brief RegistorWidget::on_tagIdReceived
 * @param tagId 标签ID(卡号)
 * 当读取到卡号时调用该方法
 */
void ExitGames::on_tagIdReceived(QString tagId){
    qDebug() << "1111111";
    ui->rfidTags_lineEdit->setText(tagId);
}



