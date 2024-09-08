/********************************************************************************
** Form generated from reading UI file 'broadcast.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROADCAST_H
#define UI_BROADCAST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BroadCast
{
public:
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *eventName_comboBox;
    QPushButton *btn_ping;
    QPushButton *btn_pub;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QPlainTextEdit *editLog;

    void setupUi(QWidget *BroadCast)
    {
        if (BroadCast->objectName().isEmpty())
            BroadCast->setObjectName(QString::fromUtf8("BroadCast"));
        BroadCast->resize(750, 600);
        groupBox = new QGroupBox(BroadCast);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 731, 581));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 30, 711, 541));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        eventName_comboBox = new QComboBox(verticalLayoutWidget);
        eventName_comboBox->setObjectName(QString::fromUtf8("eventName_comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(4);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(eventName_comboBox->sizePolicy().hasHeightForWidth());
        eventName_comboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(eventName_comboBox);

        btn_ping = new QPushButton(verticalLayoutWidget);
        btn_ping->setObjectName(QString::fromUtf8("btn_ping"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn_ping->sizePolicy().hasHeightForWidth());
        btn_ping->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(btn_ping);

        btn_pub = new QPushButton(verticalLayoutWidget);
        btn_pub->setObjectName(QString::fromUtf8("btn_pub"));
        sizePolicy2.setHeightForWidth(btn_pub->sizePolicy().hasHeightForWidth());
        btn_pub->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(btn_pub);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        editLog = new QPlainTextEdit(verticalLayoutWidget);
        editLog->setObjectName(QString::fromUtf8("editLog"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(3);
        sizePolicy3.setHeightForWidth(editLog->sizePolicy().hasHeightForWidth());
        editLog->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(editLog);


        retranslateUi(BroadCast);

        QMetaObject::connectSlotsByName(BroadCast);
    } // setupUi

    void retranslateUi(QWidget *BroadCast)
    {
        BroadCast->setWindowTitle(QCoreApplication::translate("BroadCast", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BroadCast", "\346\210\220\347\273\251\345\217\221\345\270\203", nullptr));
        label->setText(QCoreApplication::translate("BroadCast", "\346\257\224\350\265\233\345\220\215\347\247\260\357\274\232", nullptr));
        btn_ping->setText(QCoreApplication::translate("BroadCast", "\350\277\236\346\216\245", nullptr));
        btn_pub->setText(QCoreApplication::translate("BroadCast", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BroadCast: public Ui_BroadCast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROADCAST_H
