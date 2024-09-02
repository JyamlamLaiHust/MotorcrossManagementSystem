#include "querypage.h"
#include "ui_querypage.h"

QueryPage::QueryPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QueryPage)
{
    ui->setupUi(this);
}

QueryPage::~QueryPage()
{
    delete ui;
}

/**
 * @brief QueryPage::on_tagIdReceived
 * @param tagId 卡号
 * 读取到卡号槽函数，显示卡号
 */
void QueryPage::on_tagIdReceived(QString tagId){
      ui->cardId_lineEdit->setText(tagId);
 }
