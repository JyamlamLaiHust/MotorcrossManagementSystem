#ifndef BROADCASTPAGE_H
#define BROADCASTPAGE_H

#include <QWidget>

namespace Ui {
class BroadcastPage;
}

class BroadcastPage : public QWidget
{
    Q_OBJECT

public:
    explicit BroadcastPage(QWidget *parent = 0);
    ~BroadcastPage();

private:
    Ui::BroadcastPage *ui;
};

#endif // BROADCASTPAGE_H
