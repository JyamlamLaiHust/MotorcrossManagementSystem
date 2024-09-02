#ifndef CHECKIN_H
#define CHECKIN_H

#include <QWidget>

namespace Ui {
class CheckIn;
}

class CheckIn : public QWidget
{
    Q_OBJECT

public:
    explicit CheckIn(QWidget *parent = 0);
    ~CheckIn();

private slots:
    void on_tagIdReceived(QString tagId);//卡号接收槽

private:
    Ui::CheckIn *ui;
};

#endif // CHECKIN_H
