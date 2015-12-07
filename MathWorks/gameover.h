#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QDialog>
#include "leaderboardmodel.h"

namespace Ui {
class GameOver;
}

class GameOver : public QDialog
{
    Q_OBJECT

public:
    explicit GameOver(QWidget *parent = 0, QString userNam = "Player1", int scre = 0);
    ~GameOver();
    void saveGame(int scre, std::string userNme);

signals:
    void on_quit_clicked();
    void on_retry_clicked();

private:
    int score;
    QString userName;
    Ui::GameOver *ui;
    LeaderBoardModel *lBoardMd;


private slots:
    void retry();

};

#endif // GAMEOVER_H
