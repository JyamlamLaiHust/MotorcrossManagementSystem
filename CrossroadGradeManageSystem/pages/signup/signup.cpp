#include "signup.h"
#include "ui_signup.h"

SignUp::SignUp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}


void SignUp::on_btn_Time_clicked()
{
    QMessageBox message;

    // 读取前端数据
    ui->time_lineEdit->setText(QDateTime::currentDateTime().toString("hh:mm:ss")); // 时间
    QString eventName = ui->eventName_comboBox->currentText(); // 赛事名称
    QString checkPointName = ui->checkPoint_comboBox->currentText(); // 打卡点名称
    QTime time = ui->Time_timeEdit->time();; // 时间戳

    QString direction = ui->direction_lineEdit->text();

    ResultsTableModel *resultTable = new ResultsTableModel(this);
    resultTable->bindTable();

    MatchesTableModel *matchesTable = new MatchesTableModel(this);
    matchesTable->bindTable();

    QDateTime startTime = matchesTable->getStartTime(eventName);
    int sumTime = QDateTime::currentDateTime().secsTo(startTime);

    int rank = resultTable->getRank(eventName, checkPointName, direction, sumTime);

    QString rfidTag = ui->rfidTag_lineEdit->text();

    // 数据合理性校验
    message.setStandardButtons(QMessageBox::Yes);
    message.setWindowTitle(tr("温馨提示"));
    message.setIcon(QMessageBox::Warning);


    if(!rfidTag.length())
    {
        message.setText(tr("没发现卡号，请先识别到卡号了再点注册按钮。"));
        message.exec();
        return;
    }

    if(resultTable->findRecord(rfidTag, direction))
    {
        message.setText(tr("该运动员在同一方向上已打卡。"));
        message.exec();
        delete resultTable;
        return ;
    }


    if(!resultTable->insertRecords(eventName, checkPointName, time, direction, sumTime, rank, rfidTag))
    {
        message.setText(tr("打卡失败，请稍后重试！"));
        message.exec();
        delete resultTable;
        return ;
    }

    delete resultTable;
}


void SignUp::on_btn_refresh_clicked()
{

}

void SignUp::on_btn_reset_clicked()
{

}
