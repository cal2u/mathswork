#include "settings.h"
#include "ui_settings.h"
#include "leaderboardmodel.h"

// Constructor and destructor
Settings::Settings(QWidget *parent) : QDialog(parent), ui(new Ui::Settings){
    ui->setupUi(this);
    lBoardMd = new LeaderBoardModel();
    ui->textBox->setText("MathsWork is a game developed by Matthew, Caleb, Matt, Jean and Ian for the COP 3503 team assignment.");
}

Settings::~Settings(){
    delete ui;
}

// Clear leaderboard
void Settings::on_clearBut_clicked(){
    lBoardMd->clearleadrboard();
}

// Close window
void Settings::on_pushButton_clicked(){
    this->close();
}
