#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QWidget>

namespace Ui {
class mainpage;
}

class mainpage : public QWidget
{
    Q_OBJECT

public:
    explicit mainpage(QWidget *parent = 0);
    ~mainpage();

private:
    Ui::mainpage *ui;
};

#endif // MAINPAGE_H
