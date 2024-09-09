/********************************************************************************
** Form generated from reading UI file 'querypage.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYPAGE_H
#define UI_QUERYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueryPage
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *query_label;
    QComboBox *comboBox;
    QStackedWidget *stackedWidget;
    QWidget *card_page;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_5;
    QPushButton *btn_recognise;
    QLineEdit *cardId_lineEdit;
    QLabel *cardId_label;
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
            QueryPage->setObjectName(QString::fromUtf8("QueryPage"));
        QueryPage->resize(500, 375);
        gridLayout = new QGridLayout(QueryPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(QueryPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        query_label = new QLabel(groupBox_2);
        query_label->setObjectName(QString::fromUtf8("query_label"));

        horizontalLayout->addWidget(query_label);

        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        stackedWidget = new QStackedWidget(groupBox_2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        card_page = new QWidget();
        card_page->setObjectName(QString::fromUtf8("card_page"));
        gridLayout_4 = new QGridLayout(card_page);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        btn_recognise = new QPushButton(card_page);
        btn_recognise->setObjectName(QString::fromUtf8("btn_recognise"));

        gridLayout_5->addWidget(btn_recognise, 0, 2, 1, 1);

        cardId_lineEdit = new QLineEdit(card_page);
        cardId_lineEdit->setObjectName(QString::fromUtf8("cardId_lineEdit"));

        gridLayout_5->addWidget(cardId_lineEdit, 0, 1, 1, 1);

        cardId_label = new QLabel(card_page);
        cardId_label->setObjectName(QString::fromUtf8("cardId_label"));

        gridLayout_5->addWidget(cardId_label, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 0, 0, 1, 1);

        stackedWidget->addWidget(card_page);
        participantsName_page = new QWidget();
        participantsName_page->setObjectName(QString::fromUtf8("participantsName_page"));
        horizontalLayoutWidget_4 = new QWidget(participantsName_page);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(0, 0, 251, 81));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, 0, 5, 0);
        label_2 = new QLabel(horizontalLayoutWidget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        participantsName_lineEdit = new QLineEdit(horizontalLayoutWidget_4);
        participantsName_lineEdit->setObjectName(QString::fromUtf8("participantsName_lineEdit"));

        horizontalLayout_4->addWidget(participantsName_lineEdit);

        stackedWidget->addWidget(participantsName_page);
        result_page = new QWidget();
        result_page->setObjectName(QString::fromUtf8("result_page"));
        horizontalLayoutWidget_3 = new QWidget(result_page);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 0, 251, 81));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 0, 5, 0);
        label = new QLabel(horizontalLayoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        eventName_lineEdit = new QLineEdit(horizontalLayoutWidget_3);
        eventName_lineEdit->setObjectName(QString::fromUtf8("eventName_lineEdit"));

        horizontalLayout_3->addWidget(eventName_lineEdit);

        stackedWidget->addWidget(result_page);
        event_Page = new QWidget();
        event_Page->setObjectName(QString::fromUtf8("event_Page"));
        horizontalLayoutWidget_5 = new QWidget(event_Page);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(0, 10, 259, 61));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        start_dateTimeEdit = new QDateTimeEdit(horizontalLayoutWidget_5);
        start_dateTimeEdit->setObjectName(QString::fromUtf8("start_dateTimeEdit"));

        horizontalLayout_5->addWidget(start_dateTimeEdit);

        label_4 = new QLabel(horizontalLayoutWidget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        end_dateTimeEdit = new QDateTimeEdit(horizontalLayoutWidget_5);
        end_dateTimeEdit->setObjectName(QString::fromUtf8("end_dateTimeEdit"));

        horizontalLayout_5->addWidget(end_dateTimeEdit);

        stackedWidget->addWidget(event_Page);

        horizontalLayout->addWidget(stackedWidget);

        btn_query = new QPushButton(groupBox_2);
        btn_query->setObjectName(QString::fromUtf8("btn_query"));

        horizontalLayout->addWidget(btn_query);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 0, 1, 1);

        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_3->addWidget(tableView, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(QueryPage);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QueryPage);
    } // setupUi

    void retranslateUi(QWidget *QueryPage)
    {
        QueryPage->setWindowTitle(QCoreApplication::translate("QueryPage", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QueryPage", "\346\237\245\350\257\242", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QueryPage", "\346\235\241\344\273\266\347\255\233\351\200\211", nullptr));
        query_label->setText(QCoreApplication::translate("QueryPage", "\346\237\245\350\257\242\344\276\235\346\215\256\357\274\232", nullptr));
        btn_recognise->setText(QCoreApplication::translate("QueryPage", "\350\257\206\345\210\253", nullptr));
        cardId_label->setText(QCoreApplication::translate("QueryPage", "\345\215\241\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("QueryPage", "\350\277\220\345\212\250\345\221\230\345\247\223\345\220\215\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("QueryPage", "\350\265\233\344\272\213\345\220\215\347\247\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("QueryPage", "From: ", nullptr));
        label_4->setText(QCoreApplication::translate("QueryPage", "To:", nullptr));
        btn_query->setText(QCoreApplication::translate("QueryPage", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QueryPage: public Ui_QueryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYPAGE_H
