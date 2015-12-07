#include "gamesix.h"
#include "ui_gamesix.h"
#include "gameover.h"
#include "gamemodel.h"
#include "ui_gameover.h"
#include "mathgametimer.h"
#include <QPushButton>
#include <QGraphicsOpacityEffect>
 #include <QTimer>
#include <iostream>
#include <QSignalMapper>

// Constructor and destructor for main game interface
GameSix::GameSix(QWidget *parent, QString usrName) : QDialog(parent), ui(new Ui::GameSix){
    ui->setupUi(this);

    // Default score
    score = 0;
    userName = usrName;
    changeScore((float)score);
    need_number = true;
    music = new QSound(":/resources/sounds/mathworks.wav");
    music->play();
    music->setLoops(QSound::Infinite);

    // Create game models
    game_board = new GameBoardModel(width, height);
    game_model = new MathGameModel(game_board);

    // Timer
    timer = new MathGameTimer(1000, game_model, this);
    timer->startGameTimer();

    // Set up the UI
    disable_grid();
    disable_operators();
    game_model->fill_board(20);
    update_board_ui();


    // Timer for animation
    animation_timer = new QTimer(this);
    animation_timer->setSingleShot(true);
    formula_opacity= new QGraphicsOpacityEffect(this);
    ui->label->setGraphicsEffect(formula_opacity);

    formula_animator = new QPropertyAnimation(formula_opacity,"opacity");
    formula_animator->setDuration(ANIMATION_DURATION);
    formula_animator->setStartValue(1);
    formula_animator->setEndValue(0);
    formula_animator->setEasingCurve(QEasingCurve::OutQuart);


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
    std::cout << "words (destructor)" << std::endl;
    delete ui;
    delete game_board;
    delete game_model;
    delete gameOvr;
    delete animation_timer;
    delete timer;
    delete music;
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

// Remove the last operator or number from the formula
void GameSix::on_undo_clicked(){
    if (game_model->get_formula() != "") {
        need_final_block = false;

        //std::cout << ((need_number) ? "Need number" : "Need operator") << std::endl;

        if (game_model->get_formula() != "") {
            need_number = !need_number;
        }
        game_model->undo_last_move();
        update_board_ui();
        update_formula_display();

        if (need_number) {
            disable_operators();
        } else {
            disable_grid();
            enable_operators();
        }
    }

    //std::cout << ((need_number) ? "Need number" : "Need operator") << std::endl;

}

// Clear all the blocks and operations
void GameSix::on_clear_clicked(){
    need_number = true;
    game_model->deselect_all();
    game_model->clear_formula();
    update_board_ui();
    update_formula_display();
    disable_operators();
}

void GameSix::on_equals_clicked(){
    need_final_block = true;
    need_number = true;

    game_model->append("=");
    update_formula_display();
    // Enable grid
    enable_selectable_blocks();

    // Disable operators
    disable_operators();
}

void GameSix::on_add_clicked(){
    // Update model
    need_number = true;
    game_model->append("+");
    update_formula_display();


    // Enable grid
    enable_selectable_blocks();

    // Disable operators
    disable_operators();
}

void GameSix::on_subtract_clicked(){
    need_number = true;

    // Update model
    game_model->append("-");

    update_formula_display();

    // Enable grid
    enable_selectable_blocks();

    // Disable operators
    disable_operators();
}

void GameSix::on_multiply_clicked(){
    need_number = true;

    // Update model
    game_model->append("*");

    update_formula_display();

    // Enable grid
    enable_selectable_blocks();

    // Disable operators
    disable_operators();
}

void GameSix::on_divide_clicked(){
    need_number = true;

    // Update model
    game_model->append("/");

    update_formula_display();


    // Enable grid
    enable_selectable_blocks();

    // Disable operators
    disable_operators();
}

// Event handler for when a block is clicked
void GameSix::grid_block_clicked(int val){
    QPushButton *button = (QPushButton*)((QSignalMapper*)sender())->mapping(val);
    need_number = false;

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
        ui->label->setStyleSheet("color: black;");


        // TODO: Update the formula view
        std::cout << "Formula: " << game_model->get_formula() << std::endl;
        update_formula_display();
        std::cout << "Checking if timer is active." << std::endl;
        if (animation_timer->isActive()) {
            std::cout << "Yup, trying to stop it." << std::endl;
            animation_timer->stop();
        } else {
            std::cout << "Stopping animator" << std::endl;
            formula_animator->stop();
            std::cout << "Stop successful" << std::endl;
            formula_opacity->setOpacity(1);
        }

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
            ui->label->setStyleSheet("color: green");
            awardPoints(result);

        }
        else {
            std::cout << game_model->get_formula() << std::endl;
            std::cout << "INVALID" << std::endl;
            // Give feedback that it didn't work
            ui->label->setStyleSheet("color: red");

        }

        std::cout << "Checking if timer is active." << std::endl;
        if (animation_timer->isActive()) {
            std::cout << "Yup, trying to stop it." << std::endl;
            animation_timer->stop();
        }
        else {
            std::cout << "Stopping animator" << std::endl;
            formula_animator->stop();
            std::cout << "Stop successful" << std::endl;
            formula_opacity->setOpacity(1);
        }

        update_formula_display();
        connect(animation_timer, &QTimer::timeout, [=]{this->hide_formula();});
        animation_timer->start(ANIMATION_DELAY);

        game_model->clear_formula();
        game_model->deselect_all();
        need_final_block = false;
        need_number = true;
        update_board_ui();
    }
}

void GameSix::hide_formula() {
    std::cout << "trying to hide formula" << std::endl;
    formula_animator->start(QPropertyAnimation::KeepWhenStopped);
}

void GameSix::update_formula_display() {
    ui->label->setText(QString::fromStdString(game_model->get_formula()));
}

void GameSix::update_board_ui(){
    disable_grid();
    if (need_number)
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
    timer->stop();
    this->close();
}

void GameSix::startGame(){
    this->close();
}

// Change Score
void GameSix::changeScore(float scre){
    score += scre;
//    ui->score->setText((QString) scre);
    ui->score->setText(QString::fromStdString(std::to_string((int)score)));
    std::cout << score << std::endl;
}

// Change Time
void GameSix::changeTime(int time) {
    ui->timer->setText((QString) time);
}

// End game pop up, saves then ask to play again or exit
void GameSix::gameEnd(){
    music->stop();
    gameOvr = new GameOver(this, userName, score);
    gameOvr->setModal(true);
    gameOvr->exec();

}

//void GameSix::on_p0_0_clicked(){
//    gameEnd();
//}

void GameSix::on_pushButton_2_clicked(){
    closeGame();
}

//award a number of points based on the complexity of the formula
void GameSix::awardPoints(PassValues result){
//    int numberScore = result.get_unique() + (result.get_similar()/2+1);
    int addScore = result.get_add();
    int subScore = result.get_sub();
    int multScore = 2*result.get_mult();
    int divScore = 3*result.get_divi();
    int chainLength = result.get_add()+result.get_sub()+result.get_mult()+result.get_divi();
    float lengthFactor = 1+(float)(chainLength)/10.0;

    int rawScore = addScore+subScore+multScore+divScore;

    float adjustedScore = (float)rawScore*lengthFactor;

    changeScore(adjustedScore);
//    std::cout << result.get_unique() << ", " << result.get_similar() << ", " << std::endl;
//    std::cout << numberScore << ", " << addScore << ", " << subScore << ", " << multScore << ", " << divScore << ", " << chainLength << ", " << lengthFactor << ", " << std::endl;

}

void GameSix::reject() {
    closeGame();
    QDialog::reject();
}
