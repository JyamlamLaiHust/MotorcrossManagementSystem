#include "cancelgames.h"
#include "ui_cancelgames.h"
#include <QJsonObject>
#include <QJsonDocument>

CancelGames::CancelGames(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::CancelGames)
{
    ui->setupUi(this);

    // 将数据库中的比赛记录传到下拉框当中
    QSqlQuery query;
    query.exec("select * from table_matches;");
    QSqlRecord rec = query.record();

    while(query.next())
    {
         int index_name = rec.indexOf("赛事名称");
         QString data_name = query.value(index_name).toString();
         ui->eventName_comboBox->addItem(data_name);
    }

    m_client = new QMqttClient(this);
//    m_client->setHostname("broker.hivemq.com");
    m_client->setHostname("8.130.126.65");
    m_client->setPort(1883);
    m_client->connectToHost();
}

CancelGames::~CancelGames()
{
    delete ui;
}

void CancelGames::on_pushButton_clicked()
{
    QMessageBox message;

    MatchesTableModel *matchesTable = new MatchesTableModel(this);
    matchesTable->bindTable();

    QString eventName = ui->eventName_comboBox->currentText();

    if(!eventName.size()) {
        QMessageBox::warning(this,tr("温馨提示"),tr("请先选择需要删除的比赛！"),QMessageBox::Yes);
        return ;
    }

    // 检查 table_checkpoints 是否存在与 eventName 相关的记录
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM table_checkpoints WHERE 对应赛事名称 = :eventName");
    query.bindValue(":eventName", eventName);
    query.exec();

    if (!query.exec()) {
        qDebug() << "Error executing query:" << query.lastError().text();
        return;
    }
    if (query.next()) {  // 确保查询返回了结果
        int checkpointsCount = query.value(0).toInt();
        if (checkpointsCount > 0) {
            message.setText(tr("删除失败！此赛事在检查点表中有相关记录。"));
            message.exec();
            return;
        }
    }

    // 检查 table_results 是否存在与 eventName 相关的记录
    query.prepare("SELECT COUNT(*) FROM table_results WHERE 赛事名称 = :eventName");
    query.bindValue(":eventName", eventName);
//    query.exec();

    if (!query.exec()) {
        qDebug() << "Error executing query:" << query.lastError().text();
        return;
    }
    if (query.next()) {  // 确保查询返回了结果
        int resultsCount = query.value(0).toInt();
        if (resultsCount > 0) {
            message.setText(tr("删除失败！此赛事在结果表中有相关记录。"));
            message.exec();
            return;
        }
    }

    int index = matchesTable->findRecord(eventName);

//    qDebug() << index;

    QString topic = "crossroadmanagesystem";

    // 创建一个QMap用于存储键值对
    QMap<QString, QString> eventData;

    // 将数据添加到map中
    eventData["eventName"] = eventName;

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

    if (matchesTable->deleteRecord(eventName) != false)
    {
        message.setText(tr("删除比赛成功！"));
        message.exec();
        ui->eventName_comboBox->removeItem(index);
        return ;
    } else {
        //        message.setText(tr("删除比赛失败！"));
        //        message.exec();
        return ;
    }

}
