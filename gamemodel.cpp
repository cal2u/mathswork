/*
 * MathGameModel.cpp
 *
 *  Created on: Nov 19, 2015
 *      Author: Matt
 */
#include <cstdlib>
#include <ctime>
#include <vector>
#include "gamemodel.h"

// Seed the random number generator with the current time
MathGameModel::MathGameModel()
{
    srand((unsigned)time(0));
}

/* Try to clear tiles from the board used in the given formula.
   Return true if valid, else false */
bool MathGameModel::handle_formula(std::string formula)
{
    return true;
}

/* Fill empty spaces with random numbers at the given ratio */
void MathGameModel::fill_board(int num_to_fill)
{
    // ratio determines how many blocks are filled
    int num_to_fill = ratio * board_model->num_empty_blocks();
    int num_total_blocks = board_model->get_width() * board_model->get_height();

    while (num_to_fill > 0)
    {
        int rand_spot = rand() % num_total_blocks;    
        int row = rand_spot / board_model->get_width();
        int col = rand_spot % board_model->get_width();
        
        // Keep picking random blocks until we find
        // an empty one
        while (board_model->get_block(row, col) != -1)
        {
            rand_spot = rand() % num_total_blocks;
            row = rand_spot / board_model->get_width();
            col = rand_spot % board_model->get_width();
        }

        // We have a space to fill:
        // generate a random number between 1 and 20
        int value = rand() % 20 + 1;

        board_model->set_block(row, col, value);
        num_to_fill -= 1;
    }
}

/* Removes the last num or operator from the formula */
void MathGameModel::dequeue()
{
    formula.pop_back();
}

/* Adds a number or operator to the formula */
void MathGameModel::append(std::string numop)
{
    formula.push_back(numop);
}

/* Returns a string representation of the formula */
std::string MathGameModel::get_formula()
{
    std::string formula_string = std::string();

    std::vector<std::string>::iterator iter = formula.begin();
    while (iter != formula.end())
    {
        formula_string += *iter;
        iter++;
    }
    return formula_string;
}

/* Fills in more grid squares based on game mode and difficulty */
void tick()
{

}
 /* namespace std */
