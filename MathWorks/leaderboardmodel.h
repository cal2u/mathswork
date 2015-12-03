#ifndef LEADERBOARDMODEL_H
#define LEADERBOARDMODEL_H


class LeaderBoardModel
{
public:
    LeaderBoardModel();
};


//
// Created by Jean on 11/19/2015.
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

//#ifndef GAME_MENUE_H
//#define GAME_MENUE_H

string leaderboard ="leaderboard.txt";

//the chosen name of the leader bord file

// prints line by line from the txt file
void printleader(){
    string line;
    ifstream myfile;
    myfile.open(leaderboard);
    if(myfile.is_open()){
        while(getline(myfile,line)){
            cout<<line<<'\n';
        }}
    else
        cout<<"cant open\n";
    myfile.close();
}



//player object needs a name and a score when being constructed
class player{
private:
    string playername;
    int playerscore;
public:
    player(string s,int n);
    string getplayername();
    int getplayerscore();


};

player::player(string n,int s){
    this->playername=n;
    this->playerscore=s;
}

string player::getplayername() {
    return playername;
}


int player::getplayerscore() {
    return playerscore;
}

//holds the player objects for sorting
vector<player> players;


/*
 * uses selection sort on the vector of based off the players score
 * then writes the top 10 player values to the file
 * this is used by the add player function
 */
 void sorttable() {
    if (!players.empty()) {

        for (int w = 0; w < players.size() - 1; w++) {
            int maxscore = players[w].getplayerscore();
            for (int x = w + 1; x < players.size(); x++) {
                if (players[x].getplayerscore() > maxscore) {
                    maxscore = players[x].getplayerscore();
                    swap(players[x], players[w]);
                }
            }

        }
    }

    ofstream file;
    file.open(leaderboard);
    if (file.is_open())
    {
        for(int i=1;i<=10;i++){
            file<< i<<": "<<players[i-1].getplayerscore() <<"\t"<< players[i-1].getplayername()<<endl;

        }
        file.close();
    }
    else cout << "Unable to open file";


}



/*
 * opens and clear all the values in a txt file
 * then rewrites it with the default value
 * this is used by the isempty() function because the txt file has to be in the
 * default format for add player to work correctly
 */


void clearleadrboard(){
    players.clear();
    ofstream file;
//trunc was taken from c++.com
    file.open(leaderboard, std::ofstream::out | std::ofstream::trunc);

    file.close();



    file.open(leaderboard);
    if (file.is_open())
    {
        for(int i=1;i<=10;i++){
            file<< i<<": "<<0<<" "<<"...user"<< "\n";

        }
        file.close();


    }
    else cout << "Unable to open file";

}


//the default format starts with the char '1' so if this is not the case
//we use clearleaderboard() to do so
void isempty() {
    ifstream l;
    l.open(leaderboard);

    if (l.peek()!='1') {
        clearleadrboard();

        cout << "empty.....";

    }
    l.close();
}


/*
 * we start with a empty vector and then push the new player to it
 * we use string temp to skip "(number):"
 * we get the name and score
 * check if its not equal to the player we are trying to add, then push it to the vector
 * then we use sorttable()
 *
 */
void addplayer(player p){

    players.clear();
    players.push_back(p);
    ifstream file;
    file.open(leaderboard);

    if (file.is_open())
    {
        string temp;
        int score;
        string name;
        for(int g=0;g<10;g++) {

            file >>temp;

            file >> score;

            file >> name;

            player p1(name, score);
            if(p1.getplayername()!= p.getplayername())
                players.push_back(p1);
        }


        file.close();
        sorttable();
    }
    else cout << "Unable to open file" << endl;

}



vector leaders(){
vector<string> scores;
    ifstream file;
    file.open(leaderboard);

    if (file.is_open())
    {
        string temp;
        int score;
        string name;
        for(int g=0;g<10;g++) {

            file >>temp;

            file >> score;

            file >> name;

           scores.push_back(score);
            scores.push_back(name);
        }


        file.close();
        return scores;

    }
    else cout << "Unable to open file" << endl;

};
//#endif //GAME_MENUE_H
#endif // LEADERBOARDMODEL_H
