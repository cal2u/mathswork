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
MathGameModel::MathGameModel(GameBoardModel *board_model)
{
    MathGameModel::board_model = board_model;
}

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
		}
		else
		{
			if (t == 61)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		return 0;
}

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
return number;
}

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

int MathGameModel::CalculateNumber(int originalnum, int num, char oper)
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

void MathGameModel::add_block(int row, int col)
{
    board_model->select_block(row, col);
    append(std::to_string(board_model->get_block(row,col)));
    selected_block_list.push(row*board_model->get_width()+col);
}

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
bool MathGameModel::handle_formula(std::string formula) {
//Step 1: break down the string into a math expression
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
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
				 	 }
			 }
			 else if(t == '1')
			 {
				int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
			 	 }
			 }
			 else if(t == '2')
			 {
				 int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
			 	 }
			 }
			 else if(t == '3')
			 {
				 int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
			 	 }
			 }
			 else if(t == '4')
			 {
				 int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
			 	 }
			 }
			 else if(t == '5')
			 {
				 int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
			 	 }
			 }
			 else if(t == '6')
			 {
				 int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
			 	 }
			 }
			 else if(t == '7')
			 {
				 int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
			 	 }
			 }
			 else if(t == '8')
			 {
				 int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
			 	 }
			 }
			 else if(t == '9')
			 {
				 int numlength = findLengthofNum(formula, i);
			 	 if (numlength > 0)
			 	 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
			 	 }
			 }
			 else//first element in formula HAS to be a number, otherwise should return false as nonvalid
			 {
				 return false;
			 }
		}
		else if (i != formula.length()-1)
		{
			 if (t == '0')
			 {
				 int numlength = findLengthofNum(formula, i);
					 if (numlength > 0)
					 {
					 int finalnumber = generateNumber(formula, i, numlength);
					 MathGameModel::arrayofnumbers.push_back(finalnumber);
					 i += numlength-1;
					 }
			 }
			 else if(t == '1')
			 {
				int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
				 }
			 }
			 else if(t == '2')
			 {
				 int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
				 }
			 }
			 else if(t == '3')
			 {
				 int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
				 }
			 }
			 else if(t == '4')
			 {
				 int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
				 }
			 }
			 else if(t == '5')
			 {
				 int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
				 }
			 }
			 else if(t == '6')
			 {
				 int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
				 }
			 }
			 else if(t == '7')
			 {
				 int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
				 }
			 }
			 else if(t == '8')
			 {
				 int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
				 }
			 }
			 else if(t == '9')
			 {
				 int numlength = findLengthofNum(formula, i);
				 if (numlength > 0)
				 {
				 int finalnumber = generateNumber(formula, i, numlength);
				 MathGameModel::arrayofnumbers.push_back(finalnumber);
				 i += numlength-1;
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
					 return false;
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
					 return false;
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
					 return false;
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
					 return false;
				 }
			 }
			 else if(t == 61)//should not be an equals sign unless its the last symbol in formula
				 {
				 	 return false;
				 }
			}
		else
		{
			if(t == 61)
			{
			 MathGameModel::arrayofchars.push_back('=');
			}
			else
			{
			return false;
			}
		}
	}
	//now time to check the result of the equation matches a number from the table, using left to right operations instead of order of operations.
		int number;
		for (unsigned int i = 0; i < MathGameModel::arrayofnumbers.size(); ++i)
		{
			if (i == 0)
			{
			number = MathGameModel::arrayofnumbers[i];
			}
			else
			{
			number = CalculateNumber(number, MathGameModel::arrayofnumbers[i],MathGameModel::arrayofchars[i-1]);
			}
		}
		MathGameModel::arrayofnumbers.push_back(number);//places the calculated number in the array so that it checks that it is in the grid, along with the other input numbers
		//now actually check to make sure input matches actual blocks in the grid
		for (unsigned int i = 0; i < MathGameModel::arrayofnumbers.size(); ++i)
		{
			bool found = false;
			for (int u = 0; u < MathGameModel::board_model->get_gridsize(); ++u)
			{
				if (MathGameModel::board_model->get_blocks(u) == MathGameModel::arrayofnumbers[i])
				{
					found = true;
				}
			}
			if (found == false)
			{
				return false;//couldnt find the number being used in the gameboard, so invalid
			}
		}
		//printVector(MathGameModel::arrayofchars, MathGameModel::arrayofnumbers);
return true;
}

void MathGameModel::clear_formula() {
    while (!formula.empty()) formula.pop_back();
}

/* Fill empty spaces with random numbers at the given ratio */
void MathGameModel::fill_board(int num_to_fill)
{
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
