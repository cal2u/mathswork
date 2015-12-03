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

    logIn = new LogInOut();
    std::string userName = "Player 1";
    //QObject::connect(logIn, SIGNAL(on_ok_clicked()), this, SLOT(setUserName(logIn->getName())));

}

MainMenu::~MainMenu(){
    delete ui;
}

// Go to play game section
void MainMenu::on_playGame_clicked(){
    // Go to game selection
    GameSix gameSix;
    gameSix.setUserName(getUserName());
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
    logIn->setModal(true);
    logIn->exec();
    // Take name input into main menu
    QString nam = logIn->ui->usernameIn->text();
    ui->name->setText(nam);
    //setUserName(nam);
}

std::string MainMenu::getUserName(){
    return userName;
}

void MainMenu::setUserName(std::string usrName){
    userName = usrName;
    // Must convert to QString
    //QString qUserName = QString::fromStdString(userName);
    //ui->name->setText(qUserName);
}



