#include "gameover.h"
#include "ui_gameover.h"
#include "gamesix.h"
#include "ui_gamesix.h"
#include <string>
// Constructor and destructor
GameOver::GameOver(QWidget *parent) : QDialog(parent), ui(new Ui::GameOver){
    ui->setupUi(this);

    // Set values
    setScore(score);
    setUserName(userName);

    // Auto save
    //saveGame(score, userName);

}

GameOver::~GameOver(){
    delete ui;
}

// Set score
void GameOver::setScore(int scre){
    score = scre;
    ui->score->setText((QString) score);
}

// Set username
void GameOver::setUserName(std::string usrName){
     userName = usrName;
     // Must convert to QString
     QString qUserName = QString::fromStdString(userName);
     ui->userName->setText(qUserName);
}

// Get score
int GameOver::getScore(){
    return score;
}

// Get username
std::string GameOver::getUserName(){
    return userName;
}

// To retry create new game and close gameover
void GameOver::retry(){
    GameSix *gameSix = new GameSix();
    gameSix->setUserName(getUserName());
    gameSix->exec();
    this->close();
}

// Save game
void GameOver::saveGame(){
    /* TODO: Add username and score to leaderboard text file */

}
