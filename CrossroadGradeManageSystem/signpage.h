#ifndef SIGNPAGE_H
#define SIGNPAGE_H

#include <QWidget>

namespace Ui {
class SignPage;
}

class SignPage : public QWidget
{
    Q_OBJECT

public:
    explicit SignPage(QWidget *parent = 0);
    ~SignPage();

private:
    Ui::SignPage *ui;
};

#endif // SIGNPAGE_H
