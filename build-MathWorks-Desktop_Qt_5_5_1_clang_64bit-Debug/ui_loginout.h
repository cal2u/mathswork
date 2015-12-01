/********************************************************************************
** Form generated from reading UI file 'loginout.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINOUT_H
#define UI_LOGINOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogInOut
{
public:
    QLabel *logIn;
    QPushButton *ok;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *username;
    QLineEdit *usernameIn;

    void setupUi(QDialog *LogInOut)
    {
        if (LogInOut->objectName().isEmpty())
            LogInOut->setObjectName(QStringLiteral("LogInOut"));
        LogInOut->resize(271, 187);
        LogInOut->setMinimumSize(QSize(271, 187));
        LogInOut->setMaximumSize(QSize(271, 187));
        logIn = new QLabel(LogInOut);
        logIn->setObjectName(QStringLiteral("logIn"));
        logIn->setGeometry(QRect(110, 20, 51, 21));
        QFont font;
        font.setPointSize(18);
        logIn->setFont(font);
        logIn->setAlignment(Qt::AlignCenter);
        ok = new QPushButton(LogInOut);
        ok->setObjectName(QStringLiteral("ok"));
        ok->setGeometry(QRect(90, 140, 101, 32));
        layoutWidget = new QWidget(LogInOut);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(31, 81, 202, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        username = new QLabel(layoutWidget);
        username->setObjectName(QStringLiteral("username"));

        horizontalLayout->addWidget(username);

        usernameIn = new QLineEdit(layoutWidget);
        usernameIn->setObjectName(QStringLiteral("usernameIn"));

        horizontalLayout->addWidget(usernameIn);


        retranslateUi(LogInOut);

        QMetaObject::connectSlotsByName(LogInOut);
    } // setupUi

    void retranslateUi(QDialog *LogInOut)
    {
        LogInOut->setWindowTitle(QApplication::translate("LogInOut", "Dialog", 0));
        logIn->setText(QApplication::translate("LogInOut", "Log In", 0));
        ok->setText(QApplication::translate("LogInOut", "OK", 0));
        username->setText(QApplication::translate("LogInOut", "Username:", 0));
        usernameIn->setPlaceholderText(QApplication::translate("LogInOut", "Player 1", 0));
    } // retranslateUi

};

namespace Ui {
    class LogInOut: public Ui_LogInOut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINOUT_H
