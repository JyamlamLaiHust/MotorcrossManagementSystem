/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
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
    QLabel *Time_label;
    QTimeEdit *Time_timeEdit;
    QPushButton *btn_Time;
    QHBoxLayout *horizontalLayout_3;
    QLabel *direction_label;
    QLineEdit *direction_lineEdit;
    QLabel *direction_label_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *sumTime_label;
    QLineEdit *sumTime_lineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *rank_label;
    QLineEdit *rank_lineEdit;
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
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(481, 335);
        gridLayout = new QGridLayout(SignUp);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(SignUp);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        time_label = new QLabel(groupBox);
        time_label->setObjectName(QString::fromUtf8("time_label"));

        horizontalLayout_4->addWidget(time_label);

        time_lineEdit = new QLineEdit(groupBox);
        time_lineEdit->setObjectName(QString::fromUtf8("time_lineEdit"));

        horizontalLayout_4->addWidget(time_lineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        eventName_label = new QLabel(groupBox);
        eventName_label->setObjectName(QString::fromUtf8("eventName_label"));

        horizontalLayout->addWidget(eventName_label);

        eventName_comboBox = new QComboBox(groupBox);
        eventName_comboBox->addItem(QString());
        eventName_comboBox->setObjectName(QString::fromUtf8("eventName_comboBox"));

        horizontalLayout->addWidget(eventName_comboBox);

        checkPointName_label = new QLabel(groupBox);
        checkPointName_label->setObjectName(QString::fromUtf8("checkPointName_label"));

        horizontalLayout->addWidget(checkPointName_label);

        checkPoint_comboBox = new QComboBox(groupBox);
        checkPoint_comboBox->addItem(QString());
        checkPoint_comboBox->setObjectName(QString::fromUtf8("checkPoint_comboBox"));

        horizontalLayout->addWidget(checkPoint_comboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Time_label = new QLabel(groupBox);
        Time_label->setObjectName(QString::fromUtf8("Time_label"));

        horizontalLayout_2->addWidget(Time_label);

        Time_timeEdit = new QTimeEdit(groupBox);
        Time_timeEdit->setObjectName(QString::fromUtf8("Time_timeEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Time_timeEdit->sizePolicy().hasHeightForWidth());
        Time_timeEdit->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(Time_timeEdit);

        btn_Time = new QPushButton(groupBox);
        btn_Time->setObjectName(QString::fromUtf8("btn_Time"));

        horizontalLayout_2->addWidget(btn_Time);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        direction_label = new QLabel(groupBox);
        direction_label->setObjectName(QString::fromUtf8("direction_label"));

        horizontalLayout_3->addWidget(direction_label);

        direction_lineEdit = new QLineEdit(groupBox);
        direction_lineEdit->setObjectName(QString::fromUtf8("direction_lineEdit"));

        horizontalLayout_3->addWidget(direction_lineEdit);

        direction_label_2 = new QLabel(groupBox);
        direction_label_2->setObjectName(QString::fromUtf8("direction_label_2"));

        horizontalLayout_3->addWidget(direction_label_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        sumTime_label = new QLabel(groupBox);
        sumTime_label->setObjectName(QString::fromUtf8("sumTime_label"));

        horizontalLayout_5->addWidget(sumTime_label);

        sumTime_lineEdit = new QLineEdit(groupBox);
        sumTime_lineEdit->setObjectName(QString::fromUtf8("sumTime_lineEdit"));

        horizontalLayout_5->addWidget(sumTime_lineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        rank_label = new QLabel(groupBox);
        rank_label->setObjectName(QString::fromUtf8("rank_label"));

        horizontalLayout_6->addWidget(rank_label);

        rank_lineEdit = new QLineEdit(groupBox);
        rank_lineEdit->setObjectName(QString::fromUtf8("rank_lineEdit"));

        horizontalLayout_6->addWidget(rank_lineEdit);


        verticalLayout->addLayout(horizontalLayout_6);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        rfidTag_label = new QLabel(groupBox);
        rfidTag_label->setObjectName(QString::fromUtf8("rfidTag_label"));

        horizontalLayout_7->addWidget(rfidTag_label);

        rfidTag_lineEdit = new QLineEdit(groupBox);
        rfidTag_lineEdit->setObjectName(QString::fromUtf8("rfidTag_lineEdit"));

        horizontalLayout_7->addWidget(rfidTag_lineEdit);

        btn_recognize = new QPushButton(groupBox);
        btn_recognize->setObjectName(QString::fromUtf8("btn_recognize"));

        horizontalLayout_7->addWidget(btn_recognize);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        btn_refresh = new QPushButton(groupBox);
        btn_refresh->setObjectName(QString::fromUtf8("btn_refresh"));

        horizontalLayout_8->addWidget(btn_refresh);

        btn_reset = new QPushButton(groupBox);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));

        horizontalLayout_8->addWidget(btn_reset);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_8);


        gridLayout_2->addLayout(verticalLayout_2, 0, 1, 1, 1);

        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 1, 0, 1, 2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QWidget *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SignUp", "\346\211\223\345\215\241", nullptr));
        time_label->setText(QCoreApplication::translate("SignUp", "\345\256\236\346\227\266\346\227\266\351\227\264\357\274\232", nullptr));
        eventName_label->setText(QCoreApplication::translate("SignUp", "\350\265\233\344\272\213\345\220\215\347\247\260\357\274\232", nullptr));
        eventName_comboBox->setItemText(0, QString());

        checkPointName_label->setText(QCoreApplication::translate("SignUp", "\346\211\223\345\215\241\347\202\271\345\220\215\347\247\260\357\274\232", nullptr));
        checkPoint_comboBox->setItemText(0, QString());

        Time_label->setText(QCoreApplication::translate("SignUp", "\346\227\266\351\227\264\346\210\263\357\274\232", nullptr));
        btn_Time->setText(QCoreApplication::translate("SignUp", "\350\256\260\345\275\225", nullptr));
        direction_label->setText(QCoreApplication::translate("SignUp", "\346\226\271\345\220\221\357\274\232", nullptr));
        direction_label_2->setText(QCoreApplication::translate("SignUp", "0\350\241\250\347\244\272\345\210\260\350\276\276\357\274\2141\350\241\250\347\244\272\347\246\273\345\274\200", nullptr));
        sumTime_label->setText(QCoreApplication::translate("SignUp", "\346\200\273\347\224\250\346\227\266\357\274\232", nullptr));
        rank_label->setText(QCoreApplication::translate("SignUp", "\345\220\215\346\254\241\357\274\232", nullptr));
        rfidTag_label->setText(QCoreApplication::translate("SignUp", "\345\215\241\345\217\267\357\274\232", nullptr));
        btn_recognize->setText(QCoreApplication::translate("SignUp", "\350\257\206\345\210\253", nullptr));
        btn_refresh->setText(QCoreApplication::translate("SignUp", "\345\210\267\346\226\260\346\211\223\345\215\241\350\241\250", nullptr));
        btn_reset->setText(QCoreApplication::translate("SignUp", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
