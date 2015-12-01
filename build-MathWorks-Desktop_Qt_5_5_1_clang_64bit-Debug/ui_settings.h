/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QLabel *title;
    QLabel *about;
    QTextBrowser *textBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *clearBoard;
    QPushButton *clearBut;
    QPushButton *pushButton;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(275, 259);
        Settings->setMinimumSize(QSize(275, 259));
        Settings->setMaximumSize(QSize(275, 259));
        title = new QLabel(Settings);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(100, 10, 81, 31));
        QFont font;
        font.setPointSize(20);
        title->setFont(font);
        about = new QLabel(Settings);
        about->setObjectName(QStringLiteral("about"));
        about->setGeometry(QRect(120, 100, 41, 16));
        textBox = new QTextBrowser(Settings);
        textBox->setObjectName(QStringLiteral("textBox"));
        textBox->setGeometry(QRect(10, 120, 251, 81));
        layoutWidget = new QWidget(Settings);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 60, 208, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        clearBoard = new QLabel(layoutWidget);
        clearBoard->setObjectName(QStringLiteral("clearBoard"));
        QFont font1;
        font1.setPointSize(13);
        clearBoard->setFont(font1);

        horizontalLayout->addWidget(clearBoard);

        clearBut = new QPushButton(layoutWidget);
        clearBut->setObjectName(QStringLiteral("clearBut"));

        horizontalLayout->addWidget(clearBut);

        pushButton = new QPushButton(Settings);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 220, 71, 32));

        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Dialog", 0));
        title->setText(QApplication::translate("Settings", "Settings", 0));
        about->setText(QApplication::translate("Settings", "About", 0));
        clearBoard->setText(QApplication::translate("Settings", "Clear Leader Board:", 0));
        clearBut->setText(QApplication::translate("Settings", "Clear", 0));
        pushButton->setText(QApplication::translate("Settings", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
