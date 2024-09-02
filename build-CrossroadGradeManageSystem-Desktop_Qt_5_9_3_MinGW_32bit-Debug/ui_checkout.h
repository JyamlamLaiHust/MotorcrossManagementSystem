/********************************************************************************
** Form generated from reading UI file 'checkout.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKOUT_H
#define UI_CHECKOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckOut
{
public:

    void setupUi(QWidget *CheckOut)
    {
        if (CheckOut->objectName().isEmpty())
            CheckOut->setObjectName(QStringLiteral("CheckOut"));
        CheckOut->resize(400, 300);

        retranslateUi(CheckOut);

        QMetaObject::connectSlotsByName(CheckOut);
    } // setupUi

    void retranslateUi(QWidget *CheckOut)
    {
        CheckOut->setWindowTitle(QApplication::translate("CheckOut", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CheckOut: public Ui_CheckOut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKOUT_H
