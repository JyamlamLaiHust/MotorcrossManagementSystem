/********************************************************************************
** Form generated from reading UI file 'checkin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKIN_H
#define UI_CHECKIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckIn
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *participantName_label;
    QLineEdit *participantName_lineEdit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *eventName_label;
    QComboBox *eventName_comboBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *gender_label;
    QComboBox *gender_comboBox;
    QLabel *sizeTshirt_label;
    QComboBox *sizeTshirt_comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *idCard_label;
    QLineEdit *idCard_lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *telephone_label;
    QLineEdit *telephone_lineEdit;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *emergencyContactName_label;
    QLineEdit *emergencyContactName_lineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *emergencyContactPhone_label;
    QLineEdit *emergencyContactPhone_lineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *rfidTag_label;
    QLineEdit *rfidTag_lineEdit;
    QPushButton *btn_identify;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btn_register;
    QPushButton *btn_refresh;
    QPushButton *btn_reset;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;

    void setupUi(QWidget *CheckIn)
    {
        if (CheckIn->objectName().isEmpty())
            CheckIn->setObjectName(QString::fromUtf8("CheckIn"));
        CheckIn->resize(500, 350);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CheckIn->sizePolicy().hasHeightForWidth());
        CheckIn->setSizePolicy(sizePolicy);
        verticalLayoutWidget = new QWidget(CheckIn);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 241, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, -1, 5, -1);
        participantName_label = new QLabel(verticalLayoutWidget);
        participantName_label->setObjectName(QString::fromUtf8("participantName_label"));

        horizontalLayout->addWidget(participantName_label);

        participantName_lineEdit = new QLineEdit(verticalLayoutWidget);
        participantName_lineEdit->setObjectName(QString::fromUtf8("participantName_lineEdit"));

        horizontalLayout->addWidget(participantName_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        eventName_label = new QLabel(verticalLayoutWidget);
        eventName_label->setObjectName(QString::fromUtf8("eventName_label"));

        horizontalLayout_9->addWidget(eventName_label);

        eventName_comboBox = new QComboBox(verticalLayoutWidget);
        eventName_comboBox->addItem(QString());
        eventName_comboBox->setObjectName(QString::fromUtf8("eventName_comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(eventName_comboBox->sizePolicy().hasHeightForWidth());
        eventName_comboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(eventName_comboBox);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(5, -1, 5, -1);
        gender_label = new QLabel(verticalLayoutWidget);
        gender_label->setObjectName(QString::fromUtf8("gender_label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gender_label->sizePolicy().hasHeightForWidth());
        gender_label->setSizePolicy(sizePolicy2);

        horizontalLayout_8->addWidget(gender_label);

        gender_comboBox = new QComboBox(verticalLayoutWidget);
        gender_comboBox->addItem(QString());
        gender_comboBox->addItem(QString());
        gender_comboBox->addItem(QString());
        gender_comboBox->setObjectName(QString::fromUtf8("gender_comboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(gender_comboBox->sizePolicy().hasHeightForWidth());
        gender_comboBox->setSizePolicy(sizePolicy3);

        horizontalLayout_8->addWidget(gender_comboBox);

        sizeTshirt_label = new QLabel(verticalLayoutWidget);
        sizeTshirt_label->setObjectName(QString::fromUtf8("sizeTshirt_label"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(sizeTshirt_label->sizePolicy().hasHeightForWidth());
        sizeTshirt_label->setSizePolicy(sizePolicy4);

        horizontalLayout_8->addWidget(sizeTshirt_label);

        sizeTshirt_comboBox = new QComboBox(verticalLayoutWidget);
        sizeTshirt_comboBox->addItem(QString());
        sizeTshirt_comboBox->addItem(QString());
        sizeTshirt_comboBox->addItem(QString());
        sizeTshirt_comboBox->addItem(QString());
        sizeTshirt_comboBox->addItem(QString());
        sizeTshirt_comboBox->addItem(QString());
        sizeTshirt_comboBox->setObjectName(QString::fromUtf8("sizeTshirt_comboBox"));
        sizePolicy3.setHeightForWidth(sizeTshirt_comboBox->sizePolicy().hasHeightForWidth());
        sizeTshirt_comboBox->setSizePolicy(sizePolicy3);

        horizontalLayout_8->addWidget(sizeTshirt_comboBox);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, -1, 5, -1);
        idCard_label = new QLabel(verticalLayoutWidget);
        idCard_label->setObjectName(QString::fromUtf8("idCard_label"));

        horizontalLayout_2->addWidget(idCard_label);

        idCard_lineEdit = new QLineEdit(verticalLayoutWidget);
        idCard_lineEdit->setObjectName(QString::fromUtf8("idCard_lineEdit"));

        horizontalLayout_2->addWidget(idCard_lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, -1, 5, -1);
        telephone_label = new QLabel(verticalLayoutWidget);
        telephone_label->setObjectName(QString::fromUtf8("telephone_label"));

        horizontalLayout_3->addWidget(telephone_label);

        telephone_lineEdit = new QLineEdit(verticalLayoutWidget);
        telephone_lineEdit->setObjectName(QString::fromUtf8("telephone_lineEdit"));

        horizontalLayout_3->addWidget(telephone_lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayoutWidget_3 = new QWidget(CheckIn);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(260, 10, 231, 221));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, -1, 5, -1);
        emergencyContactName_label = new QLabel(verticalLayoutWidget_3);
        emergencyContactName_label->setObjectName(QString::fromUtf8("emergencyContactName_label"));

        horizontalLayout_4->addWidget(emergencyContactName_label);

        emergencyContactName_lineEdit = new QLineEdit(verticalLayoutWidget_3);
        emergencyContactName_lineEdit->setObjectName(QString::fromUtf8("emergencyContactName_lineEdit"));

        horizontalLayout_4->addWidget(emergencyContactName_lineEdit);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(5, -1, 5, -1);
        emergencyContactPhone_label = new QLabel(verticalLayoutWidget_3);
        emergencyContactPhone_label->setObjectName(QString::fromUtf8("emergencyContactPhone_label"));

        horizontalLayout_5->addWidget(emergencyContactPhone_label);

        emergencyContactPhone_lineEdit = new QLineEdit(verticalLayoutWidget_3);
        emergencyContactPhone_lineEdit->setObjectName(QString::fromUtf8("emergencyContactPhone_lineEdit"));

        horizontalLayout_5->addWidget(emergencyContactPhone_lineEdit);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(5, -1, 5, -1);
        rfidTag_label = new QLabel(verticalLayoutWidget_3);
        rfidTag_label->setObjectName(QString::fromUtf8("rfidTag_label"));

        horizontalLayout_6->addWidget(rfidTag_label);

        rfidTag_lineEdit = new QLineEdit(verticalLayoutWidget_3);
        rfidTag_lineEdit->setObjectName(QString::fromUtf8("rfidTag_lineEdit"));

        horizontalLayout_6->addWidget(rfidTag_lineEdit);

        btn_identify = new QPushButton(verticalLayoutWidget_3);
        btn_identify->setObjectName(QString::fromUtf8("btn_identify"));

        horizontalLayout_6->addWidget(btn_identify);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(5, -1, 5, -1);
        btn_register = new QPushButton(verticalLayoutWidget_3);
        btn_register->setObjectName(QString::fromUtf8("btn_register"));

        horizontalLayout_7->addWidget(btn_register);

        btn_refresh = new QPushButton(verticalLayoutWidget_3);
        btn_refresh->setObjectName(QString::fromUtf8("btn_refresh"));

        horizontalLayout_7->addWidget(btn_refresh);

        btn_reset = new QPushButton(verticalLayoutWidget_3);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));

        horizontalLayout_7->addWidget(btn_reset);


        verticalLayout_3->addLayout(horizontalLayout_7);

        verticalLayoutWidget_2 = new QWidget(CheckIn);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 240, 481, 101));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(verticalLayoutWidget_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_2->addWidget(tableView);


        retranslateUi(CheckIn);

        QMetaObject::connectSlotsByName(CheckIn);
    } // setupUi

    void retranslateUi(QWidget *CheckIn)
    {
        CheckIn->setWindowTitle(QCoreApplication::translate("CheckIn", "Form", nullptr));
        participantName_label->setText(QCoreApplication::translate("CheckIn", "\345\247\223\345\220\215\357\274\232", nullptr));
        eventName_label->setText(QCoreApplication::translate("CheckIn", "\345\217\202\350\265\233\345\220\215\347\247\260\357\274\232", nullptr));
        eventName_comboBox->setItemText(0, QString());

        gender_label->setText(QCoreApplication::translate("CheckIn", "\346\200\247\345\210\253\357\274\232", nullptr));
        gender_comboBox->setItemText(0, QString());
        gender_comboBox->setItemText(1, QCoreApplication::translate("CheckIn", "\347\224\267", nullptr));
        gender_comboBox->setItemText(2, QCoreApplication::translate("CheckIn", "\345\245\263", nullptr));

        sizeTshirt_label->setText(QCoreApplication::translate("CheckIn", "T\346\201\244\345\260\272\347\240\201\357\274\232", nullptr));
        sizeTshirt_comboBox->setItemText(0, QString());
        sizeTshirt_comboBox->setItemText(1, QCoreApplication::translate("CheckIn", "XS (145 cm ~ 155 cm)", nullptr));
        sizeTshirt_comboBox->setItemText(2, QCoreApplication::translate("CheckIn", "S (155 cm ~ 165 cm)", nullptr));
        sizeTshirt_comboBox->setItemText(3, QCoreApplication::translate("CheckIn", "M (165 cm ~ 175 cm)", nullptr));
        sizeTshirt_comboBox->setItemText(4, QCoreApplication::translate("CheckIn", "L (175 cm ~ 185 cm)", nullptr));
        sizeTshirt_comboBox->setItemText(5, QCoreApplication::translate("CheckIn", "XL (185 cm ~ 195 cm)", nullptr));

        idCard_label->setText(QCoreApplication::translate("CheckIn", "\350\272\253\344\273\275\350\257\201\357\274\232", nullptr));
        telephone_label->setText(QCoreApplication::translate("CheckIn", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        emergencyContactName_label->setText(QCoreApplication::translate("CheckIn", "\347\264\247\346\200\245\350\201\224\347\263\273\344\272\272\345\247\223\345\220\215\357\274\232", nullptr));
        emergencyContactPhone_label->setText(QCoreApplication::translate("CheckIn", "\347\264\247\346\200\245\350\201\224\347\263\273\344\272\272\346\211\213\346\234\272\357\274\232", nullptr));
        rfidTag_label->setText(QCoreApplication::translate("CheckIn", "\345\215\241\345\217\267\357\274\232", nullptr));
        btn_identify->setText(QCoreApplication::translate("CheckIn", "\350\257\206\345\210\253", nullptr));
        btn_register->setText(QCoreApplication::translate("CheckIn", "\346\263\250\345\206\214", nullptr));
        btn_refresh->setText(QCoreApplication::translate("CheckIn", "\345\210\267\346\226\260", nullptr));
        btn_reset->setText(QCoreApplication::translate("CheckIn", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckIn: public Ui_CheckIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKIN_H
