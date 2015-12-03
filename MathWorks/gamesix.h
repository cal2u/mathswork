#ifndef GAMESIX_H
#define GAMESIX_H
#include "gameover.h"
#include "ui_gameover.h"
#include "boardmodel.h"
#include "gamemodel.h"
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
    void setScore(int scre);
    void setUserName(std::string usrName);

private slots:
    void closeGame();
    void startGame();
    void grid_block_clicked(int val);
    void on_p0_0_clicked();
    void on_equals_clicked();
    void on_add_clicked();
    void on_subtract_clicked();
    void on_multiply_clicked();
    void on_divide_clicked();
    void update_board_ui();

private:
    const static int width = 6;
    const static int height = 6;
    bool need_final_block;
    int score;
    std::string userName;
    GameBoardModel *game_board;
    MathGameModel *game_model;
    GameOver *gameOvr;

    Ui::GameSix *ui;

    void disable_grid();
    void enable_selectable_blocks();

    void disable_operators();
    void enable_operators();


};

#endif // GAMESIX_H
