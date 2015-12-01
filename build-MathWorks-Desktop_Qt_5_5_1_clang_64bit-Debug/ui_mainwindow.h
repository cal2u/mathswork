/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QWidget *centralWidget;
    QLabel *mathsWork;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *loggedInAs;
    QLabel *name;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *playGame;
    QPushButton *tutorial;
    QPushButton *leaderBoard;
    QPushButton *settings;
    QPushButton *logInOut;
    QMenuBar *menuBar;
    QMenu *menuMain_Menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(604, 463);
        centralWidget = new QWidget(MainMenu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mathsWork = new QLabel(centralWidget);
        mathsWork->setObjectName(QStringLiteral("mathsWork"));
        mathsWork->setGeometry(QRect(230, 60, 151, 41));
        QFont font;
        font.setPointSize(30);
        mathsWork->setFont(font);
        mathsWork->setAlignment(Qt::AlignCenter);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(230, 130, 148, 18));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        loggedInAs = new QLabel(widget);
        loggedInAs->setObjectName(QStringLiteral("loggedInAs"));
        loggedInAs->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(loggedInAs);

        name = new QLabel(widget);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout->addWidget(name);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(241, 170, 126, 168));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        playGame = new QPushButton(widget1);
        playGame->setObjectName(QStringLiteral("playGame"));

        verticalLayout->addWidget(playGame);

        tutorial = new QPushButton(widget1);
        tutorial->setObjectName(QStringLiteral("tutorial"));

        verticalLayout->addWidget(tutorial);

        leaderBoard = new QPushButton(widget1);
        leaderBoard->setObjectName(QStringLiteral("leaderBoard"));

        verticalLayout->addWidget(leaderBoard);

        settings = new QPushButton(widget1);
        settings->setObjectName(QStringLiteral("settings"));

        verticalLayout->addWidget(settings);

        logInOut = new QPushButton(widget1);
        logInOut->setObjectName(QStringLiteral("logInOut"));

        verticalLayout->addWidget(logInOut);

        MainMenu->setCentralWidget(centralWidget);
        playGame->raise();
        tutorial->raise();
        leaderBoard->raise();
        settings->raise();
        mathsWork->raise();
        playGame->raise();
        loggedInAs->raise();
        name->raise();
        menuBar = new QMenuBar(MainMenu);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 604, 22));
        menuMain_Menu = new QMenu(menuBar);
        menuMain_Menu->setObjectName(QStringLiteral("menuMain_Menu"));
        MainMenu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainMenu);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainMenu->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainMenu);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainMenu->setStatusBar(statusBar);

        menuBar->addAction(menuMain_Menu->menuAction());

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "MainWindow", 0));
        mathsWork->setText(QApplication::translate("MainMenu", "MathsWork", 0));
        loggedInAs->setText(QApplication::translate("MainMenu", "Logged in as: ", 0));
        name->setText(QApplication::translate("MainMenu", "Player 1", 0));
        playGame->setText(QApplication::translate("MainMenu", "Play Game", 0));
        tutorial->setText(QApplication::translate("MainMenu", "Tutorial", 0));
        leaderBoard->setText(QApplication::translate("MainMenu", "Leader Board", 0));
        settings->setText(QApplication::translate("MainMenu", "Settings", 0));
        logInOut->setText(QApplication::translate("MainMenu", "Log In/Out", 0));
        menuMain_Menu->setTitle(QApplication::translate("MainMenu", "Main Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
