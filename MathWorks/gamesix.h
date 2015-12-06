#ifndef GAMESIX_H
#define GAMESIX_H
#include "gameover.h"
#include "ui_gameover.h"
#include "boardmodel.h"
#include "gamemodel.h"
#include "mathgametimer.h"
#include <QDialog>

class MathGameTimer;//forward declaration


namespace Ui {
class GameSix;
}

// Constructor and destructor
class GameSix : public QDialog {
    Q_OBJECT

public:
    explicit GameSix(QWidget *parent = 0, QString usrName = "Player 1");
    ~GameSix();
    void changeScore(int scre);
    void changeTime(int time);
    void gameEnd();

public slots:
    void update_board_ui();

private slots:
    void closeGame();
    void startGame();
    void grid_block_clicked(int val);
//    void on_p0_0_clicked();
    void on_equals_clicked();
    void on_add_clicked();
    void on_subtract_clicked();
    void on_multiply_clicked();
    void on_divide_clicked();


    void on_pushButton_2_clicked();

private:
    const static int width = 6;
    const static int height = 6;
    bool need_final_block;
    int score;
    QString userName;
    GameBoardModel *game_board;
    MathGameModel *game_model;
    GameOver *gameOvr;
    MathGameTimer* timer;

    Ui::GameSix *ui;

    void disable_grid();
    void enable_selectable_blocks();

    void disable_operators();
    void enable_operators();


    void update_formula_display();
    void hide_formula();

    void reject() override;
};

#endif // GAMESIX_H
