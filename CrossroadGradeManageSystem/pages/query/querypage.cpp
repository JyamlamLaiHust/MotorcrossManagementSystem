#include "querypage.h"
#include "ui_querypage.h"
#include "QMessageBox"
#include <QRegExp>
#include <QRegExpValidator>
#include <QAction>

QueryPage::QueryPage(QWidget *parent, SerialPortThread *serial) :
    QWidget(parent),
    ui(new Ui::QueryPage)
{
    ui->setupUi(this);
    ui->tableView->horizontalHeader()->stretchLastSection();
    ui->start_dateEdit->setDate(QDate::currentDate());
    ui->end_dateEdit->setDate(QDate::currentDate());
    this->serialThread = serial;
    m1356dll = new M1356Dll();
}

QueryPage::~QueryPage()
{
    delete m1356dll;
    delete ui;
}

/**
 * @brief QueryPage::on_tagIdReceived
 * @param tagId 卡号
 * 读取到卡号槽函数，显示卡号
 */
void QueryPage::on_tagIdReceived(QString tagId){
    qDebug() << "22222222";
      ui->cardId_lineEdit->setText(tagId);
 }

void QueryPage::on_btn_recognise_clicked()
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
 * @brief QueryPage::on_btn_Query_clicked
 * 查询按钮点击事件
 */
void QueryPage::on_btn_Query_clicked()
{
    int index = ui->stackedWidget->currentIndex();
    switch (index) {

    case 0: //根据卡号进行筛选查询
    {
        QString cardId = ui->cardId_lineEdit->text();
        currentModel->setTable("table_participants");
        currentModel->select();
        qDebug() << currentModel->rowCount();

        QString str = tr("rfid标签卡号 = '%1'").arg(cardId);
        currentModel->setFilter(str);
        updateTableView(currentModel);
        qDebug() << cardId;
    }
        break;
    case 1://根据运动员姓名进行筛选查询
    {
        QString gender = ui->gender_comboBox->currentText();
        qDebug() << gender;

        QString str =  tr("性别 = '%1'").arg(gender);
        currentModel->setFilter(str);
        updateTableView(currentModel);
        qDebug() << gender;
    }
        break;
    case 2://根据比赛名称进行筛选查询
    {
        QString eventName = ui->eventName_lineEdit->text();
        QString str =  tr("赛事名称 = '%1'").arg(eventName);
        currentModel->setFilter(str);
        updateTableView(currentModel);
        qDebug() << eventName;
    }
        break;
    case 3: //根据时间进行筛选查询
    {
        QString startTimeStr = ui->start_dateEdit->dateTime().toString("yyyy-MM-dd");
        QString endTimeStr = ui->end_dateEdit->dateTime().toString("yyyy-MM-dd");
//        QString str = "时间 Between '" + startTimeStr + "' and '" + endTimeStr + "'";
        QString str = tr("赛事开始时间 >= '%1' AND 赛事结束时间 <= '%2'").arg(startTimeStr, endTimeStr);
        currentModel->setFilter(str);
        // 输出筛选信息
        qDebug() << "Applying time filter:" << str;
        qDebug() << "Filtered model row count:" << currentModel->rowCount();
        updateTableView(currentModel);
    }
        break;
    case 4:
    {
        QString year = ui->year_lineEdit->text();

        // 构造过滤条件
        QString str = tr("SUBSTR(身份证, 7, 4) > '%1'").arg(year);
        currentModel->setFilter(str);
        updateTableView(currentModel);
    }
        break;
    default:
        break;
    }
}

/**
 * @brief QueryPage::currentAction
 * @param action 当前的Action
 * 菜单点击事件槽函数
 */
void QueryPage::currentAction(QAction *action)
{
    if(action->text() == tr("运动员查询"))
    {
        ParticipantsTableModel *participantsTable = new ParticipantsTableModel(this);
//        participantsTable->bindTable();
        participantsTable->setTable("table_participants");
        participantsTable->select();
        updateTableView(participantsTable);
        ui->comboBox->clear();
        ui->comboBox->addItem("卡号");

        ui->comboBox->addItem("性别");
        ui->comboBox->addItem("年龄");

    }
    else if(action->text() == tr("运动员查询_性别"))
    {
        ParticipantsTableModel *participantsTable = new ParticipantsTableModel(this);
//        participantsTable->bindTable();
        participantsTable->setTable("table_participants");
        participantsTable->select();
        updateTableView(participantsTable);
        ui->comboBox->clear();
        ui->comboBox->addItem("性别");
    }
    else if(action->text() == tr("比赛查询_比赛名称"))
    {
        MatchesTableModel *matchesTable = new MatchesTableModel(this);
//        matchesTable->bindTable();
        matchesTable->setTable("table_matches");
        matchesTable->select();
        updateTableView(matchesTable);
        ui->comboBox->clear();
        ui->comboBox->addItem("比赛名称");
    }
    else if(action->text() == tr("比赛查询_比赛时间"))
    {
        MatchesTableModel *matchesTable = new MatchesTableModel(this);
//        matchesTable->bindTable();
        matchesTable->setTable("table_matches");
        matchesTable->select();
        updateTableView(matchesTable);
        ui->comboBox->clear();
        ui->comboBox->addItem("时间");
    }
}
/**
 * @brief QueryPage::updateTableView
 * @param model 数据表的model
 * 更新TableView界面
 */
void QueryPage::updateTableView(QSqlTableModel *model)
{
    currentModel = model;
    ui->tableView->setModel(model);
    ui->tableView->setEditTriggers(QTableView::NoEditTriggers);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
}
/**
 * @brief QueryPage::on_comboBox_currentIndexChanged
 * @param text 当前的显示文本
 * 下拉框文本发生改变时调用
 */
void QueryPage::on_comboBox_currentIndexChanged(const QString &text)
{
    QMessageBox message;
    if(text == tr("卡号"))
    {
        ui->stackedWidget->setCurrentIndex(0);
    }
    else if(text == tr("性别"))
    {
        ui->stackedWidget->setCurrentIndex(1);
        message.setText("当前页面为 1");
    }
    else if(text == "比赛名称")
    {
        ui->stackedWidget->setCurrentIndex(2);
        message.setText("当前页面为 2");
    }
    else if(text == tr("时间"))
    {
        ui->stackedWidget->setCurrentIndex(3);
        message.setText("当前页面为 3");
    } else if(text == tr("年龄"))
    {
        ui->stackedWidget->setCurrentIndex(4);
        message.setText("当前页面为 4");
    }
}
