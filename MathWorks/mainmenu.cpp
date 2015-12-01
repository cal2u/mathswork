#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "loginout.h"
#include "ui_loginout.h"
#include "gamesix.h"
#include "ui_gamesix.h"
#include "tutorial.h"
#include "ui_tutorial.h"
#include "leaderboard.h"
#include "ui_leaderboard.h"
#include "settings.h"
#include "ui_settings.h"

// Constructor and destructor
MainMenu::MainMenu(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainMenu){
    ui->setupUi(this);
    statusBar()->setSizeGripEnabled(false);
}

MainMenu::~MainMenu(){
    delete ui;
}

// Go to play game section
void MainMenu::on_playGame_clicked(){
    // Go to game selection
    GameSix gameSix;
    this->hide();
    gameSix.exec();
    // Bring main menu back after
    this->show();
}

// Go to tutorial text
void MainMenu::on_tutorial_clicked(){
    // Display tutorial dialogue
    Tutorial tutor;
    tutor.setModal(true);
    tutor.exec();
}

// Show leaderboard
void MainMenu::on_leaderBoard_clicked(){
    // Display Leaderboard
    LeaderBoard board;
    board.setModal(true);
    board.exec();
}

// Show settings, close current window
void MainMenu::on_settings_clicked(){
    // Go to settings selection
    Settings set;
    set.setModal(true);
    set.exec();
}

// Show log in dialog
void MainMenu::on_logInOut_clicked(){
    // Display log in
    LogInOut logInOut;
    logInOut.setModal(true);
    logInOut.exec();
    // Take name input into main menu
    QString nam = logInOut.ui->usernameIn->text();
    ui->name->setText(nam);
}



