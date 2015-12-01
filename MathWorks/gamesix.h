#ifndef GAMESIX_H
#define GAMESIX_H
#include "gameover.h"
#include "ui_gameover.h"

#include <QDialog>

namespace Ui {
class GameSix;
}

// Constructor and destructor
class GameSix : public QDialog {
    Q_OBJECT

public:
    explicit GameSix(QWidget *parent = 0);
    ~GameSix();
    void changeScore(int scre);
    void gameEnd();
    int getScore();
    std::string getUserName();
    void setScore(int score);
    void setUserName(std::string userName);

private slots:
    void closeGame();
    void startGame();
    void on_p0_0_clicked();


private:
    int score;
    std::string userName;
    GameOver *gameOvr;
    Ui::GameSix *ui;
};

#endif // GAMESIX_H
