#include "gamesix.h"
#include "ui_gamesix.h"
#include "gameover.h"
#include "ui_gameover.h"

int scre;
std::string userNam;

// Constructor and destructor
GameSix::GameSix(QWidget *parent) : QDialog(parent), ui(new Ui::GameSix){
    ui->setupUi(this);

    gameOvr = new GameOver();

    // Score info
    int score = 001;
    std::string userNam = "Playwe 1";
    ui->score->setText((QString) score);

    // Quit and restart buttons for end game
    QObject::connect(gameOvr, SIGNAL(on_quit_clicked()), this, SLOT(closeGame()));
    QObject::connect(gameOvr, SIGNAL(on_retry_clicked()), this, SLOT(startGame()));
    // To close the gameover menu
    QObject::connect(gameOvr, SIGNAL(on_quit_clicked()), gameOvr, SLOT(close()));
    QObject::connect(gameOvr, SIGNAL(on_retry_clicked()), gameOvr, SLOT(close()));
}

GameSix::~GameSix(){
    delete ui;
}

void GameSix::setScore(int score){
    //this->scre = score;
}

void GameSix::setUserName(std::string userName){
    //this->userNam = userName;
}

void GameSix::closeGame(){
    this->close();
}

void GameSix::startGame(){
    this->close();
}

// Change Score
void GameSix::changeScore(int scre){
    ui->score->setText((QString) scre);
}

// End game pop up, saves then ask to play again or exit
void GameSix::gameEnd(){
    //GameOver gameOvr;
    gameOvr->setModal(true);
    gameOvr->exec();
}

// Operations

// Change button number

void GameSix::on_p0_0_clicked(){
    gameEnd();
}
