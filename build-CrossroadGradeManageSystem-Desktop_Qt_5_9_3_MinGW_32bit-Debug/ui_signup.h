/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

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
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *time_label;
    QLineEdit *time_lineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *eventName_label;
    QComboBox *eventName_comboBox;
    QLabel *checkPointName_label;
    QComboBox *checkPoint_comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *arrivalTime_label;
    QTimeEdit *arrivalTime_timeEdit;
    QPushButton *btn_arrivalTime;
    QHBoxLayout *horizontalLayout_3;
    QLabel *departureTime_label;
    QTimeEdit *departureTime_timeEdit;
    QPushButton *btn_departmentTime;
    QHBoxLayout *horizontalLayout_5;
    QLabel *sumTime_label;
    QLineEdit *sumTime_lineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *rank_label;
    QLineEdit *rank_lineEdit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *rfidTag_label;
    QLineEdit *rfidTag_lineEdit;
    QPushButton *btn_recognize;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_refresh;
    QPushButton *btn_reset;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView;

    void setupUi(QWidget *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QStringLiteral("SignUp"));
        SignUp->resize(750, 600);
        groupBox = new QGroupBox(SignUp);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 731, 591));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 30, 356, 331));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        time_label = new QLabel(verticalLayoutWidget);
        time_label->setObjectName(QStringLiteral("time_label"));

        horizontalLayout_4->addWidget(time_label);

        time_lineEdit = new QLineEdit(verticalLayoutWidget);
        time_lineEdit->setObjectName(QStringLiteral("time_lineEdit"));

        horizontalLayout_4->addWidget(time_lineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        eventName_label = new QLabel(verticalLayoutWidget);
        eventName_label->setObjectName(QStringLiteral("eventName_label"));

        horizontalLayout->addWidget(eventName_label);

        eventName_comboBox = new QComboBox(verticalLayoutWidget);
        eventName_comboBox->setObjectName(QStringLiteral("eventName_comboBox"));

        horizontalLayout->addWidget(eventName_comboBox);

        checkPointName_label = new QLabel(verticalLayoutWidget);
        checkPointName_label->setObjectName(QStringLiteral("checkPointName_label"));

        horizontalLayout->addWidget(checkPointName_label);

        checkPoint_comboBox = new QComboBox(verticalLayoutWidget);
        checkPoint_comboBox->setObjectName(QStringLiteral("checkPoint_comboBox"));

        horizontalLayout->addWidget(checkPoint_comboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        arrivalTime_label = new QLabel(verticalLayoutWidget);
        arrivalTime_label->setObjectName(QStringLiteral("arrivalTime_label"));

        horizontalLayout_2->addWidget(arrivalTime_label);

        arrivalTime_timeEdit = new QTimeEdit(verticalLayoutWidget);
        arrivalTime_timeEdit->setObjectName(QStringLiteral("arrivalTime_timeEdit"));

        horizontalLayout_2->addWidget(arrivalTime_timeEdit);

        btn_arrivalTime = new QPushButton(verticalLayoutWidget);
        btn_arrivalTime->setObjectName(QStringLiteral("btn_arrivalTime"));

        horizontalLayout_2->addWidget(btn_arrivalTime);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        departureTime_label = new QLabel(verticalLayoutWidget);
        departureTime_label->setObjectName(QStringLiteral("departureTime_label"));

        horizontalLayout_3->addWidget(departureTime_label);

        departureTime_timeEdit = new QTimeEdit(verticalLayoutWidget);
        departureTime_timeEdit->setObjectName(QStringLiteral("departureTime_timeEdit"));

        horizontalLayout_3->addWidget(departureTime_timeEdit);

        btn_departmentTime = new QPushButton(verticalLayoutWidget);
        btn_departmentTime->setObjectName(QStringLiteral("btn_departmentTime"));

        horizontalLayout_3->addWidget(btn_departmentTime);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        sumTime_label = new QLabel(verticalLayoutWidget);
        sumTime_label->setObjectName(QStringLiteral("sumTime_label"));

        horizontalLayout_5->addWidget(sumTime_label);

        sumTime_lineEdit = new QLineEdit(verticalLayoutWidget);
        sumTime_lineEdit->setObjectName(QStringLiteral("sumTime_lineEdit"));

        horizontalLayout_5->addWidget(sumTime_lineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        rank_label = new QLabel(verticalLayoutWidget);
        rank_label->setObjectName(QStringLiteral("rank_label"));

        horizontalLayout_6->addWidget(rank_label);

        rank_lineEdit = new QLineEdit(verticalLayoutWidget);
        rank_lineEdit->setObjectName(QStringLiteral("rank_lineEdit"));

        horizontalLayout_6->addWidget(rank_lineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(367, 30, 361, 331));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        rfidTag_label = new QLabel(verticalLayoutWidget_2);
        rfidTag_label->setObjectName(QStringLiteral("rfidTag_label"));

        horizontalLayout_7->addWidget(rfidTag_label);

        rfidTag_lineEdit = new QLineEdit(verticalLayoutWidget_2);
        rfidTag_lineEdit->setObjectName(QStringLiteral("rfidTag_lineEdit"));

        horizontalLayout_7->addWidget(rfidTag_lineEdit);

        btn_recognize = new QPushButton(verticalLayoutWidget_2);
        btn_recognize->setObjectName(QStringLiteral("btn_recognize"));

        horizontalLayout_7->addWidget(btn_recognize);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        btn_refresh = new QPushButton(verticalLayoutWidget_2);
        btn_refresh->setObjectName(QStringLiteral("btn_refresh"));

        horizontalLayout_8->addWidget(btn_refresh);

        btn_reset = new QPushButton(verticalLayoutWidget_2);
        btn_reset->setObjectName(QStringLiteral("btn_reset"));

        horizontalLayout_8->addWidget(btn_reset);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_8);

        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 370, 711, 211));

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QWidget *SignUp)
    {
        SignUp->setWindowTitle(QApplication::translate("SignUp", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SignUp", "\346\211\223\345\215\241", Q_NULLPTR));
        time_label->setText(QApplication::translate("SignUp", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        eventName_label->setText(QApplication::translate("SignUp", "\350\265\233\344\272\213\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        checkPointName_label->setText(QApplication::translate("SignUp", "\346\211\223\345\215\241\347\202\271\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        arrivalTime_label->setText(QApplication::translate("SignUp", "\345\210\260\350\276\276\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        btn_arrivalTime->setText(QApplication::translate("SignUp", "\350\256\260\345\275\225", Q_NULLPTR));
        departureTime_label->setText(QApplication::translate("SignUp", "\347\246\273\345\274\200\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        btn_departmentTime->setText(QApplication::translate("SignUp", "\350\256\260\345\275\225", Q_NULLPTR));
        sumTime_label->setText(QApplication::translate("SignUp", "\346\200\273\347\224\250\346\227\266\357\274\232", Q_NULLPTR));
        rank_label->setText(QApplication::translate("SignUp", "\345\220\215\346\254\241\357\274\232", Q_NULLPTR));
        rfidTag_label->setText(QApplication::translate("SignUp", "\345\215\241\345\217\267\357\274\232", Q_NULLPTR));
        btn_recognize->setText(QApplication::translate("SignUp", "\350\257\206\345\210\253", Q_NULLPTR));
        btn_refresh->setText(QApplication::translate("SignUp", "\345\210\267\346\226\260\346\211\223\345\215\241\350\241\250", Q_NULLPTR));
        btn_reset->setText(QApplication::translate("SignUp", "\351\207\215\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
