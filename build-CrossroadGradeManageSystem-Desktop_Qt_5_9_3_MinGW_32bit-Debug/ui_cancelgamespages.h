/********************************************************************************
** Form generated from reading UI file 'cancelgamespages.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANCELGAMESPAGES_H
#define UI_CANCELGAMESPAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CancelGamesPages
{
public:

    void setupUi(QWidget *CancelGamesPages)
    {
        if (CancelGamesPages->objectName().isEmpty())
            CancelGamesPages->setObjectName(QStringLiteral("CancelGamesPages"));
        CancelGamesPages->resize(400, 300);

        retranslateUi(CancelGamesPages);

        QMetaObject::connectSlotsByName(CancelGamesPages);
    } // setupUi

    void retranslateUi(QWidget *CancelGamesPages)
    {
        CancelGamesPages->setWindowTitle(QApplication::translate("CancelGamesPages", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CancelGamesPages: public Ui_CancelGamesPages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANCELGAMESPAGES_H
