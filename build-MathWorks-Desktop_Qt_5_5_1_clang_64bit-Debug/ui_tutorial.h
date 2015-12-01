/********************************************************************************
** Form generated from reading UI file 'tutorial.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTORIAL_H
#define UI_TUTORIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Tutorial
{
public:
    QTextBrowser *textBox;
    QPushButton *buttonOk;

    void setupUi(QDialog *Tutorial)
    {
        if (Tutorial->objectName().isEmpty())
            Tutorial->setObjectName(QStringLiteral("Tutorial"));
        Tutorial->resize(486, 350);
        Tutorial->setMinimumSize(QSize(486, 350));
        Tutorial->setMaximumSize(QSize(486, 350));
        textBox = new QTextBrowser(Tutorial);
        textBox->setObjectName(QStringLiteral("textBox"));
        textBox->setGeometry(QRect(10, 10, 461, 281));
        buttonOk = new QPushButton(Tutorial);
        buttonOk->setObjectName(QStringLiteral("buttonOk"));
        buttonOk->setGeometry(QRect(200, 310, 81, 32));

        retranslateUi(Tutorial);

        QMetaObject::connectSlotsByName(Tutorial);
    } // setupUi

    void retranslateUi(QDialog *Tutorial)
    {
        Tutorial->setWindowTitle(QApplication::translate("Tutorial", "Dialog", 0));
        buttonOk->setText(QApplication::translate("Tutorial", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class Tutorial: public Ui_Tutorial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTORIAL_H
