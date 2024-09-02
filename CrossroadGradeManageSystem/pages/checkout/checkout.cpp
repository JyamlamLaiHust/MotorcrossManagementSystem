#include "checkout.h"
#include "ui_checkout.h"

CheckOut::CheckOut(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CheckOut)
{
    ui->setupUi(this);
}

CheckOut::~CheckOut()
{
    delete ui;
}
