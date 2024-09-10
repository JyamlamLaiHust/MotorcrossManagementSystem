/********************************************************************************
** Form generated from reading UI file 'exitgames.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXITGAMES_H
#define UI_EXITGAMES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_ExitGames
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *rfidTags_label;
    QLineEdit *rfidTags_lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *eventName_label;
    QComboBox *eventName_comboBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_recognize;
    QPushButton *btn_exitgame;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ExitGames)
    {
        if (ExitGames->objectName().isEmpty())
            ExitGames->setObjectName(QString::fromUtf8("ExitGames"));
        ExitGames->resize(325, 172);
        gridLayout = new QGridLayout(ExitGames);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(ExitGames);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, -1, 5, -1);
        rfidTags_label = new QLabel(groupBox);
        rfidTags_label->setObjectName(QString::fromUtf8("rfidTags_label"));

        horizontalLayout->addWidget(rfidTags_label);

        rfidTags_lineEdit = new QLineEdit(groupBox);
        rfidTags_lineEdit->setObjectName(QString::fromUtf8("rfidTags_lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rfidTags_lineEdit->sizePolicy().hasHeightForWidth());
        rfidTags_lineEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(rfidTags_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        eventName_label = new QLabel(groupBox);
        eventName_label->setObjectName(QString::fromUtf8("eventName_label"));

        horizontalLayout_3->addWidget(eventName_label);

        eventName_comboBox = new QComboBox(groupBox);
        eventName_comboBox->addItem(QString());
        eventName_comboBox->setObjectName(QString::fromUtf8("eventName_comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(eventName_comboBox->sizePolicy().hasHeightForWidth());
        eventName_comboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(eventName_comboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, -1, 5, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_recognize = new QPushButton(groupBox);
        btn_recognize->setObjectName(QString::fromUtf8("btn_recognize"));

        horizontalLayout_2->addWidget(btn_recognize);

        btn_exitgame = new QPushButton(groupBox);
        btn_exitgame->setObjectName(QString::fromUtf8("btn_exitgame"));

        horizontalLayout_2->addWidget(btn_exitgame);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(ExitGames);

        QMetaObject::connectSlotsByName(ExitGames);
    } // setupUi

    void retranslateUi(QWidget *ExitGames)
    {
        ExitGames->setWindowTitle(QCoreApplication::translate("ExitGames", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ExitGames", "\350\277\220\345\212\250\345\221\230\351\200\200\345\207\272\346\257\224\350\265\233", nullptr));
        rfidTags_label->setText(QCoreApplication::translate("ExitGames", "\345\215\241\345\217\267\357\274\232", nullptr));
        eventName_label->setText(QCoreApplication::translate("ExitGames", "\346\257\224\350\265\233\345\220\215\347\247\260\357\274\232", nullptr));
        eventName_comboBox->setItemText(0, QString());

        btn_recognize->setText(QCoreApplication::translate("ExitGames", "\350\257\206\345\210\253", nullptr));
        btn_exitgame->setText(QCoreApplication::translate("ExitGames", "\351\200\200\350\265\233", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExitGames: public Ui_ExitGames {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXITGAMES_H
