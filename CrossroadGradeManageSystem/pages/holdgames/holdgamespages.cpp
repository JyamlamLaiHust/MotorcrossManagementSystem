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
