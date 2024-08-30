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
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit_2;
    QPushButton *pushButton;
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
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        dateTimeEdit = new QDateTimeEdit(horizontalLayoutWidget);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setDateTime(QDateTime(QDate(2024, 9, 1), QTime(8, 0, 0)));

        horizontalLayout->addWidget(dateTimeEdit);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        dateTimeEdit_2 = new QDateTimeEdit(horizontalLayoutWidget);
        dateTimeEdit_2->setObjectName(QStringLiteral("dateTimeEdit_2"));
        dateTimeEdit_2->setDateTime(QDateTime(QDate(2024, 9, 1), QTime(8, 0, 0)));

        horizontalLayout->addWidget(dateTimeEdit_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

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
        label->setText(QApplication::translate("QueryPage", "\346\237\245\350\257\242\344\276\235\346\215\256\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("QueryPage", "From\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("QueryPage", "To\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QueryPage", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QueryPage: public Ui_QueryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYPAGE_H
