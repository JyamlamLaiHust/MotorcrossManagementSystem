#include "mainpage.h"
#include "ui_mainpage.h"
#include <QStyleOption>
#include <QPainter>
/**************************************
 *作者: JaylenLaiHUST
 *日期: 2024-08-28
 *描述: 欢迎页显示图片
***************************************/
MainPage::MainPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);
}

MainPage::~MainPage()
{
    delete ui;
}

//void MainPage::paintEvent(QPaintEvent* event)
//{
//    QStyleOption opt;
//    opt.init(this);
//    QPainter p(this);
//    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
//}
