#ifndef GAMESIX_H
#define GAMESIX_H
#include "gameover.h"
#include "ui_gameover.h"
#include "boardmodel.h"
#include "gamemodel.h"
#include "mathgametimer.h"
#include <QDialog>
#include <QTimer>
#include <QSound>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>

// Main UI class for displaying the game

class MathGameTimer;//forward declaration


namespace Ui {
class GameSix;
}

// Constructor and destructor
class GameSix : public QDialog {
    Q_OBJECT

public:
    explicit GameSix(QWidget *parent = 0, QString usrName = "Player1");
    ~GameSix();
    void changeScore(float scre);
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
    void on_undo_clicked();
    void on_clear_clicked();


    void on_pushButton_2_clicked();

private:
    const static int width = 6;
    const static int height = 6;

    // How long the formula fades
    const static int ANIMATION_DURATION = 700;

    // How long the formula remains on screen after submission
    const static int ANIMATION_DELAY = 4000;

    bool need_final_block = false;
    float score;

    bool need_number = true;
    QString userName;

    // Properties for animating the fading of the formula
    void awardPoints(PassValues result);

    QTimer* animation_timer = nullptr;
    GameBoardModel *game_board = nullptr;
    MathGameModel *game_model = nullptr;
    QPropertyAnimation *formula_animator = nullptr;
    QGraphicsOpacityEffect *formula_opacity = nullptr;

    // The Game Over dialog
    GameOver *gameOvr = nullptr;

    // The game timer
    MathGameTimer* timer = nullptr;

    // Background music
    QSound *music = nullptr;

    // UI
    Ui::GameSix *ui = nullptr;
    

    // methods for making different buttions clickable
    void disable_grid();
    void enable_selectable_blocks();

    void disable_operators();
    void enable_operators();


    void update_formula_display();
    void hide_formula();

    void reject() override;
};

#endif // GAMESIX_H
