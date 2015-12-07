#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include "leaderboardmodel.h"

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = 0);
    ~Settings();

private slots:
    void on_clearBut_clicked();
    void on_pushButton_clicked();

private:
    Ui::Settings *ui;
    LeaderBoardModel *lBoardMd;

};

#endif // SETTINGS_H
