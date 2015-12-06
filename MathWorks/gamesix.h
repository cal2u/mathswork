#ifndef GAMESIX_H
#define GAMESIX_H
#include "gameover.h"
#include "ui_gameover.h"
#include "boardmodel.h"
#include "gamemodel.h"
#include <QDialog>
#include <QTimer>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
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
    void gameEnd();

public slots:
    void update_board_ui();

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


    void on_pushButton_2_clicked();

private:
    const static int width = 6;
    const static int height = 6;
    const static int ANIMATION_DURATION = 700;
    const static int ANIMATION_DELAY = 4000;
    bool need_final_block;
    int score;
    QString userName;
    QTimer* animation_timer = nullptr;
    GameBoardModel *game_board = nullptr;
    MathGameModel *game_model = nullptr;
    QPropertyAnimation *formula_animator = nullptr;
    QGraphicsOpacityEffect *formula_opacity = nullptr;
    GameOver *gameOvr = nullptr;

    Ui::GameSix *ui = nullptr;

    void disable_grid();
    void enable_selectable_blocks();

    void disable_operators();
    void enable_operators();


    void update_formula_display();
    void hide_formula();


};

#endif // GAMESIX_H
