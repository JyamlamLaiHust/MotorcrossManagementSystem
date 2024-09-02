#ifndef QUERYPAGE_H
#define QUERYPAGE_H

#include <QWidget>

namespace Ui {
class QueryPage;
}

class QueryPage : public QWidget
{
    Q_OBJECT

public:
    explicit QueryPage(QWidget *parent = 0);
    ~QueryPage();

private slots:
    void on_tagIdReceived(QString tagId);//卡号接收槽

private:
    Ui::QueryPage *ui;
};

#endif // QUERYPAGE_H
