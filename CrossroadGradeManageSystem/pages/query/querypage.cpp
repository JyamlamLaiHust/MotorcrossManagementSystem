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
