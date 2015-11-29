/*
 * MathGameModel.h
 *
 *  Created on: Nov 19, 2015
 *      Author: Matt
 */

#include "boardmodel.h"
#include <string>
#ifndef MATHGAMEMODEL_H_
#define MATHGAMEMODEL_H_

class MathGameModel {
private:
	GameBoardModel* 	board_model;
	int			difficulty;
	long		time; // Not quite sure if necessary
	std::string 		formula;

public:
	/* Try to clear tiles from the board used in the given formula.
	   Return true if valid, else false */
	bool handle_formula(std::string formula);

	/* Fill the board with new numbers at the beginning of the game */
	void fill_board();

	/* Removes the last num or operator from the formula */
	void dequeue();

	/* Adds a num or operator to the formula */
	void append(std::string);

	/* Fills in more grid squares based on game mode and difficulty */
	void tick();
};

 /* namespace std */

#endif /* MATHGAMEMODEL_H_ */
