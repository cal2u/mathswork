#ifndef TUTORIAL_H
#define TUTORIAL_H

#include <QDialog>

// Constructor and destructor
namespace Ui {
class Tutorial;
}

class Tutorial : public QDialog
{
    Q_OBJECT

public:
    explicit Tutorial(QWidget *parent = 0);
    ~Tutorial();

private slots:
    void on_buttonOk_clicked();

private:
    Ui::Tutorial *ui;
};

#endif // TUTORIAL_H
