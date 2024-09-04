#include "exitgames.h"
#include "ui_exitgames.h"

ExitGames::ExitGames(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExitGames)
{
    ui->setupUi(this);
}

ExitGames::~ExitGames()
{
    delete ui;
}

void ExitGames::on_btn_recognize_clicked()
{
    if(!serialPortThread->serialPortIsOpen())
    {
        QMessageBox::warning(this,tr("温馨提示"),tr("请先连接读卡器后再试！"),QMessageBox::Yes);
        return;
    }
    m1356dll = new M1356Dll();
    uint16 frameLen;
    quint8 buffer[1];
    uint8 *p;
    memset(buffer, 0, 1);
    buffer[0] = RC632_14443_ALL;
    p = m1356dll->RC632_SendCmdReq(RC632_CMD_REQUEST_A,buffer,1);
    frameLen = BUILD_UINT16(p[0], p[1]);
    serialPortThread->writeData((char *)(p + 2 ),frameLen);
    delete m1356dll;
}

void ExitGames::on_btn_exitgame_clicked()
{
    QMessageBox message;
    QString rfidTag = ui->rfidTag_lineEdit->text();

    ParticipantsTableModel *participantsTable = new ParticipantsTableModel(this);
    participantsTable->bindTable();

    int row = participantsTable->findRecordByRfidTag(rfidTag);

    if(row) {
        participantsTable->deleteRecords(row);
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
    ui->rfidTag_lineEdit->setText(tagId);
}



