#include "mainmenu.h"
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    // Create main menu and display
    MainMenu mainMe;
    mainMe.show();

    return a.exec();
}
