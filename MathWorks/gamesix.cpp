#include "gamesix.h"
#include "ui_gamesix.h"
#include "gameover.h"
#include "ui_gameover.h"
#include <QPushButton>
#include <iostream>
#include <QSignalMapper>

// Constructor and destructor
GameSix::GameSix(QWidget *parent, QString usrName) : QDialog(parent), ui(new Ui::GameSix){
    ui->setupUi(this);

    // Default score
    score = 0;
    userName = usrName;
    changeScore(score);

    // Timer
    /* TODO: Impliment timer that syncs with game*/

    // Create game models
    game_board = new GameBoardModel(width, height);
    game_model = new MathGameModel(game_board);

    // Set up the UI
    disable_grid();
    game_model->fill_board(20);
    update_board_ui();
    enable_selectable_blocks();


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

    // Enable grid
    enable_selectable_blocks();

    // Disable operators
    disable_operators();
}

void GameSix::on_subtract_clicked(){
    // Update model
    game_model->append("-");

    // Enable grid
    enable_selectable_blocks();

    // Disable operators
    disable_operators();
}

void GameSix::on_multiply_clicked(){
    // Update model
    game_model->append("*");

    // Enable grid
    enable_selectable_blocks();

    // Disable operators
    disable_operators();
}

void GameSix::on_divide_clicked(){
    // Update model
    game_model->append("/");

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
        button->setStyleSheet("color: rgb(200,0,0); font-size:32px");

        // TODO: Update the formula view
        std::cout << "Formula: " << game_model->get_formula() << std::endl;

        // Enable operation entry
        enable_operators();

        // Disable the grid
        disable_grid();
    }
    // Otherwise, handle the formula
    else {
        bool is_good = true;
        // TODO: call game_model->handle_formula(game_model->get_formula())
        game_model->handle_formula(game_model->get_formula());
        game_model->clear_formula();

        // Clear the board and if it's good
        if (is_good) {
            std::cout << "Clearing the board!" << std::endl;
            game_model->clear_selected_blocks();
        }

        // Either way, reset the flag for a new formula, update UI
        update_board_ui();
        need_final_block = false;
    }
}


void GameSix::update_board_ui(){
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
    ui->p5_5->setText((game_board->get_block(5,5) != -1) ? QString::number(game_board->get_block(5,5)) : "");}

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
