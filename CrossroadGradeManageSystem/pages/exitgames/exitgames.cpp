#include "exitgames.h"
#include "ui_exitgames.h"

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

    if(rfidTag->isEmpty()) {
        QMessageBox::warning(this,tr("温馨提示"),tr("请先识别标签后尝试！"),QMessageBox::Yes);
        return ;
    }

    ParticipantsTableModel *participantsTable = new ParticipantsTableModel(this);
    participantsTable->bindTable();

    int row = participantsTable->findRecordByRfidTag(*rfidTag);

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
    qDebug() << "1111111";
    ui->rfidTags_lineEdit->setText(tagId);
}



