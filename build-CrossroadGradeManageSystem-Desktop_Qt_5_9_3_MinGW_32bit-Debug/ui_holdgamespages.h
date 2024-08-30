/********************************************************************************
** Form generated from reading UI file 'holdgamespages.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOLDGAMESPAGES_H
#define UI_HOLDGAMESPAGES_H

#include <QtCore/QDate>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HoldGamesPages
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_3;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_11;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_10;
    QDateTimeEdit *dateTimeEdit_3;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_12;
    QDateTimeEdit *dateTimeEdit_4;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *HoldGamesPages)
    {
        if (HoldGamesPages->objectName().isEmpty())
            HoldGamesPages->setObjectName(QStringLiteral("HoldGamesPages"));
        HoldGamesPages->resize(600, 450);
        groupBox = new QGroupBox(HoldGamesPages);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 581, 431));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 30, 281, 391));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 30, 261, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        dateTimeEdit = new QDateTimeEdit(verticalLayoutWidget);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateTimeEdit->sizePolicy().hasHeightForWidth());
        dateTimeEdit->setSizePolicy(sizePolicy);
        dateTimeEdit->setDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));
        dateTimeEdit->setDate(QDate(2024, 9, 1));
        dateTimeEdit->setMinimumDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));
        dateTimeEdit->setCalendarPopup(false);
        dateTimeEdit->setTimeSpec(Qt::LocalTime);

        horizontalLayout_2->addWidget(dateTimeEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        dateTimeEdit_2 = new QDateTimeEdit(verticalLayoutWidget);
        dateTimeEdit_2->setObjectName(QStringLiteral("dateTimeEdit_2"));
        sizePolicy.setHeightForWidth(dateTimeEdit_2->sizePolicy().hasHeightForWidth());
        dateTimeEdit_2->setSizePolicy(sizePolicy);
        dateTimeEdit_2->setDate(QDate(2024, 9, 1));
        dateTimeEdit_2->setMinimumDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));

        horizontalLayout_4->addWidget(dateTimeEdit_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_5->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_6->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_8->addWidget(label_6);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_8->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_11->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_11);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(300, 30, 271, 391));
        verticalLayoutWidget_2 = new QWidget(groupBox_3);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 30, 251, 351));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(label_7);

        comboBox = new QComboBox(verticalLayoutWidget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(comboBox);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(label_8);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy3);

        horizontalLayout_10->addWidget(lineEdit_5);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_12->addWidget(label_9);

        lineEdit_6 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_12->addWidget(lineEdit_6);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_15->addWidget(label_11);

        lineEdit_7 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout_15->addWidget(lineEdit_7);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_14->addWidget(label_10);

        dateTimeEdit_3 = new QDateTimeEdit(verticalLayoutWidget_2);
        dateTimeEdit_3->setObjectName(QStringLiteral("dateTimeEdit_3"));
        sizePolicy.setHeightForWidth(dateTimeEdit_3->sizePolicy().hasHeightForWidth());
        dateTimeEdit_3->setSizePolicy(sizePolicy);
        dateTimeEdit_3->setDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));
        dateTimeEdit_3->setMinimumDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));

        horizontalLayout_14->addWidget(dateTimeEdit_3);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_12 = new QLabel(verticalLayoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_16->addWidget(label_12);

        dateTimeEdit_4 = new QDateTimeEdit(verticalLayoutWidget_2);
        dateTimeEdit_4->setObjectName(QStringLiteral("dateTimeEdit_4"));
        sizePolicy.setHeightForWidth(dateTimeEdit_4->sizePolicy().hasHeightForWidth());
        dateTimeEdit_4->setSizePolicy(sizePolicy);
        dateTimeEdit_4->setDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));
        dateTimeEdit_4->setMinimumDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));

        horizontalLayout_16->addWidget(dateTimeEdit_4);


        verticalLayout_2->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_17->addWidget(pushButton_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_17);


        retranslateUi(HoldGamesPages);

        QMetaObject::connectSlotsByName(HoldGamesPages);
    } // setupUi

    void retranslateUi(QWidget *HoldGamesPages)
    {
        HoldGamesPages->setWindowTitle(QApplication::translate("HoldGamesPages", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("HoldGamesPages", "\350\265\233\344\272\213\347\256\241\347\220\206", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("HoldGamesPages", "\350\265\233\344\272\213\344\277\241\346\201\257\345\275\225\345\205\245", Q_NULLPTR));
        label->setText(QApplication::translate("HoldGamesPages", "\350\265\233\344\272\213\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("HoldGamesPages", "\350\265\233\344\272\213\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("HoldGamesPages", "\350\265\233\344\272\213\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("HoldGamesPages", "\350\265\233\347\250\213\350\267\235\347\246\273\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("HoldGamesPages", "\346\224\200\345\215\207\351\253\230\345\272\246\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("HoldGamesPages", "\350\264\271\347\224\250\346\212\245\345\220\215\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("HoldGamesPages", "\345\210\233\345\273\272", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("HoldGamesPages", "\346\211\223\345\215\241\347\202\271\344\277\241\346\201\257\347\273\221\345\256\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("HoldGamesPages", "\345\257\271\345\272\224\350\265\233\344\272\213\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("HoldGamesPages", "\346\211\223\345\215\241\347\202\271\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("HoldGamesPages", "\345\210\206\346\256\265\350\267\235\347\246\273\357\274\232", Q_NULLPTR));
        label_11->setText(QApplication::translate("HoldGamesPages", "\345\210\206\346\256\265\346\224\200\345\215\207\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("HoldGamesPages", "\345\274\200\346\224\276\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_12->setText(QApplication::translate("HoldGamesPages", "\345\205\263\351\227\250\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("HoldGamesPages", "\347\273\221\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HoldGamesPages: public Ui_HoldGamesPages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOLDGAMESPAGES_H
