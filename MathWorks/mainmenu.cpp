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
#include <QSound>

// Constructor and destructor
MainMenu::MainMenu(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainMenu){
    ui->setupUi(this);
    statusBar()->setSizeGripEnabled(false);

    logIn = new LogInOut();
    userName = "Player1";
    //QObject::connect(logIn, SIGNAL(on_ok_clicked()), this, SLOT(setUserName(logIn->getName())));
    music = new QSound(":/resources/sounds/menu.wav");
    music->play();
    music->setLoops(QSound::Infinite);


}

MainMenu::~MainMenu(){
    delete ui;
    delete music;
}


// Go to play game section
void MainMenu::on_playGame_clicked(){
    // Go to game selection
    music->stop();
    GameSix *gameSix = new GameSix(this, userName);
    gameSix->setAttribute(Qt::WA_DeleteOnClose, true);
    this->hide();
    gameSix->exec();
    music->play();
    // Bring main menu back after
    this->show();
}

// Go to tutorial text
void MainMenu::on_tutorial_clicked(){
    // Display tutorial dialogue
    Tutorial tutor;
    tutor.exec();
}

// Show leaderboard
void MainMenu::on_leaderBoard_clicked(){
    // Display Leaderboard
    LeaderBoard board;
    board.exec();
}

// Show settings, close current window
void MainMenu::on_settings_clicked(){
    // Go to settings selection
    Settings set;
    set.exec();
}

// Show log in dialog
void MainMenu::on_logInOut_clicked(){
    // Display log in
    logIn->exec();
    // Take name input into main menu
    QString nam = logIn->ui->usernameIn->text();
    ui->name->setText(nam);
    QString name = nam.split(" ").at(0);
    userName = name;
}





