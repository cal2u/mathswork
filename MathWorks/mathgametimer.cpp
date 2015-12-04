#include "mathgametimer.h"


MathGameTimer::MathGameTimer(int msPerTick, MathGameModel* game_model, QObject * parent)
    : QTimer(parent), msPerTick(msPerTick), game_model(game_model)
{
    parentGame = (GameSix*)parent;
    ticks = 0;
}

void MathGameTimer::addNumbersToBoard(int numNums) {
    if (!game_model->fill_board(numNums)) {
        //make game over happen
        parentGame->gameEnd();
        this->stop();
    }
}

//do this to start playing the game
void MathGameTimer::startGameTimer() {
    connect(this, SIGNAL(timeout()), this, SLOT(tick()));
    this->start(msPerTick);
}

//called periodically during the game
void MathGameTimer::tick() {
    ticks++;
    if (ticks >= TICKS_PER_CYCLE) {
        ticks = 0;
        addNumbersToBoard(NUM_NUMS_TO_ADD);
        parentGame->update_board_ui();
    }
}

