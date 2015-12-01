/********************************************************************************
** Form generated from reading UI file 'leaderboard.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEADERBOARD_H
#define UI_LEADERBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LeaderBoard
{
public:
    QLabel *titel;
    QLabel *one;
    QLabel *topNameOne;
    QLabel *topScoreOne;
    QLabel *topNameTwo;
    QLabel *topScoreTwo;
    QLabel *two;
    QLabel *topNameThree;
    QLabel *topScoreThree;
    QLabel *three;
    QLabel *topNameFive;
    QLabel *topNameFour;
    QLabel *six;
    QLabel *topScoreSix;
    QLabel *topScoreFour;
    QLabel *topScoreFFive;
    QLabel *topNameSix;
    QLabel *five;
    QLabel *four;
    QLabel *topNameEight;
    QLabel *topNameSeven;
    QLabel *nine;
    QLabel *topScoreNine;
    QLabel *topScoreSeven;
    QLabel *topScoreEight;
    QLabel *topNameNine;
    QLabel *eight;
    QLabel *seven;
    QLabel *topScoreTen;
    QLabel *topNameTen;
    QLabel *ten;
    QPushButton *pushButton;

    void setupUi(QDialog *LeaderBoard)
    {
        if (LeaderBoard->objectName().isEmpty())
            LeaderBoard->setObjectName(QStringLiteral("LeaderBoard"));
        LeaderBoard->resize(371, 405);
        LeaderBoard->setMinimumSize(QSize(371, 405));
        LeaderBoard->setMaximumSize(QSize(371, 405));
        titel = new QLabel(LeaderBoard);
        titel->setObjectName(QStringLiteral("titel"));
        titel->setGeometry(QRect(120, 10, 121, 16));
        QFont font;
        font.setPointSize(20);
        titel->setFont(font);
        one = new QLabel(LeaderBoard);
        one->setObjectName(QStringLiteral("one"));
        one->setGeometry(QRect(30, 60, 16, 16));
        QFont font1;
        font1.setPointSize(14);
        one->setFont(font1);
        topNameOne = new QLabel(LeaderBoard);
        topNameOne->setObjectName(QStringLiteral("topNameOne"));
        topNameOne->setGeometry(QRect(50, 60, 59, 16));
        topScoreOne = new QLabel(LeaderBoard);
        topScoreOne->setObjectName(QStringLiteral("topScoreOne"));
        topScoreOne->setGeometry(QRect(270, 60, 81, 16));
        topNameTwo = new QLabel(LeaderBoard);
        topNameTwo->setObjectName(QStringLiteral("topNameTwo"));
        topNameTwo->setGeometry(QRect(50, 90, 59, 16));
        topScoreTwo = new QLabel(LeaderBoard);
        topScoreTwo->setObjectName(QStringLiteral("topScoreTwo"));
        topScoreTwo->setGeometry(QRect(270, 90, 81, 16));
        two = new QLabel(LeaderBoard);
        two->setObjectName(QStringLiteral("two"));
        two->setGeometry(QRect(30, 90, 16, 16));
        two->setFont(font1);
        topNameThree = new QLabel(LeaderBoard);
        topNameThree->setObjectName(QStringLiteral("topNameThree"));
        topNameThree->setGeometry(QRect(50, 120, 59, 16));
        topScoreThree = new QLabel(LeaderBoard);
        topScoreThree->setObjectName(QStringLiteral("topScoreThree"));
        topScoreThree->setGeometry(QRect(270, 120, 81, 16));
        three = new QLabel(LeaderBoard);
        three->setObjectName(QStringLiteral("three"));
        three->setGeometry(QRect(30, 120, 16, 16));
        three->setFont(font1);
        topNameFive = new QLabel(LeaderBoard);
        topNameFive->setObjectName(QStringLiteral("topNameFive"));
        topNameFive->setGeometry(QRect(50, 180, 59, 16));
        topNameFour = new QLabel(LeaderBoard);
        topNameFour->setObjectName(QStringLiteral("topNameFour"));
        topNameFour->setGeometry(QRect(50, 150, 59, 16));
        six = new QLabel(LeaderBoard);
        six->setObjectName(QStringLiteral("six"));
        six->setGeometry(QRect(30, 210, 16, 16));
        six->setFont(font1);
        topScoreSix = new QLabel(LeaderBoard);
        topScoreSix->setObjectName(QStringLiteral("topScoreSix"));
        topScoreSix->setGeometry(QRect(270, 210, 81, 16));
        topScoreFour = new QLabel(LeaderBoard);
        topScoreFour->setObjectName(QStringLiteral("topScoreFour"));
        topScoreFour->setGeometry(QRect(270, 150, 81, 16));
        topScoreFFive = new QLabel(LeaderBoard);
        topScoreFFive->setObjectName(QStringLiteral("topScoreFFive"));
        topScoreFFive->setGeometry(QRect(270, 180, 81, 16));
        topNameSix = new QLabel(LeaderBoard);
        topNameSix->setObjectName(QStringLiteral("topNameSix"));
        topNameSix->setGeometry(QRect(50, 210, 59, 16));
        five = new QLabel(LeaderBoard);
        five->setObjectName(QStringLiteral("five"));
        five->setGeometry(QRect(30, 180, 16, 16));
        five->setFont(font1);
        four = new QLabel(LeaderBoard);
        four->setObjectName(QStringLiteral("four"));
        four->setGeometry(QRect(30, 150, 16, 16));
        four->setFont(font1);
        topNameEight = new QLabel(LeaderBoard);
        topNameEight->setObjectName(QStringLiteral("topNameEight"));
        topNameEight->setGeometry(QRect(50, 270, 59, 16));
        topNameSeven = new QLabel(LeaderBoard);
        topNameSeven->setObjectName(QStringLiteral("topNameSeven"));
        topNameSeven->setGeometry(QRect(50, 240, 59, 16));
        nine = new QLabel(LeaderBoard);
        nine->setObjectName(QStringLiteral("nine"));
        nine->setGeometry(QRect(30, 300, 16, 16));
        nine->setFont(font1);
        topScoreNine = new QLabel(LeaderBoard);
        topScoreNine->setObjectName(QStringLiteral("topScoreNine"));
        topScoreNine->setGeometry(QRect(270, 300, 81, 16));
        topScoreSeven = new QLabel(LeaderBoard);
        topScoreSeven->setObjectName(QStringLiteral("topScoreSeven"));
        topScoreSeven->setGeometry(QRect(270, 240, 81, 16));
        topScoreEight = new QLabel(LeaderBoard);
        topScoreEight->setObjectName(QStringLiteral("topScoreEight"));
        topScoreEight->setGeometry(QRect(270, 270, 81, 16));
        topNameNine = new QLabel(LeaderBoard);
        topNameNine->setObjectName(QStringLiteral("topNameNine"));
        topNameNine->setGeometry(QRect(50, 300, 59, 16));
        eight = new QLabel(LeaderBoard);
        eight->setObjectName(QStringLiteral("eight"));
        eight->setGeometry(QRect(30, 270, 16, 16));
        eight->setFont(font1);
        seven = new QLabel(LeaderBoard);
        seven->setObjectName(QStringLiteral("seven"));
        seven->setGeometry(QRect(30, 240, 16, 16));
        seven->setFont(font1);
        topScoreTen = new QLabel(LeaderBoard);
        topScoreTen->setObjectName(QStringLiteral("topScoreTen"));
        topScoreTen->setGeometry(QRect(270, 330, 81, 16));
        topNameTen = new QLabel(LeaderBoard);
        topNameTen->setObjectName(QStringLiteral("topNameTen"));
        topNameTen->setGeometry(QRect(50, 330, 59, 16));
        ten = new QLabel(LeaderBoard);
        ten->setObjectName(QStringLiteral("ten"));
        ten->setGeometry(QRect(30, 330, 16, 16));
        ten->setFont(font1);
        pushButton = new QPushButton(LeaderBoard);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 370, 91, 32));

        retranslateUi(LeaderBoard);

        QMetaObject::connectSlotsByName(LeaderBoard);
    } // setupUi

    void retranslateUi(QDialog *LeaderBoard)
    {
        LeaderBoard->setWindowTitle(QApplication::translate("LeaderBoard", "Dialog", 0));
        titel->setText(QApplication::translate("LeaderBoard", "Leader Board", 0));
        one->setText(QApplication::translate("LeaderBoard", "1. ", 0));
        topNameOne->setText(QApplication::translate("LeaderBoard", "Player 1", 0));
        topScoreOne->setText(QApplication::translate("LeaderBoard", "000", 0));
        topNameTwo->setText(QApplication::translate("LeaderBoard", "Player 2", 0));
        topScoreTwo->setText(QApplication::translate("LeaderBoard", "000", 0));
        two->setText(QApplication::translate("LeaderBoard", "2.", 0));
        topNameThree->setText(QApplication::translate("LeaderBoard", "Player 3", 0));
        topScoreThree->setText(QApplication::translate("LeaderBoard", "000", 0));
        three->setText(QApplication::translate("LeaderBoard", "3.", 0));
        topNameFive->setText(QApplication::translate("LeaderBoard", "Player 5", 0));
        topNameFour->setText(QApplication::translate("LeaderBoard", "Player 4", 0));
        six->setText(QApplication::translate("LeaderBoard", "6.", 0));
        topScoreSix->setText(QApplication::translate("LeaderBoard", "000", 0));
        topScoreFour->setText(QApplication::translate("LeaderBoard", "000", 0));
        topScoreFFive->setText(QApplication::translate("LeaderBoard", "000", 0));
        topNameSix->setText(QApplication::translate("LeaderBoard", "Player 6", 0));
        five->setText(QApplication::translate("LeaderBoard", "5.", 0));
        four->setText(QApplication::translate("LeaderBoard", "4.", 0));
        topNameEight->setText(QApplication::translate("LeaderBoard", "Player 8", 0));
        topNameSeven->setText(QApplication::translate("LeaderBoard", "Player 7", 0));
        nine->setText(QApplication::translate("LeaderBoard", "9.", 0));
        topScoreNine->setText(QApplication::translate("LeaderBoard", "000", 0));
        topScoreSeven->setText(QApplication::translate("LeaderBoard", "000", 0));
        topScoreEight->setText(QApplication::translate("LeaderBoard", "000", 0));
        topNameNine->setText(QApplication::translate("LeaderBoard", "Player 9", 0));
        eight->setText(QApplication::translate("LeaderBoard", "8.", 0));
        seven->setText(QApplication::translate("LeaderBoard", "7.", 0));
        topScoreTen->setText(QApplication::translate("LeaderBoard", "000", 0));
        topNameTen->setText(QApplication::translate("LeaderBoard", "Player 10", 0));
        ten->setText(QApplication::translate("LeaderBoard", "10.", 0));
        pushButton->setText(QApplication::translate("LeaderBoard", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class LeaderBoard: public Ui_LeaderBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERBOARD_H
