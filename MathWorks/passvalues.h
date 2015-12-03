/*
 * passvalues.h
 *
 *  Created on: Dec 2, 2015
 *      Author: Matt
 */

#ifndef PASSVALUES_H_
#define PASSVALUES_H_
#include <vector>


class PassValues {

private:
int numofaddition;
int numofsubtraction;
int numofmultiplication;
int numofdivision;

int numofunique;
int numofsimilar;//maybe extra points for using the same number multiple times? no clue

bool passed;

public:

	//constructor; should need: 1. Vector's from gamemodel.cpp. Does all the heavy lifting in this one constructor; no extra methods needed
	PassValues(std::vector<int> arrayofnumbers, std::vector<char> arrayofchars, bool passed);

	//get-ers to return class values. get_add returns number of plus operators, get_sub returns number of subtraction operators, etc.
	int get_add();
	int get_sub();
	int get_mult();
	int get_divi();

	bool get_pass();//gets whether it passed or not
};


#endif /* PASSVALUES_H_ */
