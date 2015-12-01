#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <QDialog>

namespace Ui {
class LeaderBoard;
}

class LeaderBoard : public QDialog
{
    Q_OBJECT

public:
    explicit LeaderBoard(QWidget *parent = 0);
    ~LeaderBoard();

private slots:
    void on_pushButton_clicked();

private:
    Ui::LeaderBoard *ui;
};

#endif // LEADERBOARD_H
