#include "loginout.h"
#include "ui_loginout.h"

// Constructor and destructor
LogInOut::LogInOut(QWidget *parent) : QDialog(parent), ui(new Ui::LogInOut){
    ui->setupUi(this);
}

LogInOut::~LogInOut(){
    delete ui;
}

// When ok is clicked close close
void LogInOut::on_ok_clicked(){
    this->close();
}
