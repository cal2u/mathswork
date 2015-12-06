/*
 * MathGameModel.h
 *
 *  Created on: Nov 19, 2015
 *      Author: Matt
 */

#include "boardmodel.h"
#include "passvalues.h"
#include <string>
#include <vector>
#include <stack>
#include <math.h>
#include <iostream>
#ifndef MATHGAMEMODEL_H_
#define MATHGAMEMODEL_H_

class MathGameModel {
private:
	GameBoardModel* 	board_model;
    int                 difficulty;
	long		        current_time; // Not quite sure if necessary
	std::vector<std::string>     formula;
	std::vector<int> arrayofnumbers;//contains all the operators
	std::vector<char> arrayofchars;//contains all the numbers

    std::stack<int> selected_block_list;

public:
    MathGameModel(GameBoardModel *board_model);

	/* Used to figure out how many digits a number has in the given formula*/
	int findLengthofNum(std::string formula, unsigned int index);//unsigned to make less compiler warnings, not important

	/*Used to find the length of operator signs. SHOULD only be 1 between two numbers, so this checks for that*/
	int findLengthofOper(std::string formula, unsigned int index);

	/*Creates a number after figuring out how many digits it has from findLenthofNum function*/
	int generateNumber(std::string formula, int index, int length);

	/*Function that calculates each operation and number from given formula, to check if the result is found in the grid*/
	double CalculateNumber(double originalnum, double num, char oper);

	/*Another debug function; can remove later after testing completed*/
	void printVector(std::vector<char> array, std::vector<int> array2);

    // Handles a block beging clicked
    void add_block(int row, int col);

    // Removes last block clicked from formula
    void remove_block();

    // Resets blocks that are selected
    void clear_selected_blocks();

	/* Try to clear tiles from the board used in the given formula.
	   Return true if valid, else false */
	PassValues handle_formula(std::string formula);

    void clear_formula();

    // Returns a string representation of the formula
    std::string get_formula();

	/* Fill the board with new numbers at the beginning of the game */
    bool fill_board(int num_to_fill);

	/* Removes the last num or operator from the formula */
	void dequeue();

	/* Adds a num or operator to the formula */
	void append(std::string numop);

    void undo_last_move();

    // Deselects all the blocks
    void deselect_all();

	/* Fills in more grid squares based on game mode and difficulty */
	void tick();
};

 /* namespace std */

#endif /* MATHGAMEMODEL_H_ */
