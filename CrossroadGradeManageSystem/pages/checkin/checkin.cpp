#include "checkin.h"
#include "ui_checkin.h"

CheckIn::CheckIn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CheckIn)
{
    ui->setupUi(this);
}

CheckIn::~CheckIn()
{
    delete ui;
}

/**
 * @brief RegistorWidget::on_tagIdReceived
 * @param tagId 标签ID(卡号)
 * 当读取到卡号时调用该方法
 */
void CheckIn::on_tagIdReceived(QString tagId){
      ui->rfidTag_lineEdit->setText(tagId);
 }
