/********************************************************************************
** Form generated from reading UI file 'exportdatas.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTDATAS_H
#define UI_EXPORTDATAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExportDatas
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_Return;
    QPushButton *btn_export;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ExportDatas)
    {
        if (ExportDatas->objectName().isEmpty())
            ExportDatas->setObjectName(QStringLiteral("ExportDatas"));
        ExportDatas->resize(732, 450);
        horizontalLayoutWidget = new QWidget(ExportDatas);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 711, 171));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        label_2 = new QLabel(ExportDatas);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 190, 901, 31));
        label_2->setFont(font);
        label_2->setTextFormat(Qt::RichText);
        label_2->setIndent(5);
        horizontalLayoutWidget_2 = new QWidget(ExportDatas);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 230, 711, 211));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_Return = new QPushButton(horizontalLayoutWidget_2);
        btn_Return->setObjectName(QStringLiteral("btn_Return"));

        horizontalLayout_2->addWidget(btn_Return);

        btn_export = new QPushButton(horizontalLayoutWidget_2);
        btn_export->setObjectName(QStringLiteral("btn_export"));

        horizontalLayout_2->addWidget(btn_export);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        retranslateUi(ExportDatas);

        QMetaObject::connectSlotsByName(ExportDatas);
    } // setupUi

    void retranslateUi(QWidget *ExportDatas)
    {
        ExportDatas->setWindowTitle(QApplication::translate("ExportDatas", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ExportDatas", "\350\241\250\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("ExportDatas", "\346\217\220\347\244\272\357\274\232\345\257\274\345\207\272\344\270\272CSV\346\240\274\345\274\217\346\226\207\346\234\254\346\226\207\344\273\266\357\274\214\345\217\257\344\273\245\344\275\277\347\224\250excel\347\233\264\346\216\245\346\211\223\345\274\200\343\200\202", Q_NULLPTR));
        btn_Return->setText(QApplication::translate("ExportDatas", "\350\277\224\345\233\236", Q_NULLPTR));
        btn_export->setText(QApplication::translate("ExportDatas", "\345\257\274\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExportDatas: public Ui_ExportDatas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTDATAS_H
