#include "exportdatas.h"
#include "ui_exportdatas.h"

exportdatas::exportdatas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::exportdatas)
{
    ui->setupUi(this);
}

exportdatas::~exportdatas()
{
    delete ui;
}
