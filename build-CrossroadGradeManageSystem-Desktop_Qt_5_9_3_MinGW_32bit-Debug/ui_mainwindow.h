/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *widget;
    QWidget *widget_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(750, 600);
        action_login = new QAction(MainWindow);
        action_login->setObjectName(QStringLiteral("action_login"));
        action_connect = new QAction(MainWindow);
        action_connect->setObjectName(QStringLiteral("action_connect"));
        action_disconnect = new QAction(MainWindow);
        action_disconnect->setObjectName(QStringLiteral("action_disconnect"));
        action_export = new QAction(MainWindow);
        action_export->setObjectName(QStringLiteral("action_export"));
        action_index = new QAction(MainWindow);
        action_index->setObjectName(QStringLiteral("action_index"));
        action_exit = new QAction(MainWindow);
        action_exit->setObjectName(QStringLiteral("action_exit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 601, 411));
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(true);
        stackedWidget->addWidget(widget);
        widget_2 = new QWidget();
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setEnabled(true);
        stackedWidget->addWidget(widget_2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 750, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
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

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_login->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_login->setToolTip(QApplication::translate("MainWindow", "login", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_connect->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_connect->setToolTip(QApplication::translate("MainWindow", "connect", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_disconnect->setText(QApplication::translate("MainWindow", "\346\226\255\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_disconnect->setToolTip(QApplication::translate("MainWindow", "disconnect", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_export->setText(QApplication::translate("MainWindow", "\345\257\274\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_export->setToolTip(QApplication::translate("MainWindow", "export", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_index->setText(QApplication::translate("MainWindow", "\344\270\273\351\241\265", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_index->setToolTip(QApplication::translate("MainWindow", "index", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_exit->setToolTip(QApplication::translate("MainWindow", "exit", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        menu->setTitle(QApplication::translate("MainWindow", "\347\263\273\347\273\237\347\256\241\347\220\206", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\350\277\220\345\212\250\345\221\230\347\256\241\347\220\206", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "\350\265\233\344\272\213\347\256\241\347\220\206", Q_NULLPTR));
        menu_4->setTitle(QApplication::translate("MainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        menu_5->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
