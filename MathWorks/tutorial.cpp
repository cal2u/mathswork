#include "tutorial.h"
#include "ui_tutorial.h"

// Constructor and destructor
Tutorial::Tutorial(QWidget *parent) : QDialog(parent), ui(new Ui::Tutorial){
    ui->setupUi(this);
    ui->textBox->setText("The principal game interface will consist of a grid in which pseudo-random periodically appear.\nPlayers then uses their mouse cursors to select numbers from the grid and combine them with basic math operations (addition, multiplication, subtraction, and division) to form equations.\nWhen a successful equation is formed, the numbers used will disappear and points will be awarded.\nComplex equations earn extra points and cause more numbers to disappear. \nInvalid equations will receive negative consequences such as increasing the rate of numbers appearing.\nOnce the grid is filled entirely, the game is over and the total score will be displayed.\n");

}

Tutorial::~Tutorial(){
    delete ui;
}

// When ok is clicked close close
void Tutorial::on_buttonOk_clicked()
{
    this->close();
}
