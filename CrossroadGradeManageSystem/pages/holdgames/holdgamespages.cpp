#include "holdgamespages.h"
#include "ui_holdgamespages.h"
#include <QJsonObject>
#include <QJsonDocument>

HoldGamesPages::HoldGamesPages(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HoldGamesPages)
{
    ui->setupUi(this);

    // 将数据库中的比赛记录传到下拉框当中
    QSqlQuery query;
    query.exec("select * from table_matches;");

//    if (!query.isActive()) {
//       qDebug() << "Query failed:" << query.lastError().text();
//       return;
//   }

    QSqlRecord rec = query.record();

    while(query.next())
    {
         int index_name = rec.indexOf("赛事名称");
         QString data_name = query.value(index_name).toString();
//         qDebug() << "赛事名称:" << data_name;

         ui->eventName_comboBox->addItem(data_name);
    }

    m_client = new QMqttClient(this);
//    m_client->setHostname("broker.hivemq.com");
    m_client->setHostname("8.130.126.65");
    m_client->setPort(1883);
    m_client->connectToHost();
}

HoldGamesPages::~HoldGamesPages()
{
    delete ui;
}

/**
 * @brief HoldGamesPages::on_btn_create_clicked
 * 创建按钮点击事件
 */
void HoldGamesPages::on_btn_create_clicked()
{
    QMessageBox message;

    // 读取前端数据
    QString eventName = ui->eventName_lineEdit->text(); // 比赛名称
    QDateTime startTime = ui->startTime_dateTimeEdit->dateTime(); // 比赛开始时间
    QDateTime endTime = ui->endTime_dateTimeEdit->dateTime(); // 比赛结束时间
    float raceDistance = (ui->raceDistance_lineEdit->text()).toFloat(); // 赛程距离
    float elevationGain = (ui->elevationGain_lineEdit->text()).toFloat(); // 总攀升高度
    float registrationFee = (ui->registrationFee_lineEdit->text()).toFloat(); // 报名费

    // 数据合理性校验
    message.setStandardButtons(QMessageBox::Yes);
    message.setWindowTitle(tr("温馨提示"));
    message.setIcon(QMessageBox::Warning);

    // 校验用户名的长度，采用utf8编码，汉语占用2个字符的宽度
    if(eventName.toUtf8().length() < 1)
    {
        message.setText(tr("比赛名称不能为空。"));
        message.exec();
        return;
    }
    if(startTime >= endTime)
    {
        message.setText(tr("比赛开始时间不能晚于或等于比赛结束时间，请重新设置！"));
        message.exec();
        return;
    }

    // 检查 raceDistance, elevationGain, registrationFee 是否为空
    QString raceDistanceStr = ui->raceDistance_lineEdit->text();
    QString elevationGainStr = ui->elevationGain_lineEdit->text();
    QString registrationFeeStr = ui->registrationFee_lineEdit->text();
    if (raceDistanceStr.isEmpty() || elevationGainStr.isEmpty() || registrationFeeStr.isEmpty()) {
        QMessageBox::warning(this, tr("输入错误"), tr("赛程距离、总攀升高度和报名费均不能为空！"), QMessageBox::Ok);
        return;
    }

    MatchesTableModel *matchesTable = new MatchesTableModel(this);
    matchesTable->bindTable();


    if(matchesTable->findRecord(eventName) != -1)
    {
        message.setText(tr("该比赛已创建，请核对名称后重新创建!"));
        message.exec();
        delete matchesTable;
        return ;
    }

//    if(!matchesTable->insertRecords(eventName, startTime, endTime,
//                                    raceDistance, elevationGain, registrationFee))
//    {
//        message.setText(tr("比赛创建失败，请重试!"));
//        message.exec();
//        delete matchesTable;
//        return ;
//    }

    message.setText(tr("比赛创建成功!"));
    message.exec();

    QString topic = "crossroadmanagesystem";

    // 创建一个QMap用于存储键值对
    QMap<QString, QString> eventData;

    // 将数据添加到map中
    eventData["tableName"] = "table_matches";
    eventData["赛事名称"] = eventName;
    eventData["赛事开始时间"] = startTime.toString(Qt::ISODate);
    eventData["赛事结束时间"] = endTime.toString(Qt::ISODate);
    eventData["赛程距离"] = QString::number(raceDistance); // 转换为字符串
    eventData["总攀升高度"] = QString::number(elevationGain);
    eventData["赛事报名费用"] = QString::number(registrationFee);


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

    ui->eventName_comboBox->addItem(eventName);

    delete matchesTable;
}

/**
 * @brief HoldGamesPages::on_btn_bond_clicked
 * 绑定按钮点击事件
 */
void HoldGamesPages::on_btn_bond_clicked()
{
    QMessageBox message;

    // 读取前端数据
    QString eventName = ui->eventName_comboBox->currentText(); // 比赛名称
    QString checkPointName = ui->checkpointName_lineEdit->text(); // 打卡点名称
    float segmentDistance = (ui->segmentDistance_lineEdit->text()).toFloat(); // 分段距离
    float segmentElevation = (ui->segmentElevation_lineEdit->text()).toFloat(); // 分段攀升
    QDateTime openTime = ui->openTime_dateTimeEdit->dateTime(); // 开放时间
    QDateTime closeTime = ui->closeTime_dateTimeEdit->dateTime(); // 关闭时间


    // 数据合理性校验
    message.setStandardButtons(QMessageBox::Yes);
    message.setWindowTitle(tr("温馨提示"));
    message.setIcon(QMessageBox::Warning);

    // 校验用户名的长度，采用utf8编码，汉语占用2个字符的宽度
    if(checkPointName.toUtf8().length() < 1)
    {
        message.setText(tr("打卡点名称不能为空。"));
        message.exec();
        return;
    }
    if(openTime >= closeTime)
    {
        message.setText(tr("比赛开始时间应早于比赛结束时间，请重新设置！"));
        message.exec();
        return;
    }

    CheckPointsTableModel *checkPointTable = new CheckPointsTableModel(this);
    checkPointTable->bindTable();


    if(checkPointTable->findRecord(eventName, checkPointName) != -1)
    {
        message.setText(tr("该打卡点已创建，请核对名称后重新创建!"));
        message.exec();
        delete checkPointTable;
        return ;
    }


//    if(!checkPointTable->insertRecords(eventName, checkPointName, segmentDistance, segmentElevation, openTime, closeTime))
//    {
//        message.setText(tr("打卡点创建失败，请重试!"));
//        message.exec();
//        delete checkPointTable;
//        return ;
//    }

    if(checkPointTable->checkRaceDataConsistency(eventName) == false)
    {
        checkPointTable->deleteRecord(checkPointName);
        message.setText(tr("打卡点分段距离与赛事设定冲突，请确认数据无误后重新尝试绑定！"));
        message.exec();

        delete checkPointTable;
        return ;
    }

    if(checkPointTable->checkCheckpointTimes(eventName, openTime, closeTime) == false)
    {
        checkPointTable->deleteRecord(checkPointName);
        message.setText(tr("打卡点开始或结束时间与赛事冲突，请确认数据无误后重新尝试绑定！"));
        message.exec();

        delete checkPointTable;
        return ;
    }

    message.setText(tr("打卡点创建成功!"));
    message.exec();

    QString topic = "crossroadmanagesystem";

    // 创建一个QMap用于存储键值对
    QMap<QString, QString> eventData;

    // 将数据添加到map中
    eventData["tableName"] = "table_checkpoints";
    eventData["对应赛事名称"] = eventName;
    eventData["检查站名称"] = checkPointName;

    eventData["分段距离"] = QString::number(segmentDistance);
    eventData["分段攀升"] = QString::number(segmentElevation);

    // 假设 openTime 和 closeTime 是 QDateTime 对象
    eventData["开放时间"] = openTime.toString("yyyy-MM-dd hh:mm:ss");
    eventData["关闭时间"] = closeTime.toString("yyyy-MM-dd hh:mm:ss");

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

    delete checkPointTable;
}
