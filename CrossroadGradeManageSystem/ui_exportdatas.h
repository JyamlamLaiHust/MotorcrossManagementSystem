/********************************************************************************
** Form generated from reading UI file 'exportdatas.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTDATAS_H
#define UI_EXPORTDATAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExportDatas
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_Return;
    QPushButton *btn_export;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ExportDatas)
    {
        if (ExportDatas->objectName().isEmpty())
            ExportDatas->setObjectName(QString::fromUtf8("ExportDatas"));
        ExportDatas->resize(500, 350);
        gridLayout = new QGridLayout(ExportDatas);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ExportDatas);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(ExportDatas);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        label_2 = new QLabel(ExportDatas);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setTextFormat(Qt::RichText);
        label_2->setIndent(5);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_Return = new QPushButton(ExportDatas);
        btn_Return->setObjectName(QString::fromUtf8("btn_Return"));

        horizontalLayout_2->addWidget(btn_Return);

        btn_export = new QPushButton(ExportDatas);
        btn_export->setObjectName(QString::fromUtf8("btn_export"));

        horizontalLayout_2->addWidget(btn_export);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(ExportDatas);

        QMetaObject::connectSlotsByName(ExportDatas);
    } // setupUi

    void retranslateUi(QWidget *ExportDatas)
    {
        ExportDatas->setWindowTitle(QCoreApplication::translate("ExportDatas", "Form", nullptr));
        label->setText(QCoreApplication::translate("ExportDatas", "\350\241\250\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("ExportDatas", "\346\217\220\347\244\272\357\274\232\345\257\274\345\207\272\344\270\272CSV\346\240\274\345\274\217\346\226\207\346\234\254\346\226\207\344\273\266\357\274\214\345\217\257\344\273\245\344\275\277\347\224\250excel\347\233\264\346\216\245\346\211\223\345\274\200\343\200\202", nullptr));
        btn_Return->setText(QCoreApplication::translate("ExportDatas", "\350\277\224\345\233\236", nullptr));
        btn_export->setText(QCoreApplication::translate("ExportDatas", "\345\257\274\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportDatas: public Ui_ExportDatas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTDATAS_H
