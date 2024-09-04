/********************************************************************************
** Form generated from reading UI file 'exitgames.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXITGAMES_H
#define UI_EXITGAMES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_ExitGames
{
public:
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *rfidTag_label;
    QLineEdit *rfidTag_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_recognize;
    QPushButton *btn_exitgame;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ExitGames)
    {
        if (ExitGames->objectName().isEmpty())
            ExitGames->setObjectName(QStringLiteral("ExitGames"));
        ExitGames->resize(407, 168);
        groupBox = new QGroupBox(ExitGames);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 391, 151));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 30, 371, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rfidTag_label = new QLabel(verticalLayoutWidget);
        rfidTag_label->setObjectName(QStringLiteral("rfidTag_label"));

        horizontalLayout->addWidget(rfidTag_label);

        rfidTag_lineEdit = new QLineEdit(verticalLayoutWidget);
        rfidTag_lineEdit->setObjectName(QStringLiteral("rfidTag_lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rfidTag_lineEdit->sizePolicy().hasHeightForWidth());
        rfidTag_lineEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(rfidTag_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_recognize = new QPushButton(verticalLayoutWidget);
        btn_recognize->setObjectName(QStringLiteral("btn_recognize"));

        horizontalLayout_2->addWidget(btn_recognize);

        btn_exitgame = new QPushButton(verticalLayoutWidget);
        btn_exitgame->setObjectName(QStringLiteral("btn_exitgame"));

        horizontalLayout_2->addWidget(btn_exitgame);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ExitGames);

        QMetaObject::connectSlotsByName(ExitGames);
    } // setupUi

    void retranslateUi(QWidget *ExitGames)
    {
        ExitGames->setWindowTitle(QApplication::translate("ExitGames", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ExitGames", "\350\277\220\345\212\250\345\221\230\351\200\200\345\207\272\346\257\224\350\265\233", Q_NULLPTR));
        rfidTag_label->setText(QApplication::translate("ExitGames", "\345\215\241\345\217\267\357\274\232", Q_NULLPTR));
        btn_recognize->setText(QApplication::translate("ExitGames", "\350\257\206\345\210\253", Q_NULLPTR));
        btn_exitgame->setText(QApplication::translate("ExitGames", "\351\200\200\350\265\233", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExitGames: public Ui_ExitGames {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXITGAMES_H
