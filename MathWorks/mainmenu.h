#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QSound>
#include "loginout.h"
#include "ui_loginout.h"

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow{
    Q_OBJECT

// Constructor and destructor
public:
    explicit MainMenu(QWidget *parent = 0);
    ~MainMenu();
    QString getUserName();
    void setUserName(QString usrName);
    LogInOut* logIn;

// To go to the different menues
private slots:
    void on_playGame_clicked();
    void on_tutorial_clicked();
    void on_leaderBoard_clicked();
    void on_settings_clicked();
    void on_logInOut_clicked();

private:
    QString userName;
    QSound *music;
    bool play_music = true;

public:
    Ui::MainMenu *ui;
};

#endif // MAINWINDOW_H
