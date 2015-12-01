#include "settings.h"
#include "ui_settings.h"

// Constructor and destructor
Settings::Settings(QWidget *parent) : QDialog(parent), ui(new Ui::Settings){
    ui->setupUi(this);
    ui->textBox->setText("MathsWork is a game developed by (insert team members here) for the COP 3503 team assignment.");
}

Settings::~Settings(){
    delete ui;
}

// Clear leaderboard
void Settings::on_clearBut_clicked(){

}

// Close window
void Settings::on_pushButton_clicked(){
    this->close();
}
