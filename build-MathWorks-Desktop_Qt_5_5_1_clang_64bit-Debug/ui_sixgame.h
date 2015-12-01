/********************************************************************************
** Form generated from reading UI file 'sixgame.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIXGAME_H
#define UI_SIXGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sixGame
{
public:
    QFrame *line6;
    QFrame *line5;
    QFrame *line4;
    QFrame *line3;
    QFrame *line0;
    QFrame *line2;
    QFrame *line7;
    QFrame *linev0;
    QFrame *linev1;
    QFrame *linev3;
    QFrame *linev4;
    QFrame *linev5;
    QFrame *linev6;
    QFrame *linev7;
    QPushButton *p0_0;
    QPushButton *p0_1;
    QPushButton *p0_2;
    QPushButton *p0_3;
    QPushButton *p0_4;
    QPushButton *p0_5;
    QPushButton *p1_0;
    QPushButton *p1_1;
    QPushButton *p1_2;
    QPushButton *p1_3;
    QPushButton *p1_4;
    QPushButton *p1_5;
    QPushButton *p2_0;
    QPushButton *p2_1;
    QPushButton *p2_2;
    QPushButton *p2_3;
    QPushButton *p2_4;
    QPushButton *p2_5;
    QPushButton *p3_0;
    QPushButton *p3_1;
    QPushButton *p3_2;
    QPushButton *p3_3;
    QPushButton *p3_4;
    QPushButton *p3_5;
    QPushButton *p4_0;
    QPushButton *p4_1;
    QPushButton *p4_2;
    QPushButton *p4_3;
    QPushButton *p4_4;
    QPushButton *p4_5;
    QPushButton *p5_0;
    QPushButton *p5_1;
    QPushButton *p5_2;
    QPushButton *p5_3;
    QPushButton *p5_4;
    QPushButton *p5_5;
    QPushButton *add;
    QPushButton *subtract;
    QPushButton *multiply;
    QPushButton *divide;
    QPushButton *equals;
    QLabel *scoreLab;
    QLabel *score;

    void setupUi(QDialog *sixGame)
    {
        if (sixGame->objectName().isEmpty())
            sixGame->setObjectName(QStringLiteral("sixGame"));
        sixGame->resize(748, 480);
        line6 = new QFrame(sixGame);
        line6->setObjectName(QStringLiteral("line6"));
        line6->setGeometry(QRect(20, 370, 541, 20));
        QFont font;
        font.setUnderline(true);
        font.setKerning(true);
        line6->setFont(font);
        line6->setFrameShadow(QFrame::Plain);
        line6->setLineWidth(5);
        line6->setFrameShape(QFrame::HLine);
        line5 = new QFrame(sixGame);
        line5->setObjectName(QStringLiteral("line5"));
        line5->setGeometry(QRect(20, 300, 541, 20));
        line5->setFont(font);
        line5->setFrameShadow(QFrame::Plain);
        line5->setLineWidth(5);
        line5->setFrameShape(QFrame::HLine);
        line4 = new QFrame(sixGame);
        line4->setObjectName(QStringLiteral("line4"));
        line4->setGeometry(QRect(20, 230, 541, 20));
        line4->setFont(font);
        line4->setFrameShadow(QFrame::Plain);
        line4->setLineWidth(5);
        line4->setFrameShape(QFrame::HLine);
        line3 = new QFrame(sixGame);
        line3->setObjectName(QStringLiteral("line3"));
        line3->setGeometry(QRect(20, 160, 541, 20));
        line3->setFont(font);
        line3->setFrameShadow(QFrame::Plain);
        line3->setLineWidth(5);
        line3->setFrameShape(QFrame::HLine);
        line0 = new QFrame(sixGame);
        line0->setObjectName(QStringLiteral("line0"));
        line0->setGeometry(QRect(20, 20, 541, 20));
        line0->setFont(font);
        line0->setFrameShadow(QFrame::Plain);
        line0->setLineWidth(5);
        line0->setFrameShape(QFrame::HLine);
        line2 = new QFrame(sixGame);
        line2->setObjectName(QStringLiteral("line2"));
        line2->setGeometry(QRect(20, 90, 541, 20));
        line2->setFont(font);
        line2->setFrameShadow(QFrame::Plain);
        line2->setLineWidth(5);
        line2->setFrameShape(QFrame::HLine);
        line7 = new QFrame(sixGame);
        line7->setObjectName(QStringLiteral("line7"));
        line7->setGeometry(QRect(20, 440, 541, 20));
        line7->setFont(font);
        line7->setFrameShadow(QFrame::Plain);
        line7->setLineWidth(5);
        line7->setFrameShape(QFrame::HLine);
        linev0 = new QFrame(sixGame);
        linev0->setObjectName(QStringLiteral("linev0"));
        linev0->setGeometry(QRect(10, 30, 16, 421));
        linev0->setFrameShadow(QFrame::Plain);
        linev0->setLineWidth(5);
        linev0->setFrameShape(QFrame::VLine);
        linev1 = new QFrame(sixGame);
        linev1->setObjectName(QStringLiteral("linev1"));
        linev1->setGeometry(QRect(100, 30, 16, 421));
        linev1->setFrameShadow(QFrame::Plain);
        linev1->setLineWidth(5);
        linev1->setFrameShape(QFrame::VLine);
        linev3 = new QFrame(sixGame);
        linev3->setObjectName(QStringLiteral("linev3"));
        linev3->setGeometry(QRect(190, 30, 16, 421));
        linev3->setFrameShadow(QFrame::Plain);
        linev3->setLineWidth(5);
        linev3->setFrameShape(QFrame::VLine);
        linev4 = new QFrame(sixGame);
        linev4->setObjectName(QStringLiteral("linev4"));
        linev4->setGeometry(QRect(280, 30, 16, 421));
        linev4->setFrameShadow(QFrame::Plain);
        linev4->setLineWidth(5);
        linev4->setFrameShape(QFrame::VLine);
        linev5 = new QFrame(sixGame);
        linev5->setObjectName(QStringLiteral("linev5"));
        linev5->setGeometry(QRect(370, 30, 16, 421));
        linev5->setFrameShadow(QFrame::Plain);
        linev5->setLineWidth(5);
        linev5->setFrameShape(QFrame::VLine);
        linev6 = new QFrame(sixGame);
        linev6->setObjectName(QStringLiteral("linev6"));
        linev6->setGeometry(QRect(460, 30, 16, 421));
        linev6->setFrameShadow(QFrame::Plain);
        linev6->setLineWidth(5);
        linev6->setFrameShape(QFrame::VLine);
        linev7 = new QFrame(sixGame);
        linev7->setObjectName(QStringLiteral("linev7"));
        linev7->setGeometry(QRect(550, 30, 20, 421));
        linev7->setFrameShadow(QFrame::Plain);
        linev7->setLineWidth(5);
        linev7->setFrameShape(QFrame::VLine);
        p0_0 = new QPushButton(sixGame);
        p0_0->setObjectName(QStringLiteral("p0_0"));
        p0_0->setGeometry(QRect(30, 40, 71, 51));
        p0_1 = new QPushButton(sixGame);
        p0_1->setObjectName(QStringLiteral("p0_1"));
        p0_1->setGeometry(QRect(120, 40, 71, 51));
        p0_2 = new QPushButton(sixGame);
        p0_2->setObjectName(QStringLiteral("p0_2"));
        p0_2->setGeometry(QRect(210, 40, 71, 51));
        p0_3 = new QPushButton(sixGame);
        p0_3->setObjectName(QStringLiteral("p0_3"));
        p0_3->setGeometry(QRect(300, 40, 71, 51));
        p0_4 = new QPushButton(sixGame);
        p0_4->setObjectName(QStringLiteral("p0_4"));
        p0_4->setGeometry(QRect(390, 40, 71, 51));
        p0_5 = new QPushButton(sixGame);
        p0_5->setObjectName(QStringLiteral("p0_5"));
        p0_5->setGeometry(QRect(480, 40, 71, 51));
        p1_0 = new QPushButton(sixGame);
        p1_0->setObjectName(QStringLiteral("p1_0"));
        p1_0->setGeometry(QRect(30, 110, 71, 51));
        p1_1 = new QPushButton(sixGame);
        p1_1->setObjectName(QStringLiteral("p1_1"));
        p1_1->setGeometry(QRect(120, 110, 71, 51));
        p1_2 = new QPushButton(sixGame);
        p1_2->setObjectName(QStringLiteral("p1_2"));
        p1_2->setGeometry(QRect(210, 110, 71, 51));
        p1_3 = new QPushButton(sixGame);
        p1_3->setObjectName(QStringLiteral("p1_3"));
        p1_3->setGeometry(QRect(300, 110, 71, 51));
        p1_4 = new QPushButton(sixGame);
        p1_4->setObjectName(QStringLiteral("p1_4"));
        p1_4->setGeometry(QRect(390, 110, 71, 51));
        p1_5 = new QPushButton(sixGame);
        p1_5->setObjectName(QStringLiteral("p1_5"));
        p1_5->setGeometry(QRect(480, 110, 71, 51));
        p1_5->setIconSize(QSize(16, 16));
        p2_0 = new QPushButton(sixGame);
        p2_0->setObjectName(QStringLiteral("p2_0"));
        p2_0->setGeometry(QRect(30, 180, 71, 51));
        p2_0->setIconSize(QSize(16, 16));
        p2_1 = new QPushButton(sixGame);
        p2_1->setObjectName(QStringLiteral("p2_1"));
        p2_1->setGeometry(QRect(120, 180, 71, 51));
        p2_1->setIconSize(QSize(16, 16));
        p2_2 = new QPushButton(sixGame);
        p2_2->setObjectName(QStringLiteral("p2_2"));
        p2_2->setGeometry(QRect(210, 180, 71, 51));
        p2_2->setIconSize(QSize(16, 16));
        p2_3 = new QPushButton(sixGame);
        p2_3->setObjectName(QStringLiteral("p2_3"));
        p2_3->setGeometry(QRect(300, 180, 71, 51));
        p2_3->setIconSize(QSize(16, 16));
        p2_4 = new QPushButton(sixGame);
        p2_4->setObjectName(QStringLiteral("p2_4"));
        p2_4->setGeometry(QRect(390, 180, 71, 51));
        p2_4->setIconSize(QSize(16, 16));
        p2_5 = new QPushButton(sixGame);
        p2_5->setObjectName(QStringLiteral("p2_5"));
        p2_5->setGeometry(QRect(480, 180, 71, 51));
        p2_5->setIconSize(QSize(16, 16));
        p3_0 = new QPushButton(sixGame);
        p3_0->setObjectName(QStringLiteral("p3_0"));
        p3_0->setGeometry(QRect(30, 250, 71, 51));
        p3_0->setIconSize(QSize(16, 16));
        p3_1 = new QPushButton(sixGame);
        p3_1->setObjectName(QStringLiteral("p3_1"));
        p3_1->setGeometry(QRect(120, 250, 71, 51));
        p3_1->setIconSize(QSize(16, 16));
        p3_2 = new QPushButton(sixGame);
        p3_2->setObjectName(QStringLiteral("p3_2"));
        p3_2->setGeometry(QRect(210, 250, 71, 51));
        p3_2->setIconSize(QSize(16, 16));
        p3_3 = new QPushButton(sixGame);
        p3_3->setObjectName(QStringLiteral("p3_3"));
        p3_3->setGeometry(QRect(300, 250, 71, 51));
        p3_3->setIconSize(QSize(16, 16));
        p3_4 = new QPushButton(sixGame);
        p3_4->setObjectName(QStringLiteral("p3_4"));
        p3_4->setGeometry(QRect(390, 250, 71, 51));
        p3_4->setIconSize(QSize(16, 16));
        p3_5 = new QPushButton(sixGame);
        p3_5->setObjectName(QStringLiteral("p3_5"));
        p3_5->setGeometry(QRect(480, 250, 71, 51));
        p3_5->setIconSize(QSize(16, 16));
        p4_0 = new QPushButton(sixGame);
        p4_0->setObjectName(QStringLiteral("p4_0"));
        p4_0->setGeometry(QRect(30, 320, 71, 51));
        p4_0->setIconSize(QSize(16, 16));
        p4_1 = new QPushButton(sixGame);
        p4_1->setObjectName(QStringLiteral("p4_1"));
        p4_1->setGeometry(QRect(120, 320, 71, 51));
        p4_1->setIconSize(QSize(16, 16));
        p4_2 = new QPushButton(sixGame);
        p4_2->setObjectName(QStringLiteral("p4_2"));
        p4_2->setGeometry(QRect(210, 320, 71, 51));
        p4_2->setIconSize(QSize(16, 16));
        p4_3 = new QPushButton(sixGame);
        p4_3->setObjectName(QStringLiteral("p4_3"));
        p4_3->setGeometry(QRect(300, 320, 71, 51));
        p4_3->setIconSize(QSize(16, 16));
        p4_4 = new QPushButton(sixGame);
        p4_4->setObjectName(QStringLiteral("p4_4"));
        p4_4->setGeometry(QRect(390, 320, 71, 51));
        p4_4->setIconSize(QSize(16, 16));
        p4_5 = new QPushButton(sixGame);
        p4_5->setObjectName(QStringLiteral("p4_5"));
        p4_5->setGeometry(QRect(480, 320, 71, 51));
        p4_5->setIconSize(QSize(16, 16));
        p5_0 = new QPushButton(sixGame);
        p5_0->setObjectName(QStringLiteral("p5_0"));
        p5_0->setGeometry(QRect(30, 390, 71, 51));
        p5_0->setIconSize(QSize(16, 16));
        p5_1 = new QPushButton(sixGame);
        p5_1->setObjectName(QStringLiteral("p5_1"));
        p5_1->setGeometry(QRect(120, 390, 71, 51));
        p5_1->setIconSize(QSize(16, 16));
        p5_2 = new QPushButton(sixGame);
        p5_2->setObjectName(QStringLiteral("p5_2"));
        p5_2->setGeometry(QRect(210, 390, 71, 51));
        p5_2->setIconSize(QSize(16, 16));
        p5_3 = new QPushButton(sixGame);
        p5_3->setObjectName(QStringLiteral("p5_3"));
        p5_3->setGeometry(QRect(300, 390, 71, 51));
        p5_3->setIconSize(QSize(16, 16));
        p5_4 = new QPushButton(sixGame);
        p5_4->setObjectName(QStringLiteral("p5_4"));
        p5_4->setGeometry(QRect(390, 390, 71, 51));
        p5_4->setIconSize(QSize(16, 16));
        p5_5 = new QPushButton(sixGame);
        p5_5->setObjectName(QStringLiteral("p5_5"));
        p5_5->setGeometry(QRect(480, 390, 71, 51));
        p5_5->setIconSize(QSize(16, 16));
        add = new QPushButton(sixGame);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(590, 80, 115, 71));
        QFont font1;
        font1.setPointSize(30);
        add->setFont(font1);
        subtract = new QPushButton(sixGame);
        subtract->setObjectName(QStringLiteral("subtract"));
        subtract->setGeometry(QRect(590, 160, 115, 71));
        subtract->setFont(font1);
        multiply = new QPushButton(sixGame);
        multiply->setObjectName(QStringLiteral("multiply"));
        multiply->setGeometry(QRect(590, 240, 115, 71));
        multiply->setFont(font1);
        divide = new QPushButton(sixGame);
        divide->setObjectName(QStringLiteral("divide"));
        divide->setGeometry(QRect(590, 320, 115, 71));
        divide->setFont(font1);
        equals = new QPushButton(sixGame);
        equals->setObjectName(QStringLiteral("equals"));
        equals->setGeometry(QRect(590, 400, 115, 71));
        equals->setFont(font1);
        scoreLab = new QLabel(sixGame);
        scoreLab->setObjectName(QStringLiteral("scoreLab"));
        scoreLab->setGeometry(QRect(560, 10, 59, 16));
        QFont font2;
        font2.setPointSize(20);
        scoreLab->setFont(font2);
        score = new QLabel(sixGame);
        score->setObjectName(QStringLiteral("score"));
        score->setGeometry(QRect(620, 10, 131, 16));
        score->setFont(font2);

        retranslateUi(sixGame);

        QMetaObject::connectSlotsByName(sixGame);
    } // setupUi

    void retranslateUi(QDialog *sixGame)
    {
        sixGame->setWindowTitle(QApplication::translate("sixGame", "Dialog", 0));
        p0_0->setText(QString());
        p0_1->setText(QString());
        p0_2->setText(QString());
        p0_3->setText(QString());
        p0_4->setText(QString());
        p0_5->setText(QString());
        p1_0->setText(QString());
        p1_1->setText(QString());
        p1_2->setText(QString());
        p1_3->setText(QString());
        p1_4->setText(QString());
        p1_5->setText(QString());
        p2_0->setText(QString());
        p2_1->setText(QString());
        p2_2->setText(QString());
        p2_3->setText(QString());
        p2_4->setText(QString());
        p2_5->setText(QString());
        p3_0->setText(QString());
        p3_1->setText(QString());
        p3_2->setText(QString());
        p3_3->setText(QString());
        p3_4->setText(QString());
        p3_5->setText(QString());
        p4_0->setText(QString());
        p4_1->setText(QString());
        p4_2->setText(QString());
        p4_3->setText(QString());
        p4_4->setText(QString());
        p4_5->setText(QString());
        p5_0->setText(QString());
        p5_1->setText(QString());
        p5_2->setText(QString());
        p5_3->setText(QString());
        p5_4->setText(QString());
        p5_5->setText(QString());
        add->setText(QApplication::translate("sixGame", "+", 0));
        subtract->setText(QApplication::translate("sixGame", "-", 0));
        multiply->setText(QApplication::translate("sixGame", "*", 0));
        divide->setText(QApplication::translate("sixGame", "/", 0));
        equals->setText(QApplication::translate("sixGame", "=", 0));
        scoreLab->setText(QApplication::translate("sixGame", "Score: ", 0));
        score->setText(QApplication::translate("sixGame", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class sixGame: public Ui_sixGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIXGAME_H
