#include "broadcastpage.h"
#include "ui_broadcastpage.h"

BroadcastPage::BroadcastPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BroadcastPage)
{
    ui->setupUi(this);
}

BroadcastPage::~BroadcastPage()
{
    delete ui;
}
