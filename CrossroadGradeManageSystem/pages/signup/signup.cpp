#include "signup.h"
#include "ui_signup.h"

#include <QJsonObject>
#include <QJsonDocument>

SignUp::SignUp(QWidget *parent, SerialPortThread *serial) :
    QWidget(parent),
    ui(new Ui::SignUp),
    timer(new QTimer(this)) // 创建 QTimer 对象
{
    ui->setupUi(this);

    this->serialThread = serial;
    m1356dll = new M1356Dll();

    connect(timer, &QTimer::timeout, this, &SignUp::updateCurrentTime);

    // 启动定时器，每秒更新一次时间
    timer->start(1000); // 每隔 1 秒触发一次

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


    connect(ui->eventName_comboBox, QOverload<const QString &>::of(&QComboBox::currentTextChanged),
                this, &SignUp::onEventNameChanged);

    m_client = new QMqttClient(this);
//    m_client->setHostname("broker.hivemq.com");
    m_client->setHostname("8.130.126.65");
    m_client->setPort(1883);
    m_client->connectToHost();
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::updateCurrentTime()
{
    // 更新 lineEdit 显示当前时间
    ui->time_lineEdit->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    ui->Time_timeEdit->setTime(QDateTime::currentDateTime().time());
}


void SignUp::on_btn_Time_clicked()
{
    QMessageBox message;

    // 读取前端数据

    QString eventName = ui->eventName_comboBox->currentText(); // 赛事名称
    QString checkPointName = ui->checkPoint_comboBox->currentText(); // 打卡点名称

    QTime currentTime = QDateTime::currentDateTime().time();// 时间戳
    ui->Time_timeEdit->setTime(currentTime);

    QString direction = ui->direction_lineEdit->text();

    ResultsTableModel *resultTable = new ResultsTableModel(this);
    resultTable->bindTable();

    MatchesTableModel *matchesTable = new MatchesTableModel(this);
    matchesTable->bindTable();

    QDateTime startTime = matchesTable->getStartTime(eventName);

    // 计算从当前时间到 startTime 的秒数
    int sumTime = qAbs(QDateTime::currentDateTime().secsTo(startTime));

    // 将秒数转换为分钟和秒数
    int minutes = sumTime / 60;
    int seconds = sumTime % 60;

    // 获取当前时间
    QDateTime aTime = QDateTime::currentDateTime();

//    // 将时间差加到当前时间上
//    QDateTime futureTime = aTime.addSecs(sumTime);

    // 格式化输出为 yyyy-MM-dd hh:mm:ss 格式
    QString formattedTime = aTime.toString("yyyy-MM-dd hh:mm:ss");

    // 设置到 lineEdit 控件中
    ui->sumTime_lineEdit->setText(formattedTime);

    int rank = resultTable->getRank(eventName, checkPointName, direction, sumTime);
    ui->rank_lineEdit->setText(QString::number(rank));

    QString rfidTag = ui->rfidTag_lineEdit->text();

    // 数据合理性校验
    message.setStandardButtons(QMessageBox::Yes);
    message.setWindowTitle(tr("温馨提示"));
    message.setIcon(QMessageBox::Warning);


    if(!eventName.size())
    {
        message.setText(tr("请选择打卡赛事。"));
        message.exec();
        return;
    }
    if(!checkPointName.size())
    {
        message.setText(tr("请选择打卡点。"));
        message.exec();
        return;
    }
    if (direction != "1" && direction != "0") {
        message.setText(tr("请正确填写方向。"));
        message.exec();
        return;
    }

    if(!rfidTag.length())
    {
        message.setText(tr("没发现卡号，请先识别到卡号了再打卡。"));
        message.exec();
        return;
    }

    if(resultTable->findRecord(rfidTag, checkPointName, direction) != -1)
    {
        message.setText(tr("该运动员在同一方向上已打卡。"));
        message.exec();
        delete resultTable;
        return ;
    }

    if(direction == '1' && resultTable->findRecord(rfidTag, checkPointName, "0") == -1) {
        message.setText(tr("该运动员需要先打到达卡才能打离开卡。"));
        message.exec();
        return;
    }

    if(resultTable->checkRfidTagInMatches(rfidTag, eventName) == false)
    {
        message.setText(tr("该卡号没有绑定，请重新识别后尝试。"));
        message.exec();
        delete resultTable;
        return ;
    }

//    if(!resultTable->insertRecords(eventName, checkPointName, currentTime, direction, sumTime, rank, rfidTag))
//    {
//        message.setText(tr("打卡失败，请稍后重试！"));
//        message.exec();
//        delete resultTable;
//        return ;
//    } else {
//        message.setText(tr("打卡成功！"));
//        message.exec();
//    }

    QString topic = "crossroadmanagesystem";

    // 创建一个QMap用于存储键值对
    QMap<QString, QString> eventData;

    // 将数据添加到map中
    eventData["tableName"] = "table_results";
    eventData["赛事名称"] = eventName;
    eventData["打卡点名称"] = checkPointName;

    eventData["时间戳"] = formattedTime;
    eventData["方向"] = direction;
    eventData["总用时"] = QString::number(sumTime);
    eventData["名次"] = QString::number(rank);
    eventData["rfid标签卡号"] = rfidTag;

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


    message.setText(tr("打卡成功。"));
    message.exec();
    delete resultTable;
    return ;
}



void SignUp::on_btn_refresh_clicked()
{
    resultTableModel = new ResultsTableModel(this);
//    resultTableModel->bindTable();
    resultTableModel->setTable("table_results");
    resultTableModel->select();

    ui->tableView->setModel(resultTableModel);
    ui->tableView->setEditTriggers(QTableView::NoEditTriggers);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setVisible(true);
    return;
}

void SignUp::on_btn_reset_clicked()
{
    ui->direction_lineEdit->clear();
    ui->sumTime_lineEdit->clear();
    ui->rank_lineEdit->clear();
    ui->rfidTag_lineEdit->clear();
    return;
}

void SignUp::on_btn_recognize_clicked()
{
    if (!serialThread || !m1356dll) {
        QMessageBox::critical(this, tr("错误"), tr("serialThread 或 m1356dll 未初始化！"));
        return;
    }
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
    return;
}

/**
 * @brief RegistorWidget::on_tagIdReceived
 * @param tagId 标签ID(卡号)
 * 当读取到卡号时调用该方法
 */
void SignUp::on_tagIdReceived(QString tagId){
//    qDebug() << "2222222";
    ui->rfidTag_lineEdit->setText(tagId);
}

void SignUp::onEventNameChanged(const QString &eventName)
{
    // 清空 checkPoint_comboBox
    ui->checkPoint_comboBox->clear();

    QSqlQuery query;
    query.prepare("SELECT DISTINCT 检查站名称 FROM table_checkpoints WHERE 对应赛事名称 = :event_name");
    query.bindValue(":event_name", eventName);

    if (!query.exec())
    {
        qDebug() << "Query failed:" << query.lastError().text();
        return;
    }

    QSqlRecord rec = query.record();
    QString checkpointname;

    while (query.next())
    {
        int index_name = rec.indexOf("检查站名称");
        checkpointname = query.value(index_name).toString();
        ui->checkPoint_comboBox->addItem(checkpointname);
    }
}


