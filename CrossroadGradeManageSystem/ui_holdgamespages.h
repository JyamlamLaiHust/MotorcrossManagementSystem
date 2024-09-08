/********************************************************************************
** Form generated from reading UI file 'holdgamespages.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOLDGAMESPAGES_H
#define UI_HOLDGAMESPAGES_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
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
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *eventName_label;
    QLineEdit *eventName_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *startTime_label;
    QDateTimeEdit *startTime_dateTimeEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *endTime_label;
    QDateTimeEdit *endTime_dateTimeEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *raceDistance_label;
    QLineEdit *raceDistance_lineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *elevationGain_label;
    QLineEdit *elevationGain_lineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *registrationFee_label;
    QLineEdit *registrationFee_lineEdit;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_create;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *eventName_label_2;
    QComboBox *eventName_comboBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *checkpointName_label;
    QLineEdit *checkpointName_lineEdit;
    QHBoxLayout *horizontalLayout_12;
    QLabel *segmentDistance_label;
    QLineEdit *segmentDistance_lineEdit;
    QHBoxLayout *horizontalLayout_15;
    QLabel *segmentElevation_label;
    QLineEdit *segmentElevation_lineEdit;
    QHBoxLayout *horizontalLayout_14;
    QLabel *openTime_label;
    QDateTimeEdit *openTime_dateTimeEdit;
    QHBoxLayout *horizontalLayout_16;
    QLabel *closeTime_label;
    QDateTimeEdit *closeTime_dateTimeEdit;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_bond;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *HoldGamesPages)
    {
        if (HoldGamesPages->objectName().isEmpty())
            HoldGamesPages->setObjectName(QString::fromUtf8("HoldGamesPages"));
        HoldGamesPages->resize(500, 350);
        groupBox = new QGroupBox(HoldGamesPages);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 481, 331));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(25);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, -1, 5, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        eventName_label = new QLabel(groupBox_2);
        eventName_label->setObjectName(QString::fromUtf8("eventName_label"));

        horizontalLayout->addWidget(eventName_label);

        eventName_lineEdit = new QLineEdit(groupBox_2);
        eventName_lineEdit->setObjectName(QString::fromUtf8("eventName_lineEdit"));

        horizontalLayout->addWidget(eventName_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        startTime_label = new QLabel(groupBox_2);
        startTime_label->setObjectName(QString::fromUtf8("startTime_label"));

        horizontalLayout_2->addWidget(startTime_label);

        startTime_dateTimeEdit = new QDateTimeEdit(groupBox_2);
        startTime_dateTimeEdit->setObjectName(QString::fromUtf8("startTime_dateTimeEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startTime_dateTimeEdit->sizePolicy().hasHeightForWidth());
        startTime_dateTimeEdit->setSizePolicy(sizePolicy);
        startTime_dateTimeEdit->setDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));
        startTime_dateTimeEdit->setDate(QDate(2024, 9, 1));
        startTime_dateTimeEdit->setMinimumDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));
        startTime_dateTimeEdit->setCalendarPopup(false);
        startTime_dateTimeEdit->setTimeSpec(Qt::LocalTime);

        horizontalLayout_2->addWidget(startTime_dateTimeEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        endTime_label = new QLabel(groupBox_2);
        endTime_label->setObjectName(QString::fromUtf8("endTime_label"));

        horizontalLayout_4->addWidget(endTime_label);

        endTime_dateTimeEdit = new QDateTimeEdit(groupBox_2);
        endTime_dateTimeEdit->setObjectName(QString::fromUtf8("endTime_dateTimeEdit"));
        sizePolicy.setHeightForWidth(endTime_dateTimeEdit->sizePolicy().hasHeightForWidth());
        endTime_dateTimeEdit->setSizePolicy(sizePolicy);
        endTime_dateTimeEdit->setDate(QDate(2024, 9, 1));
        endTime_dateTimeEdit->setMinimumDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));

        horizontalLayout_4->addWidget(endTime_dateTimeEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        raceDistance_label = new QLabel(groupBox_2);
        raceDistance_label->setObjectName(QString::fromUtf8("raceDistance_label"));

        horizontalLayout_5->addWidget(raceDistance_label);

        raceDistance_lineEdit = new QLineEdit(groupBox_2);
        raceDistance_lineEdit->setObjectName(QString::fromUtf8("raceDistance_lineEdit"));

        horizontalLayout_5->addWidget(raceDistance_lineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        elevationGain_label = new QLabel(groupBox_2);
        elevationGain_label->setObjectName(QString::fromUtf8("elevationGain_label"));

        horizontalLayout_6->addWidget(elevationGain_label);

        elevationGain_lineEdit = new QLineEdit(groupBox_2);
        elevationGain_lineEdit->setObjectName(QString::fromUtf8("elevationGain_lineEdit"));

        horizontalLayout_6->addWidget(elevationGain_lineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        registrationFee_label = new QLabel(groupBox_2);
        registrationFee_label->setObjectName(QString::fromUtf8("registrationFee_label"));

        horizontalLayout_8->addWidget(registrationFee_label);

        registrationFee_lineEdit = new QLineEdit(groupBox_2);
        registrationFee_lineEdit->setObjectName(QString::fromUtf8("registrationFee_lineEdit"));

        horizontalLayout_8->addWidget(registrationFee_lineEdit);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        btn_create = new QPushButton(groupBox_2);
        btn_create->setObjectName(QString::fromUtf8("btn_create"));

        horizontalLayout_11->addWidget(btn_create);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_11);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(25);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, -1, 5, -1);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        eventName_label_2 = new QLabel(groupBox_3);
        eventName_label_2->setObjectName(QString::fromUtf8("eventName_label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(eventName_label_2->sizePolicy().hasHeightForWidth());
        eventName_label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(eventName_label_2);

        eventName_comboBox = new QComboBox(groupBox_3);
        eventName_comboBox->setObjectName(QString::fromUtf8("eventName_comboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(eventName_comboBox->sizePolicy().hasHeightForWidth());
        eventName_comboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(eventName_comboBox);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        checkpointName_label = new QLabel(groupBox_3);
        checkpointName_label->setObjectName(QString::fromUtf8("checkpointName_label"));
        sizePolicy1.setHeightForWidth(checkpointName_label->sizePolicy().hasHeightForWidth());
        checkpointName_label->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(checkpointName_label);

        checkpointName_lineEdit = new QLineEdit(groupBox_3);
        checkpointName_lineEdit->setObjectName(QString::fromUtf8("checkpointName_lineEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(checkpointName_lineEdit->sizePolicy().hasHeightForWidth());
        checkpointName_lineEdit->setSizePolicy(sizePolicy3);

        horizontalLayout_10->addWidget(checkpointName_lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        segmentDistance_label = new QLabel(groupBox_3);
        segmentDistance_label->setObjectName(QString::fromUtf8("segmentDistance_label"));

        horizontalLayout_12->addWidget(segmentDistance_label);

        segmentDistance_lineEdit = new QLineEdit(groupBox_3);
        segmentDistance_lineEdit->setObjectName(QString::fromUtf8("segmentDistance_lineEdit"));

        horizontalLayout_12->addWidget(segmentDistance_lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        segmentElevation_label = new QLabel(groupBox_3);
        segmentElevation_label->setObjectName(QString::fromUtf8("segmentElevation_label"));

        horizontalLayout_15->addWidget(segmentElevation_label);

        segmentElevation_lineEdit = new QLineEdit(groupBox_3);
        segmentElevation_lineEdit->setObjectName(QString::fromUtf8("segmentElevation_lineEdit"));

        horizontalLayout_15->addWidget(segmentElevation_lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        openTime_label = new QLabel(groupBox_3);
        openTime_label->setObjectName(QString::fromUtf8("openTime_label"));

        horizontalLayout_14->addWidget(openTime_label);

        openTime_dateTimeEdit = new QDateTimeEdit(groupBox_3);
        openTime_dateTimeEdit->setObjectName(QString::fromUtf8("openTime_dateTimeEdit"));
        sizePolicy.setHeightForWidth(openTime_dateTimeEdit->sizePolicy().hasHeightForWidth());
        openTime_dateTimeEdit->setSizePolicy(sizePolicy);
        openTime_dateTimeEdit->setDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));
        openTime_dateTimeEdit->setMinimumDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));

        horizontalLayout_14->addWidget(openTime_dateTimeEdit);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        closeTime_label = new QLabel(groupBox_3);
        closeTime_label->setObjectName(QString::fromUtf8("closeTime_label"));

        horizontalLayout_16->addWidget(closeTime_label);

        closeTime_dateTimeEdit = new QDateTimeEdit(groupBox_3);
        closeTime_dateTimeEdit->setObjectName(QString::fromUtf8("closeTime_dateTimeEdit"));
        sizePolicy.setHeightForWidth(closeTime_dateTimeEdit->sizePolicy().hasHeightForWidth());
        closeTime_dateTimeEdit->setSizePolicy(sizePolicy);
        closeTime_dateTimeEdit->setDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));
        closeTime_dateTimeEdit->setMinimumDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));

        horizontalLayout_16->addWidget(closeTime_dateTimeEdit);


        verticalLayout_2->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_3);

        btn_bond = new QPushButton(groupBox_3);
        btn_bond->setObjectName(QString::fromUtf8("btn_bond"));

        horizontalLayout_17->addWidget(btn_bond);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_17);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 0, 1, 1, 1);


        retranslateUi(HoldGamesPages);

        QMetaObject::connectSlotsByName(HoldGamesPages);
    } // setupUi

    void retranslateUi(QWidget *HoldGamesPages)
    {
        HoldGamesPages->setWindowTitle(QCoreApplication::translate("HoldGamesPages", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("HoldGamesPages", "\350\265\233\344\272\213\347\256\241\347\220\206", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("HoldGamesPages", "\350\265\233\344\272\213\344\277\241\346\201\257\345\275\225\345\205\245", nullptr));
        eventName_label->setText(QCoreApplication::translate("HoldGamesPages", "\350\265\233\344\272\213\345\220\215\347\247\260\357\274\232", nullptr));
        startTime_label->setText(QCoreApplication::translate("HoldGamesPages", "\350\265\233\344\272\213\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", nullptr));
        endTime_label->setText(QCoreApplication::translate("HoldGamesPages", "\350\265\233\344\272\213\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", nullptr));
        raceDistance_label->setText(QCoreApplication::translate("HoldGamesPages", "\350\265\233\347\250\213\350\267\235\347\246\273\357\274\232", nullptr));
        elevationGain_label->setText(QCoreApplication::translate("HoldGamesPages", "\346\224\200\345\215\207\351\253\230\345\272\246\357\274\232", nullptr));
        registrationFee_label->setText(QCoreApplication::translate("HoldGamesPages", "\350\264\271\347\224\250\346\212\245\345\220\215\357\274\232", nullptr));
        btn_create->setText(QCoreApplication::translate("HoldGamesPages", "\345\210\233\345\273\272", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("HoldGamesPages", "\346\211\223\345\215\241\347\202\271\344\277\241\346\201\257\347\273\221\345\256\232", nullptr));
        eventName_label_2->setText(QCoreApplication::translate("HoldGamesPages", "\345\257\271\345\272\224\350\265\233\344\272\213\357\274\232", nullptr));
        checkpointName_label->setText(QCoreApplication::translate("HoldGamesPages", "\346\211\223\345\215\241\347\202\271\345\220\215\347\247\260\357\274\232", nullptr));
        segmentDistance_label->setText(QCoreApplication::translate("HoldGamesPages", "\345\210\206\346\256\265\350\267\235\347\246\273\357\274\232", nullptr));
        segmentElevation_label->setText(QCoreApplication::translate("HoldGamesPages", "\345\210\206\346\256\265\346\224\200\345\215\207\357\274\232", nullptr));
        openTime_label->setText(QCoreApplication::translate("HoldGamesPages", "\345\274\200\346\224\276\346\227\266\351\227\264\357\274\232", nullptr));
        closeTime_label->setText(QCoreApplication::translate("HoldGamesPages", "\345\205\263\351\227\250\346\227\266\351\227\264\357\274\232", nullptr));
        btn_bond->setText(QCoreApplication::translate("HoldGamesPages", "\347\273\221\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HoldGamesPages: public Ui_HoldGamesPages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOLDGAMESPAGES_H
