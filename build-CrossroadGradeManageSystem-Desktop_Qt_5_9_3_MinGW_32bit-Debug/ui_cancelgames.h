/********************************************************************************
** Form generated from reading UI file 'cancelgames.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANCELGAMES_H
#define UI_CANCELGAMES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CancelGames
{
public:
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *eventName_comboBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *CancelGames)
    {
        if (CancelGames->objectName().isEmpty())
            CancelGames->setObjectName(QStringLiteral("CancelGames"));
        CancelGames->resize(363, 197);
        groupBox = new QGroupBox(CancelGames);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 341, 181));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 20, 341, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        eventName_comboBox = new QComboBox(verticalLayoutWidget);
        eventName_comboBox->setObjectName(QStringLiteral("eventName_comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(eventName_comboBox->sizePolicy().hasHeightForWidth());
        eventName_comboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(eventName_comboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(CancelGames);

        QMetaObject::connectSlotsByName(CancelGames);
    } // setupUi

    void retranslateUi(QWidget *CancelGames)
    {
        CancelGames->setWindowTitle(QApplication::translate("CancelGames", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CancelGames", "\345\217\226\346\266\210\346\257\224\350\265\233", Q_NULLPTR));
        label->setText(QApplication::translate("CancelGames", "\346\257\224\350\265\233\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CancelGames", "\345\217\226\346\266\210\346\257\224\350\265\233", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CancelGames: public Ui_CancelGames {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANCELGAMES_H
