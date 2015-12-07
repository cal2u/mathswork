/*
 * passvalues.cpp
 *
 *  Created on: Dec 2, 2015
 *      Author: Matt
 */

#include "passvalues.h"

// Class used to get scoring information from the MathGameModel class to the MathGameTimer

//Not sure if you want anything extra from the types of numbers used; all I did was get how many different numbers and how many unique numbers were used
PassValues::PassValues(std::vector<int> arrayofnumbers, std::vector<char> arrayofchars, bool passed)
{
    numofaddition = 0;
    numofdivision = 0;
    numofmultiplication = 0;
    numofsimilar = 0;
    numofsubtraction = 0;
    numofunique = 0;

	this->passed = passed;
	if (passed == true)
	{
		std::vector<int> unique;
        for (size_t i = 0; i < arrayofnumbers.size(); ++i)
		{
            for (size_t u = 0; u < unique.size(); ++u)
			{
				if (arrayofnumbers[i] == unique[u])
				{
				this->numofsimilar += 1;
				}
				else
				{
				unique.push_back(arrayofnumbers[i]);
				this->numofunique += 1;
				}
			}
		}

        for (size_t i = 0; i < arrayofchars.size(); ++i)
		{
			if (arrayofchars[i] == '+')
			{
			this->numofaddition += 1;
			}
			else if (arrayofchars[i] == '-')
			{
			this->numofsubtraction += 1;
			}
			else if (arrayofchars[i] == '*')
			{
			this->numofmultiplication += 1;
			}
			else if (arrayofchars[i] == '/')
			{
			this->numofdivision += 1;
			}
		}
	}
}

bool PassValues::get_pass()
{
return PassValues::passed;
}


int PassValues::get_add()
{
return PassValues::numofaddition;
}

int PassValues::get_sub()
{
return PassValues::numofsubtraction;
}

int PassValues::get_mult()
{
return PassValues::numofmultiplication;
}

int PassValues::get_divi()
{
return PassValues::numofdivision;
}

