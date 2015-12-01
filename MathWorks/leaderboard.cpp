#include "leaderboard.h"
#include "ui_leaderboard.h"

// Constructor and destrcutor
LeaderBoard::LeaderBoard(QWidget *parent) : QDialog(parent), ui(new Ui::LeaderBoard){
    ui->setupUi(this);
}

LeaderBoard::~LeaderBoard() {
    delete ui;
}

void LeaderBoard::on_pushButton_clicked() {
    this->close();
}
