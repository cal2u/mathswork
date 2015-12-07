#ifndef LOGINOUT_H
#define LOGINOUT_H

#include <QDialog>

// Dialog for changing the user to be associated with scores

namespace Ui {
class LogInOut;
}

class LogInOut : public QDialog
{
    Q_OBJECT

// Constructor and destructor
public:
    explicit LogInOut(QWidget *parent = 0);
    ~LogInOut();
    QString getName();

// Button clicked
private slots:
    void on_ok_clicked();

public:
    Ui::LogInOut *ui;
};

#endif // LOGINOUT_H
