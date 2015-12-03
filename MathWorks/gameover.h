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
    explicit GameOver(QWidget *parent = 0);
    ~GameOver();
    void saveGame();
    void setScore(int scre);
    void setUserName(std::string usrName);
    int getScore();
    std::string getUserName();

signals:
    void on_quit_clicked();
    void on_retry_clicked();

private:
    int score;
    std::string userName;
    Ui::GameOver *ui;

private slots:
    void retry();

};

#endif // GAMEOVER_H
