/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_Name;
    QLabel *label_2;
    QLineEdit *lineEdit_Passwd;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_Return;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_Login;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        LoginPage->resize(218, 100);
        LoginPage->setMaximumSize(QSize(300, 100));
        gridLayout_2 = new QGridLayout(LoginPage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(LoginPage);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(10);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_Name = new QLineEdit(LoginPage);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));
        lineEdit_Name->setFont(font);
        lineEdit_Name->setMaxLength(20);

        gridLayout->addWidget(lineEdit_Name, 0, 1, 1, 1);

        label_2 = new QLabel(LoginPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_Passwd = new QLineEdit(LoginPage);
        lineEdit_Passwd->setObjectName(QString::fromUtf8("lineEdit_Passwd"));
        lineEdit_Passwd->setFont(font);
        lineEdit_Passwd->setMaxLength(20);
        lineEdit_Passwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_Passwd, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_Return = new QPushButton(LoginPage);
        btn_Return->setObjectName(QString::fromUtf8("btn_Return"));
        btn_Return->setFont(font);

        horizontalLayout->addWidget(btn_Return);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_Login = new QPushButton(LoginPage);
        btn_Login->setObjectName(QString::fromUtf8("btn_Login"));
        btn_Login->setFont(font);

        horizontalLayout->addWidget(btn_Login);

        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QDialog *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LoginPage", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("LoginPage", "\345\257\206\347\240\201\357\274\232", nullptr));
        btn_Return->setText(QCoreApplication::translate("LoginPage", "\350\277\224\345\233\236", nullptr));
        btn_Login->setText(QCoreApplication::translate("LoginPage", "\347\231\273\351\231\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
