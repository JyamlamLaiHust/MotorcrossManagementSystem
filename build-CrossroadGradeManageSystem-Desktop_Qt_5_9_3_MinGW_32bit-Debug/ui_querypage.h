/********************************************************************************
** Form generated from reading UI file 'querypage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYPAGE_H
#define UI_QUERYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueryPage
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *query_label;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *card_page;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *cardId_label;
    QLineEdit *cardId_lineEdit;
    QPushButton *btn_recognise;
    QWidget *participantsName_page;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *participantsName_lineEdit;
    QWidget *result_page;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *eventName_lineEdit;
    QWidget *event_Page;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QDateTimeEdit *start_dateTimeEdit;
    QLabel *label_4;
    QDateTimeEdit *end_dateTimeEdit;
    QPushButton *btn_query;
    QTableView *tableView;

    void setupUi(QWidget *QueryPage)
    {
        if (QueryPage->objectName().isEmpty())
            QueryPage->setObjectName(QStringLiteral("QueryPage"));
        QueryPage->resize(750, 600);
        groupBox = new QGroupBox(QueryPage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 741, 581));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 30, 721, 101));
        horizontalLayoutWidget = new QWidget(groupBox_2);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 25, 701, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        query_label = new QLabel(horizontalLayoutWidget);
        query_label->setObjectName(QStringLiteral("query_label"));

        horizontalLayout->addWidget(query_label);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        stackedWidget = new QStackedWidget(horizontalLayoutWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        card_page = new QWidget();
        card_page->setObjectName(QStringLiteral("card_page"));
        horizontalLayoutWidget_2 = new QWidget(card_page);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 0, 241, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cardId_label = new QLabel(horizontalLayoutWidget_2);
        cardId_label->setObjectName(QStringLiteral("cardId_label"));

        horizontalLayout_2->addWidget(cardId_label);

        cardId_lineEdit = new QLineEdit(horizontalLayoutWidget_2);
        cardId_lineEdit->setObjectName(QStringLiteral("cardId_lineEdit"));

        horizontalLayout_2->addWidget(cardId_lineEdit);

        btn_recognise = new QPushButton(horizontalLayoutWidget_2);
        btn_recognise->setObjectName(QStringLiteral("btn_recognise"));

        horizontalLayout_2->addWidget(btn_recognise);

        stackedWidget->addWidget(card_page);
        participantsName_page = new QWidget();
        participantsName_page->setObjectName(QStringLiteral("participantsName_page"));
        horizontalLayoutWidget_4 = new QWidget(participantsName_page);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(0, 0, 241, 71));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        participantsName_lineEdit = new QLineEdit(horizontalLayoutWidget_4);
        participantsName_lineEdit->setObjectName(QStringLiteral("participantsName_lineEdit"));

        horizontalLayout_4->addWidget(participantsName_lineEdit);

        stackedWidget->addWidget(participantsName_page);
        result_page = new QWidget();
        result_page->setObjectName(QStringLiteral("result_page"));
        horizontalLayoutWidget_3 = new QWidget(result_page);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 0, 241, 71));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        eventName_lineEdit = new QLineEdit(horizontalLayoutWidget_3);
        eventName_lineEdit->setObjectName(QStringLiteral("eventName_lineEdit"));

        horizontalLayout_3->addWidget(eventName_lineEdit);

        stackedWidget->addWidget(result_page);
        event_Page = new QWidget();
        event_Page->setObjectName(QStringLiteral("event_Page"));
        horizontalLayoutWidget_5 = new QWidget(event_Page);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(0, 0, 241, 71));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        start_dateTimeEdit = new QDateTimeEdit(horizontalLayoutWidget_5);
        start_dateTimeEdit->setObjectName(QStringLiteral("start_dateTimeEdit"));

        horizontalLayout_5->addWidget(start_dateTimeEdit);

        label_4 = new QLabel(horizontalLayoutWidget_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        end_dateTimeEdit = new QDateTimeEdit(horizontalLayoutWidget_5);
        end_dateTimeEdit->setObjectName(QStringLiteral("end_dateTimeEdit"));

        horizontalLayout_5->addWidget(end_dateTimeEdit);

        stackedWidget->addWidget(event_Page);

        horizontalLayout->addWidget(stackedWidget);

        btn_query = new QPushButton(horizontalLayoutWidget);
        btn_query->setObjectName(QStringLiteral("btn_query"));

        horizontalLayout->addWidget(btn_query);

        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 140, 721, 431));

        retranslateUi(QueryPage);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(QueryPage);
    } // setupUi

    void retranslateUi(QWidget *QueryPage)
    {
        QueryPage->setWindowTitle(QApplication::translate("QueryPage", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QueryPage", "\346\237\245\350\257\242", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QueryPage", "\346\235\241\344\273\266\347\255\233\351\200\211", Q_NULLPTR));
        query_label->setText(QApplication::translate("QueryPage", "\346\237\245\350\257\242\344\276\235\346\215\256\357\274\232", Q_NULLPTR));
        cardId_label->setText(QApplication::translate("QueryPage", "\345\215\241\345\217\267\357\274\232", Q_NULLPTR));
        btn_recognise->setText(QApplication::translate("QueryPage", "\350\257\206\345\210\253", Q_NULLPTR));
        label_2->setText(QApplication::translate("QueryPage", "\350\277\220\345\212\250\345\221\230\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("QueryPage", "\350\265\233\344\272\213\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("QueryPage", "From: ", Q_NULLPTR));
        label_4->setText(QApplication::translate("QueryPage", "To:", Q_NULLPTR));
        btn_query->setText(QApplication::translate("QueryPage", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QueryPage: public Ui_QueryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYPAGE_H
