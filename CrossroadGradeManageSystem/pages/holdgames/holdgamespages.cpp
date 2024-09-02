#include "holdgamespages.h"
#include "ui_holdgamespages.h"

HoldGamesPages::HoldGamesPages(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HoldGamesPages)
{
    ui->setupUi(this);
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
    if(startTime > endTime)
    {
        message.setText(tr("比赛开始时间晚于比赛结束时间，请重新设置！"));
        message.exec();
        return;
    }

    MatchesTableModel *matchesTable = new MatchesTableModel(this);
    matchesTable->bindTable();


    if(matchesTable->findRecord(eventName))
    {
        message.setText(tr("该比赛已创建，请核对名称后重新创建!"));
        message.exec();
        delete matchesTable;
        return ;
    }


    if(!matchesTable->insertRecords(eventName, startTime, endTime,
                                    raceDistance, elevationGain, registrationFee))
    {
        message.setText(tr("比赛创建失败，请重试!"));
        message.exec();
        delete matchesTable;
        return ;
    }

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
        message.setText(tr("比赛名称不能为空。"));
        message.exec();
        return;
    }
    if(openTime > closeTime)
    {
        message.setText(tr("比赛开始时间晚于比赛结束时间，请重新设置！"));
        message.exec();
        return;
    }

    CheckPointsTableModel *checkPointTable = new CheckPointsTableModel(this);
    checkPointTable->bindTable();


    if(checkPointTable->findRecord(checkPointName))
    {
        message.setText(tr("该打卡点已创建，请核对名称后重新创建!"));
        message.exec();
        delete checkPointTable;
        return ;
    }


    if(!checkPointTable->insertRecords(eventName, checkPointName, segmentDistance, segmentElevation, openTime, closeTime))
    {
        message.setText(tr("比赛创建失败，请重试!"));
        message.exec();
        delete checkPointTable;
        return ;
    }

    delete checkPointTable;
}
