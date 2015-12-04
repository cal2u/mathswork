#include "gamesix.h"
#include "ui_gamesix.h"
#include "gameover.h"
#include "ui_gameover.h"
#include "mathgametimer.h"
#include <QPushButton>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>>
#include <QTimer>
#include <iostream>
#include <QSignalMapper>

// Constructor and destructor
GameSix::GameSix(QWidget *parent, QString usrName) : QDialog(parent), ui(new Ui::GameSix){
    ui->setupUi(this);

    // Default score
    score = 0;
    userName = usrName;
    changeScore(score);

    // Create game models
    game_board = new GameBoardModel(width, height);
    game_model = new MathGameModel(game_board);

    // Timer
    MathGameTimer* timer = new MathGameTimer(1000, game_model, this);
    timer->startGameTimer();
    /* TODO: Impliment timer that syncs with game*/

    // Set up the UI
    disable_grid();
    game_model->fill_board(20);
    update_board_ui();

    // Map the grid buttons
    QSignalMapper *signalMapper = new QSignalMapper(this);
    signalMapper->setMapping(ui->p0_0, 0);
    signalMapper->setMapping(ui->p0_0, 0);
    signalMapper->setMapping(ui->p0_1, 1);
    signalMapper->setMapping(ui->p0_2, 2);
    signalMapper->setMapping(ui->p0_3, 3);
    signalMapper->setMapping(ui->p0_4, 4);
    signalMapper->setMapping(ui->p0_5, 5);
    signalMapper->setMapping(ui->p1_0, 6);
    signalMapper->setMapping(ui->p1_1, 7);
    signalMapper->setMapping(ui->p1_2, 8);
    signalMapper->setMapping(ui->p1_3, 9);
    signalMapper->setMapping(ui->p1_4, 10);
    signalMapper->setMapping(ui->p1_5, 11);
    signalMapper->setMapping(ui->p2_0, 12);
    signalMapper->setMapping(ui->p2_1, 13);
    signalMapper->setMapping(ui->p2_2, 14);
    signalMapper->setMapping(ui->p2_3, 15);
    signalMapper->setMapping(ui->p2_4, 16);
    signalMapper->setMapping(ui->p2_5, 17);
    signalMapper->setMapping(ui->p3_0, 18);
    signalMapper->setMapping(ui->p3_1, 19);
    signalMapper->setMapping(ui->p3_2, 20);
    signalMapper->setMapping(ui->p3_3, 21);
    signalMapper->setMapping(ui->p3_4, 22);
    signalMapper->setMapping(ui->p3_5, 23);
    signalMapper->setMapping(ui->p4_0, 24);
    signalMapper->setMapping(ui->p4_1, 25);
    signalMapper->setMapping(ui->p4_2, 26);
    signalMapper->setMapping(ui->p4_3, 27);
    signalMapper->setMapping(ui->p4_4, 28);
    signalMapper->setMapping(ui->p4_5, 29);
    signalMapper->setMapping(ui->p5_0, 30);
    signalMapper->setMapping(ui->p5_1, 31);
    signalMapper->setMapping(ui->p5_2, 32);
    signalMapper->setMapping(ui->p5_3, 33);
    signalMapper->setMapping(ui->p5_4, 34);
    signalMapper->setMapping(ui->p5_5, 35);

    connect(ui->p0_0, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p0_1, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p0_2, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p0_3, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p0_4, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p0_5, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p1_0, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p1_1, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p1_2, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p1_3, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p1_4, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p1_5, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p2_0, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p2_1, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p2_2, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p2_3, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p2_4, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p2_5, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p3_0, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p3_1, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p3_2, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p3_3, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p3_4, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p3_5, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p4_0, SIGNAL(clicked(bool)),
           signalMapper, SLOT(map()));
    connect(ui->p4_1, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p4_2, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p4_3, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p4_4, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p4_5, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p5_0, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p5_1, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p5_2, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p5_3, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p5_4, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));
    connect(ui->p5_5, SIGNAL(clicked(bool)),
            signalMapper, SLOT(map()));

    connect(signalMapper, SIGNAL(mapped(int)),
            SLOT(grid_block_clicked(int)));
}

GameSix::~GameSix(){
    delete ui;
    delete game_board;
    delete game_model;
    delete gameOvr;
}

void GameSix::enable_selectable_blocks() {
    if (game_board->get_block(0,0) != -1 && !game_board->is_selected(0,0)) ui->p0_0->setEnabled(true);
    if (game_board->get_block(0,1) != -1 && !game_board->is_selected(0,1)) ui->p0_1->setEnabled(true);
    if (game_board->get_block(0,2) != -1 && !game_board->is_selected(0,2)) ui->p0_2->setEnabled(true);
    if (game_board->get_block(0,3) != -1 && !game_board->is_selected(0,3)) ui->p0_3->setEnabled(true);
    if (game_board->get_block(0,4) != -1 && !game_board->is_selected(0,4)) ui->p0_4->setEnabled(true);
    if (game_board->get_block(0,5) != -1 && !game_board->is_selected(0,5)) ui->p0_5->setEnabled(true);
    if (game_board->get_block(1,0) != -1 && !game_board->is_selected(1,0)) ui->p1_0->setEnabled(true);
    if (game_board->get_block(1,1) != -1 && !game_board->is_selected(1,1)) ui->p1_1->setEnabled(true);
    if (game_board->get_block(1,2) != -1 && !game_board->is_selected(1,2)) ui->p1_2->setEnabled(true);
    if (game_board->get_block(1,3) != -1 && !game_board->is_selected(1,3)) ui->p1_3->setEnabled(true);
    if (game_board->get_block(1,4) != -1 && !game_board->is_selected(1,4)) ui->p1_4->setEnabled(true);
    if (game_board->get_block(1,5) != -1 && !game_board->is_selected(1,5)) ui->p1_5->setEnabled(true);
    if (game_board->get_block(2,0) != -1 && !game_board->is_selected(2,0)) ui->p2_0->setEnabled(true);
    if (game_board->get_block(2,1) != -1 && !game_board->is_selected(2,1)) ui->p2_1->setEnabled(true);
    if (game_board->get_block(2,2) != -1 && !game_board->is_selected(2,2)) ui->p2_2->setEnabled(true);
    if (game_board->get_block(2,3) != -1 && !game_board->is_selected(2,3)) ui->p2_3->setEnabled(true);
    if (game_board->get_block(2,4) != -1 && !game_board->is_selected(2,4)) ui->p2_4->setEnabled(true);
    if (game_board->get_block(2,5) != -1 && !game_board->is_selected(2,5)) ui->p2_5->setEnabled(true);
    if (game_board->get_block(3,0) != -1 && !game_board->is_selected(3,0)) ui->p3_0->setEnabled(true);
    if (game_board->get_block(3,1) != -1 && !game_board->is_selected(3,1)) ui->p3_1->setEnabled(true);
    if (game_board->get_block(3,2) != -1 && !game_board->is_selected(3,2)) ui->p3_2->setEnabled(true);
    if (game_board->get_block(3,3) != -1 && !game_board->is_selected(3,3)) ui->p3_3->setEnabled(true);
    if (game_board->get_block(3,4) != -1 && !game_board->is_selected(3,4)) ui->p3_4->setEnabled(true);
    if (game_board->get_block(3,5) != -1 && !game_board->is_selected(3,5)) ui->p3_5->setEnabled(true);
    if (game_board->get_block(4,0) != -1 && !game_board->is_selected(4,0)) ui->p4_0->setEnabled(true);
    if (game_board->get_block(4,1) != -1 && !game_board->is_selected(4,1)) ui->p4_1->setEnabled(true);
    if (game_board->get_block(4,2) != -1 && !game_board->is_selected(4,2)) ui->p4_2->setEnabled(true);
    if (game_board->get_block(4,3) != -1 && !game_board->is_selected(4,3)) ui->p4_3->setEnabled(true);
    if (game_board->get_block(4,4) != -1 && !game_board->is_selected(4,4)) ui->p4_4->setEnabled(true);
    if (game_board->get_block(4,5) != -1 && !game_board->is_selected(4,5)) ui->p4_5->setEnabled(true);
    if (game_board->get_block(5,0) != -1 && !game_board->is_selected(5,0)) ui->p5_0->setEnabled(true);
    if (game_board->get_block(5,1) != -1 && !game_board->is_selected(5,1)) ui->p5_1->setEnabled(true);
    if (game_board->get_block(5,2) != -1 && !game_board->is_selected(5,2)) ui->p5_2->setEnabled(true);
    if (game_board->get_block(5,3) != -1 && !game_board->is_selected(5,3)) ui->p5_3->setEnabled(true);
    if (game_board->get_block(5,4) != -1 && !game_board->is_selected(5,4)) ui->p5_4->setEnabled(true);
    if (game_board->get_block(5,5) != -1 && !game_board->is_selected(5,5)) ui->p5_5->setEnabled(true);
}

void GameSix::disable_grid(){
    ui->p0_0->setEnabled(false);
    ui->p0_1->setEnabled(false);
    ui->p0_2->setEnabled(false);
    ui->p0_3->setEnabled(false);
    ui->p0_4->setEnabled(false);
    ui->p0_5->setEnabled(false);
    ui->p1_0->setEnabled(false);
    ui->p1_1->setEnabled(false);
    ui->p1_2->setEnabled(false);
    ui->p1_3->setEnabled(false);
    ui->p1_4->setEnabled(false);
    ui->p1_5->setEnabled(false);
    ui->p2_0->setEnabled(false);
    ui->p2_1->setEnabled(false);
    ui->p2_2->setEnabled(false);
    ui->p2_3->setEnabled(false);
    ui->p2_4->setEnabled(false);
    ui->p2_5->setEnabled(false);
    ui->p3_0->setEnabled(false);
    ui->p3_1->setEnabled(false);
    ui->p3_2->setEnabled(false);
    ui->p3_3->setEnabled(false);
    ui->p3_4->setEnabled(false);
    ui->p3_5->setEnabled(false);
    ui->p4_0->setEnabled(false);
    ui->p4_1->setEnabled(false);
    ui->p4_2->setEnabled(false);
    ui->p4_3->setEnabled(false);
    ui->p4_4->setEnabled(false);
    ui->p4_5->setEnabled(false);
    ui->p5_0->setEnabled(false);
    ui->p5_1->setEnabled(false);
    ui->p5_2->setEnabled(false);
    ui->p5_3->setEnabled(false);
    ui->p5_4->setEnabled(false);
    ui->p5_5->setEnabled(false);
}

void GameSix::enable_operators(){
    ui->add->setEnabled(true);
    ui->subtract->setEnabled(true);
    ui->divide->setEnabled(true);
    ui->multiply->setEnabled(true);
    ui->equals->setEnabled(true);
}


void GameSix::disable_operators(){
    ui->add->setEnabled(false);
    ui->subtract->setEnabled(false);
    ui->divide->setEnabled(false);
    ui->multiply->setEnabled(false);
    ui->equals->setEnabled(false);
}

void GameSix::on_equals_clicked(){
    need_final_block = true;
    game_model->append("=");

    // Enable grid
    enable_selectable_blocks();

    // Disable operators
    disable_operators();
}

void GameSix::on_add_clicked(){
    // Update model
    game_model->append("+");
    update_formula_display();


    // Enable grid
    enable_selectable_blocks();

    // Disable operators
    disable_operators();
}

void GameSix::on_subtract_clicked(){
    // Update model
    game_model->append("-");

    update_formula_display();

    // Enable grid
    enable_selectable_blocks();

    // Disable operators
    disable_operators();
}

void GameSix::on_multiply_clicked(){
    // Update model
    game_model->append("*");

    update_formula_display();

    // Enable grid
    enable_selectable_blocks();

    // Disable operators
    disable_operators();
}

void GameSix::on_divide_clicked(){
    // Update model
    game_model->append("/");

    update_formula_display();


    // Enable grid
    enable_selectable_blocks();

    // Disable operators
    disable_operators();
}

void GameSix::grid_block_clicked(int val){
    QPushButton *button = (QPushButton*)((QSignalMapper*)sender())->mapping(val);

    // Prints the coordinates of the block
    int row = val/width;
    int col = val % height;
    std::cout << "Row: " << row << " Col: " << col << std::endl;

    // Prints the value of the block
    if (game_board->get_block(row, col) == -1){
        std::cout << "Block has nothing in it" << std::endl;
    } else {
        std::cout << "Value: " << game_board->get_block(row, col) << std::endl;
    }

    // Update the models
    game_model->add_block(row, col);


    // If we're still building our formula, business as usual
    if (!need_final_block) {

        // Make the number red
        button->setStyleSheet("QPushButton {color: rgb(200,0,0); font-size:32px;}");

        // TODO: Update the formula view
        std::cout << "Formula: " << game_model->get_formula() << std::endl;
        update_formula_display();

        // Enable operation entry
        enable_operators();

        // Disable the grid
        disable_grid();
    }
    // Otherwise, handle the formula
    else {
        PassValues result =  game_model->handle_formula(game_model->get_formula());

        // Clear the board if it's good
        if (result.get_pass()) {
            std::cout << "Clearing the board!" << std::endl;
            game_model->clear_selected_blocks();
        }
        else {
            std::cout << game_model->get_formula() << std::endl;
            std::cout << "INVALID" << std::endl;
            // Give feedback that it didn't work
        }
        update_formula_display();
        QTimer * timer = new QTimer(this);
        timer->singleShot(700, this, [=]{this->hide_formula();});

        //connect(a,SIGNAL(finished()),this,SLOT(hideThisWidget()));
        // Either way, reset the flag for a new formula, update UI
        game_model->clear_formula();
        game_model->deselect_all();
        need_final_block = false;
        update_board_ui();
    }
}

void GameSix::hide_formula() {
    std::cout << "trying to hide formula" << std::endl;
    QGraphicsOpacityEffect *eff = new QGraphicsOpacityEffect(this);
    ui->label->setGraphicsEffect(eff);
    QPropertyAnimation *a = new QPropertyAnimation(eff,"opacity");
    a->setDuration(2500);
    a->setStartValue(1);
    a->setEndValue(0);
    a->setEasingCurve(QEasingCurve::OutBack);
    a->start(QPropertyAnimation::DeleteWhenStopped);
    connect(a,&QPropertyAnimation::finished,this, [=](){
        update_formula_display();
        QGraphicsOpacityEffect *eff = new QGraphicsOpacityEffect(this);
        ui->label->setGraphicsEffect(eff);
        eff->setOpacity(1);
       std::cout << "tring to show" << std::endl;
    });
}

void GameSix::update_formula_display() {
    ui->label->setText(QString::fromStdString(game_model->get_formula()));
}

void GameSix::update_board_ui(){
    enable_selectable_blocks();

    ui->p0_0->setText((game_board->get_block(0,0) != -1) ? QString::number(game_board->get_block(0,0)) : "");
    ui->p0_1->setText((game_board->get_block(0,1) != -1) ? QString::number(game_board->get_block(0,1)) : "");
    ui->p0_2->setText((game_board->get_block(0,2) != -1) ? QString::number(game_board->get_block(0,2)) : "");
    ui->p0_3->setText((game_board->get_block(0,3) != -1) ? QString::number(game_board->get_block(0,3)) : "");
    ui->p0_4->setText((game_board->get_block(0,4) != -1) ? QString::number(game_board->get_block(0,4)) : "");
    ui->p0_5->setText((game_board->get_block(0,5) != -1) ? QString::number(game_board->get_block(0,5)) : "");
    ui->p1_0->setText((game_board->get_block(1,0) != -1) ? QString::number(game_board->get_block(1,0)) : "");
    ui->p1_1->setText((game_board->get_block(1,1) != -1) ? QString::number(game_board->get_block(1,1)) : "");
    ui->p1_2->setText((game_board->get_block(1,2) != -1) ? QString::number(game_board->get_block(1,2)) : "");
    ui->p1_3->setText((game_board->get_block(1,3) != -1) ? QString::number(game_board->get_block(1,3)) : "");
    ui->p1_4->setText((game_board->get_block(1,4) != -1) ? QString::number(game_board->get_block(1,4)) : "");
    ui->p1_5->setText((game_board->get_block(1,5) != -1) ? QString::number(game_board->get_block(1,5)) : "");
    ui->p2_0->setText((game_board->get_block(2,0) != -1) ? QString::number(game_board->get_block(2,0)) : "");
    ui->p2_1->setText((game_board->get_block(2,1) != -1) ? QString::number(game_board->get_block(2,1)) : "");
    ui->p2_2->setText((game_board->get_block(2,2) != -1) ? QString::number(game_board->get_block(2,2)) : "");
    ui->p2_3->setText((game_board->get_block(2,3) != -1) ? QString::number(game_board->get_block(2,3)) : "");
    ui->p2_4->setText((game_board->get_block(2,4) != -1) ? QString::number(game_board->get_block(2,4)) : "");
    ui->p2_5->setText((game_board->get_block(2,5) != -1) ? QString::number(game_board->get_block(2,5)) : "");
    ui->p3_0->setText((game_board->get_block(3,0) != -1) ? QString::number(game_board->get_block(3,0)) : "");
    ui->p3_1->setText((game_board->get_block(3,1) != -1) ? QString::number(game_board->get_block(3,1)) : "");
    ui->p3_2->setText((game_board->get_block(3,2) != -1) ? QString::number(game_board->get_block(3,2)) : "");
    ui->p3_3->setText((game_board->get_block(3,3) != -1) ? QString::number(game_board->get_block(3,3)) : "");
    ui->p3_4->setText((game_board->get_block(3,4) != -1) ? QString::number(game_board->get_block(3,4)) : "");
    ui->p3_5->setText((game_board->get_block(3,5) != -1) ? QString::number(game_board->get_block(3,5)) : "");
    ui->p4_0->setText((game_board->get_block(4,0) != -1) ? QString::number(game_board->get_block(4,0)) : "");
    ui->p4_1->setText((game_board->get_block(4,1) != -1) ? QString::number(game_board->get_block(4,1)) : "");
    ui->p4_2->setText((game_board->get_block(4,2) != -1) ? QString::number(game_board->get_block(4,2)) : "");
    ui->p4_3->setText((game_board->get_block(4,3) != -1) ? QString::number(game_board->get_block(4,3)) : "");
    ui->p4_4->setText((game_board->get_block(4,4) != -1) ? QString::number(game_board->get_block(4,4)) : "");
    ui->p4_5->setText((game_board->get_block(4,5) != -1) ? QString::number(game_board->get_block(4,5)) : "");
    ui->p5_0->setText((game_board->get_block(5,0) != -1) ? QString::number(game_board->get_block(5,0)) : "");
    ui->p5_1->setText((game_board->get_block(5,1) != -1) ? QString::number(game_board->get_block(5,1)) : "");
    ui->p5_2->setText((game_board->get_block(5,2) != -1) ? QString::number(game_board->get_block(5,2)) : "");
    ui->p5_3->setText((game_board->get_block(5,3) != -1) ? QString::number(game_board->get_block(5,3)) : "");
    ui->p5_4->setText((game_board->get_block(5,4) != -1) ? QString::number(game_board->get_block(5,4)) : "");
    ui->p5_5->setText((game_board->get_block(5,5) != -1) ? QString::number(game_board->get_block(5,5)) : "");
    QString style = "*{"
            "font-size:32px;"
            "font-weight: bold;"
            "color: black;"
            "}"
            ":hover{"
            "color: green;"
            "}";
    if (!game_board->is_selected(0,0)) ui->p0_0->setStyleSheet(style);
    if (!game_board->is_selected(0,1)) ui->p0_1->setStyleSheet(style);
    if (!game_board->is_selected(0,2)) ui->p0_2->setStyleSheet(style);
    if (!game_board->is_selected(0,3)) ui->p0_3->setStyleSheet(style);
    if (!game_board->is_selected(0,4)) ui->p0_4->setStyleSheet(style);
    if (!game_board->is_selected(0,5)) ui->p0_5->setStyleSheet(style);
    if (!game_board->is_selected(1,0)) ui->p1_0->setStyleSheet(style);
    if (!game_board->is_selected(1,1)) ui->p1_1->setStyleSheet(style);
    if (!game_board->is_selected(1,2)) ui->p1_2->setStyleSheet(style);
    if (!game_board->is_selected(1,3)) ui->p1_3->setStyleSheet(style);
    if (!game_board->is_selected(1,4)) ui->p1_4->setStyleSheet(style);
    if (!game_board->is_selected(1,5)) ui->p1_5->setStyleSheet(style);
    if (!game_board->is_selected(2,0)) ui->p2_0->setStyleSheet(style);
    if (!game_board->is_selected(2,1)) ui->p2_1->setStyleSheet(style);
    if (!game_board->is_selected(2,2)) ui->p2_2->setStyleSheet(style);
    if (!game_board->is_selected(2,3)) ui->p2_3->setStyleSheet(style);
    if (!game_board->is_selected(2,4)) ui->p2_4->setStyleSheet(style);
    if (!game_board->is_selected(2,5)) ui->p2_5->setStyleSheet(style);
    if (!game_board->is_selected(3,0)) ui->p3_0->setStyleSheet(style);
    if (!game_board->is_selected(3,1)) ui->p3_1->setStyleSheet(style);
    if (!game_board->is_selected(3,2)) ui->p3_2->setStyleSheet(style);
    if (!game_board->is_selected(3,3)) ui->p3_3->setStyleSheet(style);
    if (!game_board->is_selected(3,4)) ui->p3_4->setStyleSheet(style);
    if (!game_board->is_selected(3,5)) ui->p3_5->setStyleSheet(style);
    if (!game_board->is_selected(4,0)) ui->p4_0->setStyleSheet(style);
    if (!game_board->is_selected(4,1)) ui->p4_1->setStyleSheet(style);
    if (!game_board->is_selected(4,2)) ui->p4_2->setStyleSheet(style);
    if (!game_board->is_selected(4,3)) ui->p4_3->setStyleSheet(style);
    if (!game_board->is_selected(4,4)) ui->p4_4->setStyleSheet(style);
    if (!game_board->is_selected(4,5)) ui->p4_5->setStyleSheet(style);
    if (!game_board->is_selected(5,0)) ui->p5_0->setStyleSheet(style);
    if (!game_board->is_selected(5,1)) ui->p5_1->setStyleSheet(style);
    if (!game_board->is_selected(5,2)) ui->p5_2->setStyleSheet(style);
    if (!game_board->is_selected(5,3)) ui->p5_3->setStyleSheet(style);
    if (!game_board->is_selected(5,4)) ui->p5_4->setStyleSheet(style);
    if (!game_board->is_selected(5,5)) ui->p5_5->setStyleSheet(style);
}

void GameSix::closeGame(){
    this->close();
}

void GameSix::startGame(){
    this->close();
}

// Change Score
void GameSix::changeScore(int scre){
    score = scre;
    ui->score->setText((QString) scre);
}

// End game pop up, saves then ask to play again or exit
void GameSix::gameEnd(){
    gameOvr = new GameOver(this, userName, score);
    gameOvr->setModal(true);
    gameOvr->exec();
}

void GameSix::on_p0_0_clicked(){
    gameEnd();
}

void GameSix::on_pushButton_2_clicked(){
    this->close();
}
