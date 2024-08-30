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
