#include "gameover.h"
#include "ui_gameover.h"
#include "gamesix.h"
#include "ui_gamesix.h"
#include <string>
#include "leaderboardmodel.h"

// Constructor and destructor for QDialog that is presented at game end
GameOver::GameOver(QWidget *parent, QString userNam, int scre) : QDialog(parent), ui(new Ui::GameOver){
    ui->setupUi(this);

    lBoardMd = new LeaderBoardModel();

    // Set score and username
    userName = userNam;
    score = scre;
    ui->score->setText(QString::number(score));
    ui->userName->setText(userName);

    // Auto save
    std::string text = userName.toStdString();
    saveGame(score, text);

    // Close gameSix when this is over
    QObject::connect(this, SIGNAL(on_retry_clicked()), parent, SLOT(closeGame()));
    QObject::connect(this, SIGNAL(on_quit_clicked()), parent, SLOT(closeGame()));

    QObject::connect(this, SIGNAL(on_quit_clicked()), this, SLOT(close()));
    QObject::connect(this, SIGNAL(on_retry_clicked()), this, SLOT(retry()));

}

GameOver::~GameOver(){
    delete ui;
}

// To retry create new game and close gameover
void GameOver::retry(){
    GameSix *gameSix = new GameSix(this, userName);
    gameSix->exec();
    this->close();
}

// Save game
void GameOver::saveGame(int scre, std::string userNme){
    ScoreEntry p = ScoreEntry(userNme, scre);
    lBoardMd->addEntry(p);
}
