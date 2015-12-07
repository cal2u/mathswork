//
// Created by Jean on 11/19/2015.
//
#ifndef LEADERBOARDMODEL_H
#define LEADERBOARDMODEL_H
using namespace std;

#include "leaderboardmodel.h"
#include "scoreentry.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ostream>
#include <sstream>

class LeaderBoardModel{

public:
    LeaderBoardModel();
    ~LeaderBoardModel();

    //holds the player objects for sorting
    vector<ScoreEntry> entries;

    string leaderboard;

    //the chosen name of the leader board file

    // prints line by line from the txt file
    void printleader();

    /*
     * uses selection sort on the vector of based off the players score
     * then writes the top 10 player values to the file
     * this is used by the add player function
     */
    void sorttable();

    /*
     * opens and clear all the values in a txt file
     * then rewrites it with the default value
     * this is used by the isempty() function because the txt file has to be in the
     * default format for add player to work correctly
     */

    void clearleadrboard();

    //the default format starts with the char '1' so if this is not the case
    //we use clearleaderboard() to do so
    void isempty();


    /*
     * we start with a empty vector and then push the new player to it
     * we use string temp to skip "(number):"
     * we get the name and score
     * check if its not equal to the player we are trying to add, then push it to the vector
     * then we use sorttable()
     *
     */
     void addEntry(ScoreEntry p);

     void leader(std::vector<std::string> &vec);
};

#endif // LEADERBOARDMODEL_H
