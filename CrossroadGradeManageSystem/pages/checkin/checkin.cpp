#include "checkin.h"
#include "ui_checkin.h"
#include "tools/tools.h"
//#include "dialogcardconfig.h"
#include <QDebug>


/**************************************
 *作者: JaylenLaiHUST
 *日期: 2024-09-02
 *描述: 注册页面,用于新用户注册,该页面需要验证管理员是否登陆
***************************************/

CheckIn::CheckIn(QWidget *parent, SerialPortThread *serial) :
    QWidget(parent), ui(new Ui::CheckIn), serialThread(serial)
{
    ui->setupUi(this);
    this->serialThread = serial;
    m1356dll = new M1356Dll();

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

CheckIn::~CheckIn()
{
    delete m1356dll;
    delete ui;
}

/**
 * @brief CheckIn::on_tagIdReceived
 * @param tagId 标签ID(卡号)
 * 当读取到卡号时调用该方法
 */
void CheckIn::on_tagIdReceived(QString tagId){
//    qDebug()<<"!!!!!!!";
    ui->rfidTag_lineEdit->setText(tagId);
}

/**
 * @brief CheckIn::on_btn_register_clicked
 * 注册按钮点击事件
 */
void CheckIn::on_btn_register_clicked()
{
    QMessageBox message;

    // 读取前端数据
    QString participantsName = ui->participantName_lineEdit->text(); // 参赛者名称
    QString eventName = ui->eventName_comboBox->currentText(); //参赛名称
    QString idCard = ui->idCard_lineEdit->text(); // 身份证
    QString gender = ui->gender_comboBox->currentText(); // 性别
    QString sizeTshirt = ui->sizeTshirt_comboBox->currentText(); // T恤尺码
    QString telephoneNumber = ui->telephone_lineEdit->text(); // 电话号
    QString emergencyContactName = ui->emergencyContactName_lineEdit->text(); //紧急联系人姓名
    QString emergencyContactTelephone = ui->emergencyContactPhone_lineEdit->text(); //紧急联系人电话
    QString rfidTag = ui->rfidTag_lineEdit->text(); // rfid 标签号

    // 数据合理性校验
    message.setStandardButtons(QMessageBox::Yes);
    message.setWindowTitle(tr("温馨提示"));
    message.setIcon(QMessageBox::Warning);

    // 校验用户名的长度，采用utf8编码，汉语占用2个字符的宽度
    if(participantsName.toUtf8().length() < 1 && participantsName.toUtf8().length() > 50)
    {
        message.setText(tr("运动员姓名长度只能在1到25个汉字。"));
        message.exec();
        return;
    }

    if(!gender.size())
    {
        message.setText(tr("请选择性别！"));
        message.exec();
        return;
    }

    if(!sizeTshirt.size())
    {
        message.setText(tr("请选择T恤尺码！"));
        message.exec();
        return;
    }

    QRegularExpression telephonePattern("^\\d{11}$"); // 匹配11位数字的电话号码
    QRegularExpression idCardPattern("^\\d{17}[\\dxX]$"); // 匹配18位身份证号，最后一位可以是x或X

    bool isTelephoneNumberValid = telephonePattern.match(telephoneNumber).hasMatch();
    bool isEmergencyContactValid = telephonePattern.match(emergencyContactTelephone).hasMatch();
    bool isIdCardValid = idCardPattern.match(idCard).hasMatch();

    if (!isIdCardValid) {
        QMessageBox::warning(this, tr("输入错误"), tr("身份证号码必须为17位数字加上最后一位数字或大写X！"));
        return;
    }

    if (!isTelephoneNumberValid) {
        QMessageBox::warning(this, tr("输入错误"), tr("电话号码必须为11位数字！"));
        return;
    }

    // 校验用户名的长度，采用utf8编码，汉语占用2个字符的宽度
    if(emergencyContactName.toUtf8().length() < 1 && emergencyContactName.toUtf8().length() > 50)
    {
        message.setText(tr("紧急联系人姓名长度只能在1到25个汉字。"));
        message.exec();
        return;
    }

    if (!isEmergencyContactValid) {
        QMessageBox::warning(this, tr("输入错误"), tr("紧急联系人电话号码必须为11位数字！"));
        return;
    }

    if(!rfidTag.length())
    {
        message.setText(tr("没发现卡号，请先识别到卡号了再点注册按钮。"));
        message.exec();
        return;
    }

    ParticipantsTableModel *participantsTable = new ParticipantsTableModel(this);
    participantsTable->bindTable();


    qDebug() << "output of findRecordByRfidTag:" << participantsTable->findRecordByRfidTag(rfidTag);
    if(participantsTable->findRecordByRfidTag(rfidTag) != -1)
    {
        message.setText(tr("此卡已经注册，请换张卡再试!"));
        message.exec();
        delete participantsTable;
        return ;
    }

    if(participantsTable->findRecordByIdCard(idCard) != -1)
    {
        message.setText(tr("该运动员已注册，请不要重复注册!"));
        message.exec();
        delete participantsTable;
        return ;
    }

    if(!participantsTable->insertRecords(participantsName, eventName, gender, idCard,
                                         telephoneNumber, sizeTshirt, rfidTag,
                                         emergencyContactName, emergencyContactTelephone))
    {
        message.setText(tr("运动员注册失败，请重试!"));
        message.exec();
        delete participantsTable;
        return ;
    }

    QString topic = "crossroadmanagesystem";


    QString str = "participants " + participantsName + " checked in successfully.";

    if (m_client->publish(topic, str.toUtf8()) == -1) {
        QMessageBox::critical(this, QLatin1String("Error"), QLatin1String("Could not publish message"));
    } else {
        qDebug() << "Published message" << str;
    }

    message.setText(tr("运动员注册成功!"));
    message.exec();
    delete participantsTable;
}

/**
 * @brief CheckIn::on_btn_Reset_clicked
 * 重置按钮点击事件
 */
void CheckIn::on_btn_reset_clicked()
{
    ui->participantName_lineEdit->clear();
    ui->idCard_lineEdit->clear();
    ui->telephone_lineEdit->clear();
    ui->emergencyContactName_lineEdit->clear();
    ui->emergencyContactPhone_lineEdit->clear();
    ui->rfidTag_lineEdit->clear();
}

/**
 * @brief CheckIn::on_btn_Inventory_clicked
 * 识别按钮点击事件
 */
void CheckIn::on_btn_identify_clicked()
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
}

/**
 * @brief CheckIn::on_btn_Refresh_clicked
 * 刷新按钮点击事件
 */
void CheckIn::on_btn_refresh_clicked()
{
    ParticipantsTableModel *participantsTable= new ParticipantsTableModel(this);
//    participantsTable->bindTable();
    participantsTable->setTable("table_participants");
    participantsTable->select();

//    qDebug() << "1";
//    qDebug() << "RowCount:" << participantsTable->rowCount();
//    qDebug() << "ColumnCount:" << participantsTable->columnCount();

    ui->tableView->setModel(participantsTable);
    ui->tableView->setEditTriggers(QTableView::NoEditTriggers);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

//    qDebug() << "2";
//    qDebug() << "RowCount:" << participantsTable->rowCount();
//    qDebug() << "ColumnCount:" << participantsTable->columnCount();

    return;
}
