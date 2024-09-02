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
    QWidget *verticalLayoutWidget_2;
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
        eventName_label = new QLabel(verticalLayoutWidget);
        eventName_label->setObjectName(QStringLiteral("eventName_label"));

        horizontalLayout->addWidget(eventName_label);

        eventName_lineEdit = new QLineEdit(verticalLayoutWidget);
        eventName_lineEdit->setObjectName(QStringLiteral("eventName_lineEdit"));

        horizontalLayout->addWidget(eventName_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        startTime_label = new QLabel(verticalLayoutWidget);
        startTime_label->setObjectName(QStringLiteral("startTime_label"));

        horizontalLayout_2->addWidget(startTime_label);

        startTime_dateTimeEdit = new QDateTimeEdit(verticalLayoutWidget);
        startTime_dateTimeEdit->setObjectName(QStringLiteral("startTime_dateTimeEdit"));
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
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        endTime_label = new QLabel(verticalLayoutWidget);
        endTime_label->setObjectName(QStringLiteral("endTime_label"));

        horizontalLayout_4->addWidget(endTime_label);

        endTime_dateTimeEdit = new QDateTimeEdit(verticalLayoutWidget);
        endTime_dateTimeEdit->setObjectName(QStringLiteral("endTime_dateTimeEdit"));
        sizePolicy.setHeightForWidth(endTime_dateTimeEdit->sizePolicy().hasHeightForWidth());
        endTime_dateTimeEdit->setSizePolicy(sizePolicy);
        endTime_dateTimeEdit->setDate(QDate(2024, 9, 1));
        endTime_dateTimeEdit->setMinimumDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));

        horizontalLayout_4->addWidget(endTime_dateTimeEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        raceDistance_label = new QLabel(verticalLayoutWidget);
        raceDistance_label->setObjectName(QStringLiteral("raceDistance_label"));

        horizontalLayout_5->addWidget(raceDistance_label);

        raceDistance_lineEdit = new QLineEdit(verticalLayoutWidget);
        raceDistance_lineEdit->setObjectName(QStringLiteral("raceDistance_lineEdit"));

        horizontalLayout_5->addWidget(raceDistance_lineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        elevationGain_label = new QLabel(verticalLayoutWidget);
        elevationGain_label->setObjectName(QStringLiteral("elevationGain_label"));

        horizontalLayout_6->addWidget(elevationGain_label);

        elevationGain_lineEdit = new QLineEdit(verticalLayoutWidget);
        elevationGain_lineEdit->setObjectName(QStringLiteral("elevationGain_lineEdit"));

        horizontalLayout_6->addWidget(elevationGain_lineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        registrationFee_label = new QLabel(verticalLayoutWidget);
        registrationFee_label->setObjectName(QStringLiteral("registrationFee_label"));

        horizontalLayout_8->addWidget(registrationFee_label);

        registrationFee_lineEdit = new QLineEdit(verticalLayoutWidget);
        registrationFee_lineEdit->setObjectName(QStringLiteral("registrationFee_lineEdit"));

        horizontalLayout_8->addWidget(registrationFee_lineEdit);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        btn_create = new QPushButton(verticalLayoutWidget);
        btn_create->setObjectName(QStringLiteral("btn_create"));

        horizontalLayout_11->addWidget(btn_create);

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
        eventName_label_2 = new QLabel(verticalLayoutWidget_2);
        eventName_label_2->setObjectName(QStringLiteral("eventName_label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(eventName_label_2->sizePolicy().hasHeightForWidth());
        eventName_label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(eventName_label_2);

        eventName_comboBox = new QComboBox(verticalLayoutWidget_2);
        eventName_comboBox->setObjectName(QStringLiteral("eventName_comboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(eventName_comboBox->sizePolicy().hasHeightForWidth());
        eventName_comboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(eventName_comboBox);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        checkpointName_label = new QLabel(verticalLayoutWidget_2);
        checkpointName_label->setObjectName(QStringLiteral("checkpointName_label"));
        sizePolicy1.setHeightForWidth(checkpointName_label->sizePolicy().hasHeightForWidth());
        checkpointName_label->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(checkpointName_label);

        checkpointName_lineEdit = new QLineEdit(verticalLayoutWidget_2);
        checkpointName_lineEdit->setObjectName(QStringLiteral("checkpointName_lineEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(checkpointName_lineEdit->sizePolicy().hasHeightForWidth());
        checkpointName_lineEdit->setSizePolicy(sizePolicy3);

        horizontalLayout_10->addWidget(checkpointName_lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        segmentDistance_label = new QLabel(verticalLayoutWidget_2);
        segmentDistance_label->setObjectName(QStringLiteral("segmentDistance_label"));

        horizontalLayout_12->addWidget(segmentDistance_label);

        segmentDistance_lineEdit = new QLineEdit(verticalLayoutWidget_2);
        segmentDistance_lineEdit->setObjectName(QStringLiteral("segmentDistance_lineEdit"));

        horizontalLayout_12->addWidget(segmentDistance_lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        segmentElevation_label = new QLabel(verticalLayoutWidget_2);
        segmentElevation_label->setObjectName(QStringLiteral("segmentElevation_label"));

        horizontalLayout_15->addWidget(segmentElevation_label);

        segmentElevation_lineEdit = new QLineEdit(verticalLayoutWidget_2);
        segmentElevation_lineEdit->setObjectName(QStringLiteral("segmentElevation_lineEdit"));

        horizontalLayout_15->addWidget(segmentElevation_lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        openTime_label = new QLabel(verticalLayoutWidget_2);
        openTime_label->setObjectName(QStringLiteral("openTime_label"));

        horizontalLayout_14->addWidget(openTime_label);

        openTime_dateTimeEdit = new QDateTimeEdit(verticalLayoutWidget_2);
        openTime_dateTimeEdit->setObjectName(QStringLiteral("openTime_dateTimeEdit"));
        sizePolicy.setHeightForWidth(openTime_dateTimeEdit->sizePolicy().hasHeightForWidth());
        openTime_dateTimeEdit->setSizePolicy(sizePolicy);
        openTime_dateTimeEdit->setDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));
        openTime_dateTimeEdit->setMinimumDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));

        horizontalLayout_14->addWidget(openTime_dateTimeEdit);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        closeTime_label = new QLabel(verticalLayoutWidget_2);
        closeTime_label->setObjectName(QStringLiteral("closeTime_label"));

        horizontalLayout_16->addWidget(closeTime_label);

        closeTime_dateTimeEdit = new QDateTimeEdit(verticalLayoutWidget_2);
        closeTime_dateTimeEdit->setObjectName(QStringLiteral("closeTime_dateTimeEdit"));
        sizePolicy.setHeightForWidth(closeTime_dateTimeEdit->sizePolicy().hasHeightForWidth());
        closeTime_dateTimeEdit->setSizePolicy(sizePolicy);
        closeTime_dateTimeEdit->setDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));
        closeTime_dateTimeEdit->setMinimumDateTime(QDateTime(QDate(2024, 9, 1), QTime(0, 0, 0)));

        horizontalLayout_16->addWidget(closeTime_dateTimeEdit);


        verticalLayout_2->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_3);

        btn_bond = new QPushButton(verticalLayoutWidget_2);
        btn_bond->setObjectName(QStringLiteral("btn_bond"));

        horizontalLayout_17->addWidget(btn_bond);

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
        eventName_label->setText(QApplication::translate("HoldGamesPages", "\350\265\233\344\272\213\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        startTime_label->setText(QApplication::translate("HoldGamesPages", "\350\265\233\344\272\213\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        endTime_label->setText(QApplication::translate("HoldGamesPages", "\350\265\233\344\272\213\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        raceDistance_label->setText(QApplication::translate("HoldGamesPages", "\350\265\233\347\250\213\350\267\235\347\246\273\357\274\232", Q_NULLPTR));
        elevationGain_label->setText(QApplication::translate("HoldGamesPages", "\346\224\200\345\215\207\351\253\230\345\272\246\357\274\232", Q_NULLPTR));
        registrationFee_label->setText(QApplication::translate("HoldGamesPages", "\350\264\271\347\224\250\346\212\245\345\220\215\357\274\232", Q_NULLPTR));
        btn_create->setText(QApplication::translate("HoldGamesPages", "\345\210\233\345\273\272", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("HoldGamesPages", "\346\211\223\345\215\241\347\202\271\344\277\241\346\201\257\347\273\221\345\256\232", Q_NULLPTR));
        eventName_label_2->setText(QApplication::translate("HoldGamesPages", "\345\257\271\345\272\224\350\265\233\344\272\213\357\274\232", Q_NULLPTR));
        checkpointName_label->setText(QApplication::translate("HoldGamesPages", "\346\211\223\345\215\241\347\202\271\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        segmentDistance_label->setText(QApplication::translate("HoldGamesPages", "\345\210\206\346\256\265\350\267\235\347\246\273\357\274\232", Q_NULLPTR));
        segmentElevation_label->setText(QApplication::translate("HoldGamesPages", "\345\210\206\346\256\265\346\224\200\345\215\207\357\274\232", Q_NULLPTR));
        openTime_label->setText(QApplication::translate("HoldGamesPages", "\345\274\200\346\224\276\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        closeTime_label->setText(QApplication::translate("HoldGamesPages", "\345\205\263\351\227\250\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        btn_bond->setText(QApplication::translate("HoldGamesPages", "\347\273\221\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HoldGamesPages: public Ui_HoldGamesPages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOLDGAMESPAGES_H
