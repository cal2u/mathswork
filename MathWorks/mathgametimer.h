#ifndef MATHGAMETIMER_H
#define MATHGAMETIMER_H
#include <QTimer>
#include "gamemodel.h"
#include "gamesix.h"



class MathGameTimer : public QTimer
{
    Q_OBJECT

public:
    MathGameTimer(int msPerTick, MathGameModel* game_model, QObject* parent = 0);
    void startGameTimer();


private:
    int ticks;
    int msPerTick;
    MathGameModel* game_model;
    void addNumbersToBoard(int numNums);
    GameSix* parentGame;

    const int TICKS_PER_CYCLE = 10;
    const int NUM_NUMS_TO_ADD = 5;

private slots:
    void tick();

};

#endif // MATHGAMETIMER_H
