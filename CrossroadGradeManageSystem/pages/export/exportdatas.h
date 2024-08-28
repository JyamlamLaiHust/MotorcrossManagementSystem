#ifndef EXPORTDATAS_H
#define EXPORTDATAS_H

#include <QWidget>

namespace Ui {
class exportdatas;
}

class exportdatas : public QWidget
{
    Q_OBJECT

public:
    explicit exportdatas(QWidget *parent = 0);
    ~exportdatas();

private:
    Ui::exportdatas *ui;
};

#endif // EXPORTDATAS_H
