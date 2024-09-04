#include "cancelgames.h"
#include "ui_cancelgames.h"

CancelGames::CancelGames(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CancelGames)
{
    ui->setupUi(this);
}

CancelGames::~CancelGames()
{
    delete ui;
}

void CancelGames::on_pushButton_clicked()
{
    QMessageBox message;
    QString eventName = ui->eventName_comboBox->currentText();

    MatchesTableModel *matchesTable = new MatchesTableModel(this);
    matchesTable->bindTable();

    if (matchesTable->deleteRecord(eventName))
    {
        message.setText(tr("删除比赛成功！"));
        message.exec();
        return ;
    } else {
        message.setText(tr("删除比赛失败！"));
        message.exec();
        return ;
    }

}
