#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <QWidget>

namespace Ui {
class CheckOut;
}

class CheckOut : public QWidget
{
    Q_OBJECT

public:
    explicit CheckOut(QWidget *parent = 0);
    ~CheckOut();

private:
    Ui::CheckOut *ui;
};

#endif // CHECKOUT_H
