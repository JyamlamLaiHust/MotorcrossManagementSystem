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
#include <QtWidgets/QDateEdit>
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
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_6;
    QLabel *label;
    QLineEdit *participantsName_lineEdit;
    QWidget *page;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_7;
    QLineEdit *eventName_lineEdit;
    QLabel *label_2;
    QWidget *page_2;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_8;
    QLabel *label_3;
    QDateEdit *start_dateEdit;
    QLabel *label_4;
    QDateEdit *end_dateEdit;
    QPushButton *btn_Query;
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
        gridLayoutWidget = new QWidget(participantsName_page);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 221, 81));
        gridLayout_6 = new QGridLayout(gridLayoutWidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(5, 0, 5, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        participantsName_lineEdit = new QLineEdit(gridLayoutWidget);
        participantsName_lineEdit->setObjectName(QString::fromUtf8("participantsName_lineEdit"));

        gridLayout_6->addWidget(participantsName_lineEdit, 0, 1, 1, 1);

        stackedWidget->addWidget(participantsName_page);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayoutWidget_2 = new QWidget(page);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 30, 221, 81));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(5, 0, 5, 0);
        eventName_lineEdit = new QLineEdit(gridLayoutWidget_2);
        eventName_lineEdit->setObjectName(QString::fromUtf8("eventName_lineEdit"));

        gridLayout_7->addWidget(eventName_lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_7->addWidget(label_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayoutWidget_3 = new QWidget(page_2);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 30, 221, 81));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_8->addWidget(label_3, 0, 0, 1, 1);

        start_dateEdit = new QDateEdit(gridLayoutWidget_3);
        start_dateEdit->setObjectName(QString::fromUtf8("start_dateEdit"));

        gridLayout_8->addWidget(start_dateEdit, 0, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_8->addWidget(label_4, 0, 2, 1, 1);

        end_dateEdit = new QDateEdit(gridLayoutWidget_3);
        end_dateEdit->setObjectName(QString::fromUtf8("end_dateEdit"));

        gridLayout_8->addWidget(end_dateEdit, 0, 3, 1, 1);

        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);

        btn_Query = new QPushButton(groupBox_2);
        btn_Query->setObjectName(QString::fromUtf8("btn_Query"));

        horizontalLayout->addWidget(btn_Query);


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
        label->setText(QCoreApplication::translate("QueryPage", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("QueryPage", "\346\257\224\350\265\233\345\220\215\347\247\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("QueryPage", "From:", nullptr));
        label_4->setText(QCoreApplication::translate("QueryPage", "To:", nullptr));
        btn_Query->setText(QCoreApplication::translate("QueryPage", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QueryPage: public Ui_QueryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYPAGE_H
