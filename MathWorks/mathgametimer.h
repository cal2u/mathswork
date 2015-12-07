#ifndef MATHGAMETIMER_H
#define MATHGAMETIMER_H
#include <QTimer>
#include "gamemodel.h"
#include "gamesix.h"

class GameSix;//forward declaration

class MathGameTimer : public QTimer
{
    Q_OBJECT

public:
    MathGameTimer(int msPerTick, MathGameModel* game_model, QObject* parent = 0);
    void startGameTimer();


private:
    int ticks;
    int msPerTick;
    int cycles;
    int ticksToChange;
    MathGameModel* game_model;
    void addNumbersToBoard(int numNums);
    GameSix* parentGame;

    const int STARTING_CYCLE_TIME = 3; //if we want to make this more than 9
                                       //we'll have to do a different way of converting
                                       //a number to a string
    const int NUM_NUMS_TO_ADD = 4;

private slots:
    void tick();

};

#endif // MATHGAMETIMER_H
