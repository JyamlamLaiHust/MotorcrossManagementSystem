/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_login;
    QAction *action_connect;
    QAction *action_disconnect;
    QAction *action_export;
    QAction *action_index;
    QAction *action_exit;
    QAction *action_checkIn;
    QAction *action_checkOut;
    QAction *action_holdCompetition;
    QAction *action_cancelCompetition;
    QAction *action_competition;
    QAction *action_participants_one;
    QAction *action_about;
    QAction *action_result;
    QAction *action_participants_two;
    QAction *action_broadcast;
    QAction *action_signup;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu_6;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 400);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        action_login = new QAction(MainWindow);
        action_login->setObjectName(QString::fromUtf8("action_login"));
        action_connect = new QAction(MainWindow);
        action_connect->setObjectName(QString::fromUtf8("action_connect"));
        action_disconnect = new QAction(MainWindow);
        action_disconnect->setObjectName(QString::fromUtf8("action_disconnect"));
        action_export = new QAction(MainWindow);
        action_export->setObjectName(QString::fromUtf8("action_export"));
        action_index = new QAction(MainWindow);
        action_index->setObjectName(QString::fromUtf8("action_index"));
        action_exit = new QAction(MainWindow);
        action_exit->setObjectName(QString::fromUtf8("action_exit"));
        action_checkIn = new QAction(MainWindow);
        action_checkIn->setObjectName(QString::fromUtf8("action_checkIn"));
        action_checkOut = new QAction(MainWindow);
        action_checkOut->setObjectName(QString::fromUtf8("action_checkOut"));
        action_holdCompetition = new QAction(MainWindow);
        action_holdCompetition->setObjectName(QString::fromUtf8("action_holdCompetition"));
        action_cancelCompetition = new QAction(MainWindow);
        action_cancelCompetition->setObjectName(QString::fromUtf8("action_cancelCompetition"));
        action_competition = new QAction(MainWindow);
        action_competition->setObjectName(QString::fromUtf8("action_competition"));
        action_participants_one = new QAction(MainWindow);
        action_participants_one->setObjectName(QString::fromUtf8("action_participants_one"));
        action_about = new QAction(MainWindow);
        action_about->setObjectName(QString::fromUtf8("action_about"));
        action_result = new QAction(MainWindow);
        action_result->setObjectName(QString::fromUtf8("action_result"));
        action_participants_two = new QAction(MainWindow);
        action_participants_two->setObjectName(QString::fromUtf8("action_participants_two"));
        action_participants_two->setEnabled(false);
        action_broadcast = new QAction(MainWindow);
        action_broadcast->setObjectName(QString::fromUtf8("action_broadcast"));
        action_signup = new QAction(MainWindow);
        action_signup->setObjectName(QString::fromUtf8("action_signup"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 601, 411));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        menu_6 = new QMenu(menuBar);
        menu_6->setObjectName(QString::fromUtf8("menu_6"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_6->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menu->addAction(action_login);
        menu->addSeparator();
        menu->addAction(action_connect);
        menu->addAction(action_disconnect);
        menu->addAction(action_export);
        menu->addSeparator();
        menu->addAction(action_index);
        menu->addAction(action_exit);
        menu_2->addAction(action_checkIn);
        menu_2->addAction(action_checkOut);
        menu_3->addAction(action_holdCompetition);
        menu_3->addAction(action_cancelCompetition);
        menu_4->addAction(action_participants_one);
        menu_4->addAction(action_participants_two);
        menu_4->addSeparator();
        menu_4->addAction(action_competition);
        menu_4->addAction(action_result);
        menu_5->addAction(action_about);
        menu_6->addAction(action_signup);
        menu_6->addAction(action_broadcast);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_login->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        action_login->setToolTip(QCoreApplication::translate("MainWindow", "login", nullptr));
#endif // QT_CONFIG(tooltip)
        action_connect->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
#if QT_CONFIG(tooltip)
        action_connect->setToolTip(QCoreApplication::translate("MainWindow", "connect", nullptr));
#endif // QT_CONFIG(tooltip)
        action_disconnect->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_disconnect->setToolTip(QCoreApplication::translate("MainWindow", "disconnect", nullptr));
#endif // QT_CONFIG(tooltip)
        action_export->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_export->setToolTip(QCoreApplication::translate("MainWindow", "export", nullptr));
#endif // QT_CONFIG(tooltip)
        action_index->setText(QCoreApplication::translate("MainWindow", "\344\270\273\351\241\265", nullptr));
#if QT_CONFIG(tooltip)
        action_index->setToolTip(QCoreApplication::translate("MainWindow", "index", nullptr));
#endif // QT_CONFIG(tooltip)
        action_exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_exit->setToolTip(QCoreApplication::translate("MainWindow", "exit", nullptr));
#endif // QT_CONFIG(tooltip)
        action_checkIn->setText(QCoreApplication::translate("MainWindow", "\346\212\245\345\220\215\345\217\202\350\265\233", nullptr));
        action_checkOut->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\346\257\224\350\265\233", nullptr));
        action_holdCompetition->setText(QCoreApplication::translate("MainWindow", "\344\270\276\345\212\236\346\257\224\350\265\233", nullptr));
        action_cancelCompetition->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210\346\257\224\350\265\233", nullptr));
        action_competition->setText(QCoreApplication::translate("MainWindow", "\346\257\224\350\265\233\346\237\245\350\257\242_\346\257\224\350\265\233\345\220\215\347\247\260", nullptr));
        action_participants_one->setText(QCoreApplication::translate("MainWindow", "\350\277\220\345\212\250\345\221\230\346\237\245\350\257\242", nullptr));
        action_about->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        action_result->setText(QCoreApplication::translate("MainWindow", "\346\257\224\350\265\233\346\237\245\350\257\242_\346\257\224\350\265\233\346\227\266\351\227\264", nullptr));
        action_participants_two->setText(QCoreApplication::translate("MainWindow", "\350\277\220\345\212\250\345\221\230\346\237\245\350\257\242_\346\200\247\345\210\253", nullptr));
        action_broadcast->setText(QCoreApplication::translate("MainWindow", "\346\210\220\347\273\251\345\217\221\351\200\201", nullptr));
        action_signup->setText(QCoreApplication::translate("MainWindow", "\346\210\220\347\273\251\346\211\223\345\215\241", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237\347\256\241\347\220\206", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\350\277\220\345\212\250\345\221\230\347\256\241\347\220\206", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\350\265\233\344\272\213\347\256\241\347\220\206", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        menu_5->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        menu_6->setTitle(QCoreApplication::translate("MainWindow", "\346\210\220\347\273\251\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
