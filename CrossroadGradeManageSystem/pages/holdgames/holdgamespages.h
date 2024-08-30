#ifndef HOLDGAMESPAGES_H
#define HOLDGAMESPAGES_H

#include <QWidget>

namespace Ui {
class HoldGamesPages;
}

class HoldGamesPages : public QWidget
{
    Q_OBJECT

public:
    explicit HoldGamesPages(QWidget *parent = 0);
    ~HoldGamesPages();

private:
    Ui::HoldGamesPages *ui;
};

#endif // HOLDGAMESPAGES_H
