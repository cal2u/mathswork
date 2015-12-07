#include "mathgametimer.h"

MathGameTimer::MathGameTimer(int msPerTick, MathGameModel* game_model, QObject * parent)
    : QTimer(parent), msPerTick(msPerTick), game_model(game_model)
{
    parentGame = (GameSix*)parent;
    ticks = 0;
    cycles = 0;
    ticksToChange = STARTING_CYCLE_TIME;
    parentGame->changeTime('0'+STARTING_CYCLE_TIME);
}

void MathGameTimer::addNumbersToBoard(int numNums) {
    if (!game_model->fill_board(numNums)) {
        //make game over happen
        parentGame->gameEnd();
//        this->stop(); //now happens in GameSix.closeGame()
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
    if (ticks >= ticksToChange) {
        cycles++;
        if (ticksToChange > 3){
            ticksToChange = STARTING_CYCLE_TIME - cycles/5;
        }
        ticks = 0;
        parentGame->changeTime('0');
        addNumbersToBoard(NUM_NUMS_TO_ADD);
        parentGame->update_board_ui();
    }
    parentGame->changeTime('0'+ticksToChange-ticks);
}

