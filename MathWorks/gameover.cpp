#include "gameover.h"
#include "ui_gameover.h"
#include "gamesix.h"
#include "ui_gamesix.h"
#include <string>

// Constructor and destructor
GameOver::GameOver(QWidget *parent, QString userNam, int scre) : QDialog(parent), ui(new Ui::GameOver){
    ui->setupUi(this);

    // Set score and username
    userName = userNam;
    score = scre;
    ui->score->setText(QString::number(score));
    ui->userName->setText(userName);
    std::cout << userName.toStdString() << '\n';

    // Auto save
    //saveGame(score, userName);

    // Close gameSix when this is over
    QObject::connect(this, SIGNAL(on_retry_clicked()), parent, SLOT(closeGame()));
    QObject::connect(this, SIGNAL(on_quit_clicked()), parent, SLOT(closeGame()));

    QObject::connect(this, SIGNAL(on_quit_clicked()), this, SLOT(close()));
    QObject::connect(this, SIGNAL(on_retry_clicked()), this, SLOT(retry()));

}

GameOver::~GameOver(){
    delete ui;
}

// Set score
void GameOver::setScore(int scre){
    score = scre;
    ui->score->setText(QString::number(score));
}

// Set username
void GameOver::setUserName(QString usrName){
     userName = usrName;
     ui->userName->setText(userName);
}

// Get score
int GameOver::getScore(){
    return score;
}

// Get username
QString GameOver::getUserName(){
    return userName;
}

// To retry create new game and close gameover
void GameOver::retry(){
    GameSix *gameSix = new GameSix(this, userName);
    gameSix->exec();
    this->close();
}

// Save game
void GameOver::saveGame(){
    /* TODO: Add username and score to leaderboard text file */

}
