/********************************************************************************
** Form generated from reading UI file 'settingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settingdialog
{
public:
    QGroupBox *DialogSelect;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *serialPortInfoListBox;
    QPushButton *btn_Refresh;
    QLabel *descriptionLabel;
    QLabel *manufacturerLabel;
    QLabel *serialNumberLabel;
    QLabel *locationLabel;
    QLabel *vidLabel;
    QLabel *pidLabel;
    QGroupBox *ParamConfig;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *stopBitsLabel;
    QLabel *parityLabel;
    QLabel *dataBitsLabel;
    QLabel *flowControlLable;
    QLabel *baudRateLabel;
    QComboBox *baudRateBox;
    QComboBox *dataBitsBox;
    QComboBox *parityBox;
    QComboBox *stopBitsBox;
    QComboBox *flowControlBox;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_Apply;

    void setupUi(QWidget *settingdialog)
    {
        if (settingdialog->objectName().isEmpty())
            settingdialog->setObjectName(QStringLiteral("settingdialog"));
        settingdialog->resize(600, 450);
        DialogSelect = new QGroupBox(settingdialog);
        DialogSelect->setObjectName(QStringLiteral("DialogSelect"));
        DialogSelect->setGeometry(QRect(10, 10, 281, 431));
        horizontalLayoutWidget = new QWidget(DialogSelect);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 261, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        serialPortInfoListBox = new QComboBox(horizontalLayoutWidget);
        serialPortInfoListBox->setObjectName(QStringLiteral("serialPortInfoListBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serialPortInfoListBox->sizePolicy().hasHeightForWidth());
        serialPortInfoListBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(serialPortInfoListBox);

        btn_Refresh = new QPushButton(horizontalLayoutWidget);
        btn_Refresh->setObjectName(QStringLiteral("btn_Refresh"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_Refresh->sizePolicy().hasHeightForWidth());
        btn_Refresh->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(btn_Refresh);

        descriptionLabel = new QLabel(DialogSelect);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(10, 100, 54, 12));
        manufacturerLabel = new QLabel(DialogSelect);
        manufacturerLabel->setObjectName(QStringLiteral("manufacturerLabel"));
        manufacturerLabel->setGeometry(QRect(10, 160, 54, 12));
        serialNumberLabel = new QLabel(DialogSelect);
        serialNumberLabel->setObjectName(QStringLiteral("serialNumberLabel"));
        serialNumberLabel->setGeometry(QRect(10, 220, 54, 12));
        locationLabel = new QLabel(DialogSelect);
        locationLabel->setObjectName(QStringLiteral("locationLabel"));
        locationLabel->setGeometry(QRect(10, 280, 54, 12));
        vidLabel = new QLabel(DialogSelect);
        vidLabel->setObjectName(QStringLiteral("vidLabel"));
        vidLabel->setGeometry(QRect(10, 340, 54, 12));
        pidLabel = new QLabel(DialogSelect);
        pidLabel->setObjectName(QStringLiteral("pidLabel"));
        pidLabel->setGeometry(QRect(10, 400, 54, 12));
        ParamConfig = new QGroupBox(settingdialog);
        ParamConfig->setObjectName(QStringLiteral("ParamConfig"));
        ParamConfig->setGeometry(QRect(310, 10, 281, 431));
        gridLayoutWidget = new QWidget(ParamConfig);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 261, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stopBitsLabel = new QLabel(gridLayoutWidget);
        stopBitsLabel->setObjectName(QStringLiteral("stopBitsLabel"));
        stopBitsLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(stopBitsLabel, 3, 0, 1, 1);

        parityLabel = new QLabel(gridLayoutWidget);
        parityLabel->setObjectName(QStringLiteral("parityLabel"));
        parityLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(parityLabel, 2, 0, 1, 1);

        dataBitsLabel = new QLabel(gridLayoutWidget);
        dataBitsLabel->setObjectName(QStringLiteral("dataBitsLabel"));
        dataBitsLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dataBitsLabel, 1, 0, 1, 1);

        flowControlLable = new QLabel(gridLayoutWidget);
        flowControlLable->setObjectName(QStringLiteral("flowControlLable"));
        flowControlLable->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(flowControlLable, 4, 0, 1, 1);

        baudRateLabel = new QLabel(gridLayoutWidget);
        baudRateLabel->setObjectName(QStringLiteral("baudRateLabel"));
        baudRateLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(baudRateLabel, 0, 0, 1, 1);

        baudRateBox = new QComboBox(gridLayoutWidget);
        baudRateBox->setObjectName(QStringLiteral("baudRateBox"));

        gridLayout->addWidget(baudRateBox, 0, 1, 1, 1);

        dataBitsBox = new QComboBox(gridLayoutWidget);
        dataBitsBox->setObjectName(QStringLiteral("dataBitsBox"));

        gridLayout->addWidget(dataBitsBox, 1, 1, 1, 1);

        parityBox = new QComboBox(gridLayoutWidget);
        parityBox->setObjectName(QStringLiteral("parityBox"));

        gridLayout->addWidget(parityBox, 2, 1, 1, 1);

        stopBitsBox = new QComboBox(gridLayoutWidget);
        stopBitsBox->setObjectName(QStringLiteral("stopBitsBox"));

        gridLayout->addWidget(stopBitsBox, 3, 1, 1, 1);

        flowControlBox = new QComboBox(gridLayoutWidget);
        flowControlBox->setObjectName(QStringLiteral("flowControlBox"));

        gridLayout->addWidget(flowControlBox, 4, 1, 1, 1);

        horizontalLayoutWidget_2 = new QWidget(ParamConfig);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 220, 261, 201));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_Apply = new QPushButton(horizontalLayoutWidget_2);
        btn_Apply->setObjectName(QStringLiteral("btn_Apply"));

        horizontalLayout_2->addWidget(btn_Apply);


        retranslateUi(settingdialog);

        QMetaObject::connectSlotsByName(settingdialog);
    } // setupUi

    void retranslateUi(QWidget *settingdialog)
    {
        settingdialog->setWindowTitle(QApplication::translate("settingdialog", "Form", Q_NULLPTR));
        DialogSelect->setTitle(QApplication::translate("settingdialog", "\344\270\262\345\217\243\351\200\211\346\213\251", Q_NULLPTR));
        btn_Refresh->setText(QApplication::translate("settingdialog", "\345\210\267\346\226\260", Q_NULLPTR));
        descriptionLabel->setText(QApplication::translate("settingdialog", "\346\217\217\350\277\260\357\274\232", Q_NULLPTR));
        manufacturerLabel->setText(QApplication::translate("settingdialog", "\345\210\266\351\200\240\345\225\206\357\274\232", Q_NULLPTR));
        serialNumberLabel->setText(QApplication::translate("settingdialog", "\345\272\217\345\210\227\345\217\267\357\274\232", Q_NULLPTR));
        locationLabel->setText(QApplication::translate("settingdialog", "\344\275\215\347\275\256\357\274\232", Q_NULLPTR));
        vidLabel->setText(QApplication::translate("settingdialog", "\345\216\202\345\225\206\346\240\207\350\257\206\357\274\232", Q_NULLPTR));
        pidLabel->setText(QApplication::translate("settingdialog", "\344\272\247\345\223\201ID\357\274\232", Q_NULLPTR));
        ParamConfig->setTitle(QApplication::translate("settingdialog", "\345\217\202\346\225\260\351\205\215\347\275\256", Q_NULLPTR));
        stopBitsLabel->setText(QApplication::translate("settingdialog", "\345\201\234\346\255\242\344\275\215\357\274\232", Q_NULLPTR));
        parityLabel->setText(QApplication::translate("settingdialog", "\346\240\241\351\252\214\344\275\215\357\274\232", Q_NULLPTR));
        dataBitsLabel->setText(QApplication::translate("settingdialog", "\346\225\260\346\215\256\344\275\215\357\274\232", Q_NULLPTR));
        flowControlLable->setText(QApplication::translate("settingdialog", "\346\265\201  \346\216\247\357\274\232", Q_NULLPTR));
        baudRateLabel->setText(QApplication::translate("settingdialog", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        btn_Apply->setText(QApplication::translate("settingdialog", "\345\272\224\347\224\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class settingdialog: public Ui_settingdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
