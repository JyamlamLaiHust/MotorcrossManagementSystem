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
    QWidget(parent), ui(new Ui::CheckIn)
{
    ui->setupUi(this);
    this->serialThread = serial;
    m1356dll = new M1356Dll();
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
    if(participantsName.toUtf8().length() < 1)
    {
        message.setText(tr("用户名不能为空。"));
        message.exec();
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


    if(participantsTable->findRecord(rfidTag))
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

    if(!participantsTable->insertRecords(participantsName, gender, idCard,
                                         telephoneNumber, sizeTshirt, rfidTag,
                                         emergencyContactName, emergencyContactTelephone))
    {
        message.setText(tr("运动员注册失败，请重试!"));
        message.exec();
        delete participantsTable;
        return ;
    }

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
void CheckIn::on_btn_Inventory_clicked()
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

/**
 * @brief CheckIn::on_btn_Refresh_clicked
 * 刷新按钮点击事件
 */
void CheckIn::on_btn_refresh_clicked()
{
    ParticipantsTableModel *participantsTable= new ParticipantsTableModel(this);
    participantsTable->bindTable();
//    ui->tableView->setModel(participantsTable);
//    ui->tableView->setEditTriggers(QTableView::NoEditTriggers);
//    ui->tableView->resizeColumnsToContents();
//    ui->tableView->horizontalHeader()->setStretchLastSection(true);
}

