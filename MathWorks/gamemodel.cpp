/*
 * MathGameModel.cpp
 *
 *  Created on: Nov 19, 2015
 *      Author: Matt
 */
#include <cstdlib>
#include <ctime>
#include <vector>
#include <sstream>
#include "gamemodel.h"

// Seed the random number generator with the current time
MathGameModel::MathGameModel(GameBoardModel *board_model)
{
	srand(time(0));
    MathGameModel::board_model = board_model;
}

// Removes the last operation or number from the current formula,
// Deselcting the block
void MathGameModel::undo_last_move()
{
    if (formula.size() > 0)
    {
        std::string last = formula.back();
        std::cout << "last: " << last << std::endl;
        formula.pop_back();
        if (last != "*" && last != "/" && last != "+" && last != "-" && last != "=")
        {
            int val = selected_block_list.top();
            selected_block_list.pop();
            std::cout << val/board_model->get_width() << " " << val%board_model->get_width() << std::endl;
            board_model->deselect_block(val/board_model->get_width(), val % board_model->get_width());
        }
    }
}

// Helper method to return the length of the number in the formula at the given index
int MathGameModel::findLengthofNum(std::string formula, unsigned int index)
{
	char t = formula[index];
		if (index != formula.length()-1)//handle end case element
		{
			 if (t == '0')
			 {
				 return 1+findLengthofNum(formula, index+1);
			 }
			 else if(t == '1')
			 {
				 return 1+findLengthofNum(formula, index+1);
			 }
			 else if(t == '2')
			 {
				 return 1+findLengthofNum(formula, index+1);
			 }
			 else if(t == '3')
			 {
				 return 1+findLengthofNum(formula, index+1);
			 }
			 else if(t == '4')
			 {
				 return 1+findLengthofNum(formula, index+1);
			 }
			 else if(t == '5')
			 {
				 return 1+findLengthofNum(formula, index+1);
			 }
			 else if(t == '6')
			 {
				 return 1+findLengthofNum(formula, index+1);
			 }
			 else if(t == '7')
			 {
				 return 1+findLengthofNum(formula, index+1);
			 }
			 else if(t == '8')
			 {
				 return 1+findLengthofNum(formula, index+1);
			 }
			 else if(t == '9')
			 {
				 return 1+findLengthofNum(formula, index+1);
			 }
			 else
			 {
				 return 0;
			 }
		}
		else
		{
			 if (t == '0')
				 {
				 	 return 1;
				 }
				 else if(t == '1')
				 {
					 return 1;
				 }
				 else if(t == '2')
				 {
					 return 1;
				 }
				 else if(t == '3')
				 {
				 	 return 1;
				 }
				 else if(t == '4')
				 {
				 	 return 1;
				 }
				 else if(t == '5')
				 {
				 	 return 1;
				 }
				 else if(t == '6')
				 {
				 	 return 1;
				 }
				 else if(t == '7')
				 {
				 	 return 1;
				 }
				 else if(t == '8')
				 {
				 	 return 1;
				 }
				 else if(t == '9')
				 {
				 	 return 1;
				 }
		}
	return 0;
}

// Returns the number of operators in the string, starting from the given index
int MathGameModel::findLengthofOper(std::string formula, unsigned int index)
{
	char t = formula[index];
		if (index != formula.length()-1)//handle end case element
		{
			 if (t == 42)
			 {
				 return 1+findLengthofOper(formula, index+1);
			 }
			 else if(t == 47)
			 {
				 return 1+findLengthofOper(formula, index+1);
			 }
			 else if(t == 43)
			 {
				 return 1+findLengthofOper(formula, index+1);
			 }
			 else if(t == 45)
			 {
				 return 1+findLengthofOper(formula, index+1);
			 }
			 else if (t == 61)
			 {
				return 1+findLengthofOper(formula, index+1);;
			 }
			 else
			 {
				return 0;
			 }
		}
		return 0;
}

// Returns the integer in the formula at the given index
int MathGameModel::generateNumber(std::string formula, int index, int length)
{
int temp = length;
int number = 0;
	for (int i = index; i < index+length; ++i)
	{
		char t = formula[i];
			 if (t == '0')
			 {
					number = number + 0*pow(10,temp-1);//constructs the number with correct digits.
					temp -= 1;
			 }
			 else if(t == '1')
			 {
				 number = number + 1*pow(10,temp-1);//constructs the number with correct digits.
				 temp -= 1;
			 }
			 else if(t == '2')
			 {
				 number = number + 2*pow(10,temp-1);//constructs the number with correct digits.
				 temp -= 1;
			 }
			 else if(t == '3')
			 {
				 number = number + 3*pow(10,temp-1);//constructs the number with correct digits.
				 temp -= 1;
			 }
			 else if(t == '4')
			 {
				 number = number + 4*pow(10,temp-1);//constructs the number with correct digits.
				 temp -= 1;
			 }
			 else if(t == '5')
			 {
				 number = number + 5*pow(10,temp-1);//constructs the number with correct digits.
				 temp -= 1;
			 }
			 else if(t == '6')
			 {
				 number = number + 6*pow(10,temp-1);//constructs the number with correct digits.
				 temp -= 1;
			 }
			 else if(t == '7')
			 {
				 number = number + 7*pow(10,temp-1);//constructs the number with correct digits.
				 temp -= 1;
			 }
			 else if(t == '8')
			 {
				 number = number + 8*pow(10,temp-1);//constructs the number with correct digits.
				 temp -= 1;
			 }
			 else if(t == '9')
			 {
				 number = number + 9*pow(10,temp-1);//constructs the number with correct digits.
				 temp -= 1;
			 }
	}
	//determine if number is used too many times
	int used = 0;
    for (size_t i = 0; i < MathGameModel::arrayofnumbers.size(); ++i)
	{
		if (number == MathGameModel::arrayofnumbers[i])
		{
		used += 1;//finds number of time 'number' has been used already
		}
	}
	int repeats = 0;
    for (int u = 0; u < MathGameModel::board_model->get_gridsize();++u)
	{
		if (MathGameModel::board_model->get_blocks(u) == number)
		{
		repeats += 1;//finds number of times number appears in grid
		}
	}

	if (used < repeats)
	{
	return number;
	}
	else
	{
	return -1;//special error code; causes parent function to return false as it can never be -1
	}
}

// Helper method for printing out two vectors
void MathGameModel::printVector(std::vector<char> array, std::vector<int> array2)
{
	for (unsigned int i = 0; i < array.size(); ++i)
	{
		std::cout << array[i] << std::endl;
	}
	for (unsigned int i = 0; i < array2.size(); ++i)
	{
		std::cout << array2[i] << std::endl;
	}
}

// calculates the reult of an operation on two numbers
double MathGameModel::CalculateNumber(double originalnum, double num, char oper)
{
	if (oper == '+')
	{
	originalnum += num;
	}
	else if (oper == '-')
	{
	originalnum -= num;
	}
	else if (oper == '/')
	{
	originalnum = originalnum / num;
	}
	else if (oper == '*')
	{
	originalnum = originalnum * num;
	}
return originalnum;
}

// Adds the value of given block to the end of the formula
void MathGameModel::add_block(int row, int col)
{
    board_model->select_block(row, col);
   // append(std::to_string(board_model->get_block(row,col)));
    std::ostringstream ss;
    ss << board_model->get_block(row,col);
    append(ss.str());
    selected_block_list.push(row*board_model->get_width()+col);
}

// Removes the last block from the end of the formulaa
void MathGameModel::remove_block()
{
    int val = selected_block_list.top();
    selected_block_list.pop();
    int row = val/board_model->get_width();
    int col = val%board_model->get_width();
    board_model->deselect_block(row, col);
}

/* Try to clear tiles from the board used in the given formula.
   Return true if valid, else false */
PassValues MathGameModel::handle_formula(std::string formula) {
//Step 1: break down the string into a math expression
	MathGameModel::arrayofnumbers.clear();
	MathGameModel::arrayofchars.clear();
	for (unsigned int i = 0; i < formula.length(); ++i)
	{
	char t = formula[i];
		if (i == 0)//handle first element
		{
			 if (t == '0')
			 {
				 int numlength = findLengthofNum(formula, i);
				 	 if (numlength > 0)
				 	 {
					 int finalnumber = generateNumber(formula, i, numlength);
					 	 if (finalnumber != -1)
					 	 {
					 	 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 	 i += numlength-1;
					 	 }
					 	 else
					 	 {
								PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
								return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 	 }
				 	 }
			 }
			 else if(t == '1')
			 {
				int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
			 	 }
			 }
			 else if(t == '2')
			 {
				 int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
			 	 }
			 }
			 else if(t == '3')
			 {
				 int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
			 	 }
			 }
			 else if(t == '4')
			 {
				 int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
			 	 }
			 }
			 else if(t == '5')
			 {
				 int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
			 	 }
			 }
			 else if(t == '6')
			 {
				 int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
			 	 }
			 }
			 else if(t == '7')
			 {
				 int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
			 	 }
			 }
			 else if(t == '8')
			 {
				 int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
			 	 }
			 }
			 else if(t == '9')
			 {
				 int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
			 	 }
			 }
			 else//first element in formula HAS to be a number, otherwise should return false as nonvalid
			 {
					PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
					return *values;//couldnt find the number being used in the gameboard, so invalid
			 }
		}
		else
		{
			 if (t == '0')
			 {
				 int numlength = findLengthofNum(formula, i);
					 if (numlength > 0)
					 {
					 int finalnumber = generateNumber(formula, i, numlength);
						 if (finalnumber != -1)
						 {
						 MathGameModel::arrayofnumbers.push_back(finalnumber);
						 i += numlength-1;
						 }
						 else
						 {
								PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
								return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
						 }
					 }
			 }
			 else if(t == '1')
			 {
				int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
				 }
			 }
			 else if(t == '2')
			 {
				 int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
				 }
			 }
			 else if(t == '3')
			 {
				 int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
				 }
			 }
			 else if(t == '4')
			 {
				 int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
				 }
			 }
			 else if(t == '5')
			 {
				 int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
				 }
			 }
			 else if(t == '6')
			 {
				 int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
				 }
			 }
			 else if(t == '7')
			 {
				 int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
				 }
			 }
			 else if(t == '8')
			 {
				 int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
				 }
			 }
			 else if(t == '9')
			 {
				 int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
					 if (finalnumber != -1)
					 {
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
					 else
					 {
							PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
							return *values;//couldnt find the number being used in the gameboard, so invalid//number used was used too many times, so invalid
					 }
				 }
			 }
			 else if(t == 42)
			 {
				 int numlength = findLengthofOper(formula, i);
				 if (numlength == 1)
				 {
					MathGameModel::arrayofchars.push_back(t);
				 }
				 else
				 {
						PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
						return *values;//couldnt find the number being used in the gameboard, so invalid
				 }
			 }
			 else if(t == 47)
			 {
				 int numlength = findLengthofOper(formula, i);
				 if (numlength == 1)
				 {
					MathGameModel::arrayofchars.push_back('/');
				 }
				 else
				 {
						PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
						return *values;//couldnt find the number being used in the gameboard, so invalid
				 }
			 }
			 else if(t == 43)
			 {
				 int numlength = findLengthofOper(formula, i);
				 if (numlength == 1)
				 {
					MathGameModel::arrayofchars.push_back('+');
				 }
				 else
				 {
						PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
						return *values;//couldnt find the number being used in the gameboard, so invalid
				 }
			 }
			 else if(t == 45)
			 {
				 int numlength = findLengthofOper(formula, i);
				 if (numlength == 1)
				 {
					MathGameModel::arrayofchars.push_back('-');
				 }
				 else
				 {
						PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
						return *values;//couldnt find the number being used in the gameboard, so invalid
				 }
			 }
			else if(t == 61)
			{
			int numlength = findLengthofOper(formula, i);
				if (numlength == 1 && i != formula.length()-1)//makes sure there is a result/number after equals sign
				{
				int distfromend = findLengthofNum(formula, i+1);
					if (i == formula.length()-distfromend-1)//checks to make sure '=' is before the LAST number
					{
						MathGameModel::arrayofchars.push_back('=');
					}
					else
					{
						PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
						return *values;//couldnt find the number being used in the gameboard, so invalid
					}
				}
				else
				{
					PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
					return *values;//couldnt find the number being used in the gameboard, so invalid
				}
			}
		}
	}
	//now time to check the result of the equation matches a number from the table, using left to right operations instead of order of operations.
		double number;
		for (unsigned int i = 0; i < MathGameModel::arrayofnumbers.size()-1; ++i)
		{
			if (i == 0)
			{
			number = double(MathGameModel::arrayofnumbers[i]);
			}
			else
			{
			double originalnum = number;
			double addnum = MathGameModel::arrayofnumbers[i];
			number = CalculateNumber(originalnum, addnum,MathGameModel::arrayofchars[i-1]);
			}
		}
		//last number should be result, so the formula has to equal the result input by player
		double comparenum = MathGameModel::arrayofnumbers[MathGameModel::arrayofnumbers.size()-1];
		if (number <= (comparenum-0.001) || number >= (comparenum+0.001))
		{
			PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
			return *values;//couldnt find the number being used in the gameboard, so invalid
		}
		//now actually check to make sure input matches actual blocks in the grid
		for (unsigned int i = 0; i < MathGameModel::arrayofnumbers.size(); ++i)
		{
			bool found = false;
			for (int u = 0; u < MathGameModel::board_model->get_gridsize(); ++u)
			{
				if (MathGameModel::arrayofnumbers[i] == MathGameModel::board_model->get_blocks(u))
				{
				found = true;
				//int column = u%MathGameModel::board_model->get_width();
				//int row = u/MathGameModel::board_model->get_width();
				//MathGameModel::add_block(row, column);
				}
			}
			if (found == false)
			{
				PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, false);
				return *values; //couldnt find the number being used in the gameboard, so invalid
			}
		}
		//printVector(MathGameModel::arrayofchars, MathGameModel::arrayofnumbers);
PassValues * values = new PassValues(MathGameModel::arrayofnumbers, MathGameModel::arrayofchars, true);
return *values;
}

void MathGameModel::clear_formula() {
    while (!formula.empty()) formula.pop_back();
}

/* Fill empty spaces with random numbers at the given ratio */
bool MathGameModel::fill_board(int num_to_fill)
{
    int num_empty = board_model->num_empty_blocks();
    std::cout << num_empty << std::endl;
    //this will be used to determine a game over state
    if (0 == num_empty) {
        return false;

    }
    else if (num_to_fill > num_empty) {
        num_to_fill = num_empty;    //fill only the number of spaces still open
    }


    // ratio determines how many blocks are filled
    //int num_to_fill = ratio * board_model->num_empty_blocks();
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
    return true;
}

void MathGameModel::clear_selected_blocks() {
    while (!selected_block_list.empty()) {
        int val = selected_block_list.top();
        selected_block_list.pop();

        int row = val/board_model->get_width();
        int col = val % board_model->get_width();
        board_model->clear_block(row, col);
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

/* Marks all the blocks as not belonging to the formula*/
void MathGameModel::deselect_all(){
    for (int i = 0; i < board_model->get_width(); i++) {
        for (int j = 0; j < board_model->get_height(); j++) {
            board_model->deselect_block(i,j);
        }
    }
    while (!selected_block_list.empty()) selected_block_list.pop();
}

/* Returns a string representation of the formula */
std::string MathGameModel::get_formula()
{
    std::string formula_string = std::string();
    std::vector<std::string>::iterator iter = formula.begin();
    //std::vector<std::string> *formated_formula = new std::vector<std::string>();

    /* Presedence of operators is
        1. =
        2. * and /
        3. + and -
    */

    //int prev_operator = 1;
    while (iter != formula.end())
    {
/*        int current;
        if (*iter == "+" || *iter == "-") current = 3;
        if (*iter == )
        if (*iter == "+" && prev > )
      */
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
