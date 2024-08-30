/********************************************************************************
** Form generated from reading UI file 'checkin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKIN_H
#define UI_CHECKIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckIn
{
public:
    QGroupBox *groupBox;
    QFrame *frame;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *participantName_label;
    QLineEdit *participantName_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *sex_label;
    QComboBox *sex_comboBox;
    QLabel *sizeTshirt_label;
    QComboBox *sizeTshirt_comboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *idCard_label;
    QLineEdit *idCard_lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *telephone_label;
    QLineEdit *telephone_lineEdit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *emergencyContactName_label;
    QLineEdit *emergencyContactName_lineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *emergencyContactPhone_label;
    QLineEdit *emergencyContactPhone_lineEdit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *rfidTag_label;
    QLineEdit *rfidTag_lineEdit;
    QPushButton *btn_identify;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_register;
    QPushButton *btn_refresh;
    QPushButton *btn_reset;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView;

    void setupUi(QWidget *CheckIn)
    {
        if (CheckIn->objectName().isEmpty())
            CheckIn->setObjectName(QStringLiteral("CheckIn"));
        CheckIn->resize(750, 600);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CheckIn->sizePolicy().hasHeightForWidth());
        CheckIn->setSizePolicy(sizePolicy);
        groupBox = new QGroupBox(CheckIn);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 731, 371));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        frame = new QFrame(groupBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 30, 711, 331));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 361, 311));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 20, 361, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        participantName_label = new QLabel(verticalLayoutWidget);
        participantName_label->setObjectName(QStringLiteral("participantName_label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(participantName_label->sizePolicy().hasHeightForWidth());
        participantName_label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(participantName_label);

        participantName_lineEdit = new QLineEdit(verticalLayoutWidget);
        participantName_lineEdit->setObjectName(QStringLiteral("participantName_lineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(5);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(participantName_lineEdit->sizePolicy().hasHeightForWidth());
        participantName_lineEdit->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(participantName_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sex_label = new QLabel(verticalLayoutWidget);
        sex_label->setObjectName(QStringLiteral("sex_label"));
        sizePolicy1.setHeightForWidth(sex_label->sizePolicy().hasHeightForWidth());
        sex_label->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(sex_label);

        sex_comboBox = new QComboBox(verticalLayoutWidget);
        sex_comboBox->setObjectName(QStringLiteral("sex_comboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sex_comboBox->sizePolicy().hasHeightForWidth());
        sex_comboBox->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(sex_comboBox);

        sizeTshirt_label = new QLabel(verticalLayoutWidget);
        sizeTshirt_label->setObjectName(QStringLiteral("sizeTshirt_label"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(2);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(sizeTshirt_label->sizePolicy().hasHeightForWidth());
        sizeTshirt_label->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(sizeTshirt_label);

        sizeTshirt_comboBox = new QComboBox(verticalLayoutWidget);
        sizeTshirt_comboBox->setObjectName(QStringLiteral("sizeTshirt_comboBox"));
        sizePolicy3.setHeightForWidth(sizeTshirt_comboBox->sizePolicy().hasHeightForWidth());
        sizeTshirt_comboBox->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(sizeTshirt_comboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        idCard_label = new QLabel(verticalLayoutWidget);
        idCard_label->setObjectName(QStringLiteral("idCard_label"));
        sizePolicy1.setHeightForWidth(idCard_label->sizePolicy().hasHeightForWidth());
        idCard_label->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(idCard_label);

        idCard_lineEdit = new QLineEdit(verticalLayoutWidget);
        idCard_lineEdit->setObjectName(QStringLiteral("idCard_lineEdit"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(5);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(idCard_lineEdit->sizePolicy().hasHeightForWidth());
        idCard_lineEdit->setSizePolicy(sizePolicy5);

        horizontalLayout_3->addWidget(idCard_lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        telephone_label = new QLabel(verticalLayoutWidget);
        telephone_label->setObjectName(QStringLiteral("telephone_label"));
        sizePolicy1.setHeightForWidth(telephone_label->sizePolicy().hasHeightForWidth());
        telephone_label->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(telephone_label);

        telephone_lineEdit = new QLineEdit(verticalLayoutWidget);
        telephone_lineEdit->setObjectName(QStringLiteral("telephone_lineEdit"));
        sizePolicy5.setHeightForWidth(telephone_lineEdit->sizePolicy().hasHeightForWidth());
        telephone_lineEdit->setSizePolicy(sizePolicy5);

        horizontalLayout_4->addWidget(telephone_lineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalLayoutWidget_2 = new QWidget(frame);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(380, 10, 321, 311));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        emergencyContactName_label = new QLabel(verticalLayoutWidget_2);
        emergencyContactName_label->setObjectName(QStringLiteral("emergencyContactName_label"));

        horizontalLayout_6->addWidget(emergencyContactName_label);

        emergencyContactName_lineEdit = new QLineEdit(verticalLayoutWidget_2);
        emergencyContactName_lineEdit->setObjectName(QStringLiteral("emergencyContactName_lineEdit"));

        horizontalLayout_6->addWidget(emergencyContactName_lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        emergencyContactPhone_label = new QLabel(verticalLayoutWidget_2);
        emergencyContactPhone_label->setObjectName(QStringLiteral("emergencyContactPhone_label"));

        horizontalLayout_7->addWidget(emergencyContactPhone_label);

        emergencyContactPhone_lineEdit = new QLineEdit(verticalLayoutWidget_2);
        emergencyContactPhone_lineEdit->setObjectName(QStringLiteral("emergencyContactPhone_lineEdit"));

        horizontalLayout_7->addWidget(emergencyContactPhone_lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        rfidTag_label = new QLabel(verticalLayoutWidget_2);
        rfidTag_label->setObjectName(QStringLiteral("rfidTag_label"));

        horizontalLayout_9->addWidget(rfidTag_label);

        rfidTag_lineEdit = new QLineEdit(verticalLayoutWidget_2);
        rfidTag_lineEdit->setObjectName(QStringLiteral("rfidTag_lineEdit"));

        horizontalLayout_9->addWidget(rfidTag_lineEdit);

        btn_identify = new QPushButton(verticalLayoutWidget_2);
        btn_identify->setObjectName(QStringLiteral("btn_identify"));

        horizontalLayout_9->addWidget(btn_identify);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        btn_register = new QPushButton(verticalLayoutWidget_2);
        btn_register->setObjectName(QStringLiteral("btn_register"));

        horizontalLayout_11->addWidget(btn_register);

        btn_refresh = new QPushButton(verticalLayoutWidget_2);
        btn_refresh->setObjectName(QStringLiteral("btn_refresh"));

        horizontalLayout_11->addWidget(btn_refresh);

        btn_reset = new QPushButton(verticalLayoutWidget_2);
        btn_reset->setObjectName(QStringLiteral("btn_reset"));

        horizontalLayout_11->addWidget(btn_reset);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_11);

        tableView = new QTableView(CheckIn);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 380, 731, 211));

        retranslateUi(CheckIn);

        QMetaObject::connectSlotsByName(CheckIn);
    } // setupUi

    void retranslateUi(QWidget *CheckIn)
    {
        CheckIn->setWindowTitle(QApplication::translate("CheckIn", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CheckIn", "\350\277\220\345\212\250\345\221\230\346\263\250\345\206\214", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("CheckIn", "\344\270\252\344\272\272\344\277\241\346\201\257\345\275\225\345\205\245", Q_NULLPTR));
        participantName_label->setText(QApplication::translate("CheckIn", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        sex_label->setText(QApplication::translate("CheckIn", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        sex_comboBox->clear();
        sex_comboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("CheckIn", "\347\224\267", Q_NULLPTR)
         << QApplication::translate("CheckIn", "\345\245\263", Q_NULLPTR)
        );
        sizeTshirt_label->setText(QApplication::translate("CheckIn", "T\346\201\244\345\260\272\347\240\201\357\274\232", Q_NULLPTR));
        sizeTshirt_comboBox->clear();
        sizeTshirt_comboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("CheckIn", "XS\357\274\210145 - 155 cm\357\274\211", Q_NULLPTR)
         << QApplication::translate("CheckIn", "S \357\274\210155 - 165 cm\357\274\211", Q_NULLPTR)
         << QApplication::translate("CheckIn", "M \357\274\210165 - 175 cm\357\274\211", Q_NULLPTR)
         << QApplication::translate("CheckIn", "L \357\274\210175 - 185 cm\357\274\211", Q_NULLPTR)
         << QApplication::translate("CheckIn", "XL\357\274\210185 - 195 cm\357\274\211", Q_NULLPTR)
         << QApplication::translate("CheckIn", "XXL \357\274\210195 - 205 cm\357\274\211", Q_NULLPTR)
        );
        idCard_label->setText(QApplication::translate("CheckIn", "\350\272\253\344\273\275\350\257\201\357\274\232", Q_NULLPTR));
        telephone_label->setText(QApplication::translate("CheckIn", "\346\211\213\346\234\272\345\217\267\357\274\232", Q_NULLPTR));
        emergencyContactName_label->setText(QApplication::translate("CheckIn", "\347\264\247\346\200\245\350\201\224\347\263\273\344\272\272\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        emergencyContactPhone_label->setText(QApplication::translate("CheckIn", "\347\264\247\346\200\245\350\201\224\347\263\273\344\272\272\346\211\213\346\234\272\357\274\232", Q_NULLPTR));
        rfidTag_label->setText(QApplication::translate("CheckIn", "\345\215\241\345\217\267\357\274\232", Q_NULLPTR));
        btn_identify->setText(QApplication::translate("CheckIn", "\350\257\206\345\210\253", Q_NULLPTR));
        btn_register->setText(QApplication::translate("CheckIn", "\346\263\250\345\206\214", Q_NULLPTR));
        btn_refresh->setText(QApplication::translate("CheckIn", "\345\210\267\346\226\260\346\263\250\345\206\214\350\241\250", Q_NULLPTR));
        btn_reset->setText(QApplication::translate("CheckIn", "\351\207\215\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CheckIn: public Ui_CheckIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKIN_H
