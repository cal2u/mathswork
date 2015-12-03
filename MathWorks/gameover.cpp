#include "gameover.h"
#include "ui_gameover.h"
#include <string>
// Constructor and destructor
GameOver::GameOver(int score, std::string userName, QWidget *parent) : QDialog(parent), ui(new Ui::GameOver){
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
}

// Get score
int GameOver::getScore(){
    return score;
}

// Get username
std::string GameOver::getUserName(){
    return userName;
}

// Save game
void GameOver::saveGame(){
    // Add username and score to leaderboard text file
    /* NEEDS TO BE DONE*/
}
