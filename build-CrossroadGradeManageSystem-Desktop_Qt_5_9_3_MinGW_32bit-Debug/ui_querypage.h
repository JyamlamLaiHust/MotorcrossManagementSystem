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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QLabel *cardId_label;
    QLineEdit *cardId_lineEdit;
    QPushButton *btn_recognise;
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

        cardId_label = new QLabel(horizontalLayoutWidget);
        cardId_label->setObjectName(QStringLiteral("cardId_label"));

        horizontalLayout->addWidget(cardId_label);

        cardId_lineEdit = new QLineEdit(horizontalLayoutWidget);
        cardId_lineEdit->setObjectName(QStringLiteral("cardId_lineEdit"));

        horizontalLayout->addWidget(cardId_lineEdit);

        btn_recognise = new QPushButton(horizontalLayoutWidget);
        btn_recognise->setObjectName(QStringLiteral("btn_recognise"));

        horizontalLayout->addWidget(btn_recognise);

        btn_query = new QPushButton(horizontalLayoutWidget);
        btn_query->setObjectName(QStringLiteral("btn_query"));

        horizontalLayout->addWidget(btn_query);

        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 140, 721, 431));

        retranslateUi(QueryPage);

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
        btn_query->setText(QApplication::translate("QueryPage", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QueryPage: public Ui_QueryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYPAGE_H
