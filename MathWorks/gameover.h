#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QDialog>

namespace Ui {
class GameOver;
}

class GameOver : public QDialog
{
    Q_OBJECT

public:
    explicit GameOver(int score = 0, std::string userName = "Player 1", QWidget *parent = 0);
    ~GameOver();
    void saveGame();
    void setScore(int scre);
    void setUserName(std::string usrName);
    int getScore();
    std::string getUserName();

signals:
    void on_quit_clicked();
    void on_retry_clicked();
    //void on_create();

private:
    int score;
    std::string userName;
    Ui::GameOver *ui;
};

#endif // GAMEOVER_H
