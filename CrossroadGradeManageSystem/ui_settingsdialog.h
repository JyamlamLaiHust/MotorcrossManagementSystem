/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *selectBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *serialPortInfoListBox;
    QPushButton *btn_Refresh;
    QLabel *serialNumberLabel;
    QLabel *descriptionLabel;
    QLabel *manufacturerLabel;
    QLabel *locationLabel;
    QLabel *vidLabel;
    QLabel *pidLabel;
    QGroupBox *parametersBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *baudRateLabel;
    QComboBox *baudRateBox;
    QLabel *dataBitsLabel;
    QComboBox *dataBitsBox;
    QLabel *parityLabel;
    QComboBox *parityBox;
    QLabel *stopBitsLabel;
    QComboBox *stopBitsBox;
    QLabel *flowControlLabel;
    QComboBox *flowControlBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_Apply;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(500, 350);
        SettingsDialog->setMaximumSize(QSize(1920, 1080));
        gridLayout_3 = new QGridLayout(SettingsDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        selectBox = new QGroupBox(SettingsDialog);
        selectBox->setObjectName(QString::fromUtf8("selectBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectBox->sizePolicy().hasHeightForWidth());
        selectBox->setSizePolicy(sizePolicy);
        selectBox->setMinimumSize(QSize(180, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(10);
        selectBox->setFont(font);
        gridLayout = new QGridLayout(selectBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        serialPortInfoListBox = new QComboBox(selectBox);
        serialPortInfoListBox->setObjectName(QString::fromUtf8("serialPortInfoListBox"));
        serialPortInfoListBox->setFont(font);

        horizontalLayout_2->addWidget(serialPortInfoListBox);

        btn_Refresh = new QPushButton(selectBox);
        btn_Refresh->setObjectName(QString::fromUtf8("btn_Refresh"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_Refresh->sizePolicy().hasHeightForWidth());
        btn_Refresh->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(btn_Refresh);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        serialNumberLabel = new QLabel(selectBox);
        serialNumberLabel->setObjectName(QString::fromUtf8("serialNumberLabel"));
        serialNumberLabel->setFont(font);

        gridLayout->addWidget(serialNumberLabel, 3, 0, 1, 1);

        descriptionLabel = new QLabel(selectBox);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setFont(font);

        gridLayout->addWidget(descriptionLabel, 1, 0, 1, 1);

        manufacturerLabel = new QLabel(selectBox);
        manufacturerLabel->setObjectName(QString::fromUtf8("manufacturerLabel"));
        manufacturerLabel->setFont(font);

        gridLayout->addWidget(manufacturerLabel, 2, 0, 1, 1);

        locationLabel = new QLabel(selectBox);
        locationLabel->setObjectName(QString::fromUtf8("locationLabel"));
        locationLabel->setFont(font);

        gridLayout->addWidget(locationLabel, 4, 0, 1, 1);

        vidLabel = new QLabel(selectBox);
        vidLabel->setObjectName(QString::fromUtf8("vidLabel"));
        vidLabel->setFont(font);

        gridLayout->addWidget(vidLabel, 5, 0, 1, 1);

        pidLabel = new QLabel(selectBox);
        pidLabel->setObjectName(QString::fromUtf8("pidLabel"));
        pidLabel->setFont(font);

        gridLayout->addWidget(pidLabel, 6, 0, 1, 1);


        gridLayout_3->addWidget(selectBox, 0, 0, 1, 1);

        parametersBox = new QGroupBox(SettingsDialog);
        parametersBox->setObjectName(QString::fromUtf8("parametersBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(parametersBox->sizePolicy().hasHeightForWidth());
        parametersBox->setSizePolicy(sizePolicy2);
        parametersBox->setFont(font);
        verticalLayout = new QVBoxLayout(parametersBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        baudRateLabel = new QLabel(parametersBox);
        baudRateLabel->setObjectName(QString::fromUtf8("baudRateLabel"));
        baudRateLabel->setFont(font);

        gridLayout_2->addWidget(baudRateLabel, 0, 0, 1, 1);

        baudRateBox = new QComboBox(parametersBox);
        baudRateBox->setObjectName(QString::fromUtf8("baudRateBox"));
        baudRateBox->setFont(font);

        gridLayout_2->addWidget(baudRateBox, 0, 1, 1, 1);

        dataBitsLabel = new QLabel(parametersBox);
        dataBitsLabel->setObjectName(QString::fromUtf8("dataBitsLabel"));
        dataBitsLabel->setFont(font);

        gridLayout_2->addWidget(dataBitsLabel, 1, 0, 1, 1);

        dataBitsBox = new QComboBox(parametersBox);
        dataBitsBox->setObjectName(QString::fromUtf8("dataBitsBox"));
        dataBitsBox->setFont(font);

        gridLayout_2->addWidget(dataBitsBox, 1, 1, 1, 1);

        parityLabel = new QLabel(parametersBox);
        parityLabel->setObjectName(QString::fromUtf8("parityLabel"));
        parityLabel->setFont(font);

        gridLayout_2->addWidget(parityLabel, 2, 0, 1, 1);

        parityBox = new QComboBox(parametersBox);
        parityBox->setObjectName(QString::fromUtf8("parityBox"));
        parityBox->setFont(font);

        gridLayout_2->addWidget(parityBox, 2, 1, 1, 1);

        stopBitsLabel = new QLabel(parametersBox);
        stopBitsLabel->setObjectName(QString::fromUtf8("stopBitsLabel"));
        stopBitsLabel->setFont(font);

        gridLayout_2->addWidget(stopBitsLabel, 3, 0, 1, 1);

        stopBitsBox = new QComboBox(parametersBox);
        stopBitsBox->setObjectName(QString::fromUtf8("stopBitsBox"));
        stopBitsBox->setFont(font);

        gridLayout_2->addWidget(stopBitsBox, 3, 1, 1, 1);

        flowControlLabel = new QLabel(parametersBox);
        flowControlLabel->setObjectName(QString::fromUtf8("flowControlLabel"));
        flowControlLabel->setFont(font);

        gridLayout_2->addWidget(flowControlLabel, 4, 0, 1, 1);

        flowControlBox = new QComboBox(parametersBox);
        flowControlBox->setObjectName(QString::fromUtf8("flowControlBox"));
        flowControlBox->setFont(font);

        gridLayout_2->addWidget(flowControlBox, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_Apply = new QPushButton(parametersBox);
        btn_Apply->setObjectName(QString::fromUtf8("btn_Apply"));
        btn_Apply->setFont(font);

        horizontalLayout->addWidget(btn_Apply);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_3->addWidget(parametersBox, 0, 1, 1, 1);


        retranslateUi(SettingsDialog);

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Settings", nullptr));
        selectBox->setTitle(QCoreApplication::translate("SettingsDialog", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
        btn_Refresh->setText(QCoreApplication::translate("SettingsDialog", "\345\210\267\346\226\260", nullptr));
        serialNumberLabel->setText(QCoreApplication::translate("SettingsDialog", "\345\272\217\345\210\227\345\217\267:", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("SettingsDialog", "\346\217\217\350\277\260:", nullptr));
        manufacturerLabel->setText(QCoreApplication::translate("SettingsDialog", "\345\210\266\351\200\240\345\225\206:", nullptr));
        locationLabel->setText(QCoreApplication::translate("SettingsDialog", "\344\275\215\347\275\256:", nullptr));
        vidLabel->setText(QCoreApplication::translate("SettingsDialog", "\345\216\202\345\225\206\346\240\207\350\257\206:", nullptr));
        pidLabel->setText(QCoreApplication::translate("SettingsDialog", "\344\272\247\345\223\201ID:", nullptr));
        parametersBox->setTitle(QCoreApplication::translate("SettingsDialog", "\345\217\202\346\225\260\351\205\215\347\275\256", nullptr));
        baudRateLabel->setText(QCoreApplication::translate("SettingsDialog", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        dataBitsLabel->setText(QCoreApplication::translate("SettingsDialog", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        parityLabel->setText(QCoreApplication::translate("SettingsDialog", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        stopBitsLabel->setText(QCoreApplication::translate("SettingsDialog", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        flowControlLabel->setText(QCoreApplication::translate("SettingsDialog", "\346\265\201  \346\216\247\357\274\232", nullptr));
        btn_Apply->setText(QCoreApplication::translate("SettingsDialog", "\345\272\224\347\224\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
