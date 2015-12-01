/********************************************************************************
** Form generated from reading UI file 'gameover.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVER_H
#define UI_GAMEOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameOver
{
public:
    QLabel *title;
    QLabel *scoreLabel;
    QLabel *score;
    QPushButton *retry;
    QPushButton *quit;
    QLabel *userName;
    QLabel *userNameLabel;

    void setupUi(QDialog *GameOver)
    {
        if (GameOver->objectName().isEmpty())
            GameOver->setObjectName(QStringLiteral("GameOver"));
        GameOver->resize(264, 184);
        GameOver->setMinimumSize(QSize(264, 184));
        GameOver->setMaximumSize(QSize(264, 184));
        title = new QLabel(GameOver);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(80, 20, 101, 16));
        QFont font;
        font.setPointSize(20);
        title->setFont(font);
        scoreLabel = new QLabel(GameOver);
        scoreLabel->setObjectName(QStringLiteral("scoreLabel"));
        scoreLabel->setGeometry(QRect(40, 90, 59, 16));
        QFont font1;
        font1.setPointSize(17);
        scoreLabel->setFont(font1);
        score = new QLabel(GameOver);
        score->setObjectName(QStringLiteral("score"));
        score->setGeometry(QRect(180, 90, 59, 16));
        score->setFont(font1);
        retry = new QPushButton(GameOver);
        retry->setObjectName(QStringLiteral("retry"));
        retry->setGeometry(QRect(10, 130, 115, 32));
        quit = new QPushButton(GameOver);
        quit->setObjectName(QStringLiteral("quit"));
        quit->setGeometry(QRect(140, 130, 115, 32));
        userName = new QLabel(GameOver);
        userName->setObjectName(QStringLiteral("userName"));
        userName->setGeometry(QRect(180, 60, 59, 16));
        userName->setFont(font1);
        userNameLabel = new QLabel(GameOver);
        userNameLabel->setObjectName(QStringLiteral("userNameLabel"));
        userNameLabel->setGeometry(QRect(40, 60, 59, 16));
        userNameLabel->setFont(font1);

        retranslateUi(GameOver);

        QMetaObject::connectSlotsByName(GameOver);
    } // setupUi

    void retranslateUi(QDialog *GameOver)
    {
        GameOver->setWindowTitle(QApplication::translate("GameOver", "Dialog", 0));
        title->setText(QApplication::translate("GameOver", "Game Over", 0));
        scoreLabel->setText(QApplication::translate("GameOver", "Score: ", 0));
        score->setText(QApplication::translate("GameOver", "000", 0));
        retry->setText(QApplication::translate("GameOver", "Replay", 0));
        quit->setText(QApplication::translate("GameOver", "Quit", 0));
        userName->setText(QApplication::translate("GameOver", "Player 1", 0));
        userNameLabel->setText(QApplication::translate("GameOver", "Player: ", 0));
    } // retranslateUi

};

namespace Ui {
    class GameOver: public Ui_GameOver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
