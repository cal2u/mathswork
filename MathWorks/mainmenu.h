#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow{
    Q_OBJECT

// Constructor and destructor
public:
    explicit MainMenu(QWidget *parent = 0);
    ~MainMenu();

// To go to the different menues
private slots:
    void on_playGame_clicked();

    void on_tutorial_clicked();

    void on_leaderBoard_clicked();

    void on_settings_clicked();

    void on_logInOut_clicked();


public:
    Ui::MainMenu *ui;
};

#endif // MAINWINDOW_H
