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


void SignUp::on_btn_arrivalTime_clicked()
{
    QMessageBox message;

    // 读取前端数据
    ui->time_lineEdit->setText(QDateTime::currentDateTime().toString("hh:mm:ss"));; // 时间
    QString eventName = ui->eventName_comboBox->currentText(); // 赛事名称
    QString checkPointName = ui->checkPoint_comboBox->currentText(); // 打卡点名称
    QTime arrivalTime = ui->arrivalTime_timeEdit->time();; // 到达时间

    // 缺失计算逻辑
    QTime sumTime = ui->arrivalTime_timeEdit->time();
    int rank = 1;


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

    ResultsTableModel *resultTable = new ResultsTableModel(this);
    resultTable->bindTable();

    if(resultTable->findRecord(rfidTag))
    {
        message.setText(tr("该运动员到达时已打卡。"));
        message.exec();
        delete resultTable;
        return ;
    }


    if(!resultTable->insertRecords(eventName, checkPointName, arrivalTime, sumTime, rank, rfidTag))
    {
        message.setText(tr("打卡失败，请稍后重试！"));
        message.exec();
        delete resultTable;
        return ;
    }

    delete resultTable;
}

void SignUp::on_btn_departmentTime_clicked()
{
    QMessageBox message;

    // 读取前端数据
    ui->time_lineEdit->setText(QDateTime::currentDateTime().toString("hh:mm:ss"));; // 时间
    QString eventName = ui->eventName_comboBox->currentText(); // 赛事名称
    QString checkPointName = ui->checkPoint_comboBox->currentText(); // 打卡点名称
    QTime departureTime = ui->departureTime_timeEdit->time(); // 离开时间

    // 缺失计算逻辑
    QTime sumTime = ui->arrivalTime_timeEdit->time();
    int rank = 1;


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

    ResultsTableModel *resultTable = new ResultsTableModel(this);
    resultTable->bindTable();

    if(resultTable->findRecord(rfidTag))
    {
        message.setText(tr("该运动员到达时已打卡。"));
        message.exec();
        delete resultTable;
        return ;
    }


    if(!resultTable->insertRecords(eventName, checkPointName, departureTime, sumTime, rank, rfidTag))
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
