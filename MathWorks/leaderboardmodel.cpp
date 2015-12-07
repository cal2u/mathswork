#include "leaderboardmodel.h"

// Constructor and destructor
LeaderBoardModel::LeaderBoardModel(){
    leaderboard = "leaderboard.txt";
}

LeaderBoardModel::~LeaderBoardModel(){

}

// prints line by line from the txt file
void LeaderBoardModel::printleader(){
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

/*
 * uses selection sort on the vector of based off the players score
 * then writes the top 10 player values to the file
 * this is used by the add player function
 */
 void LeaderBoardModel::sorttable() {
    if (!entries.empty()) {

        for (unsigned long w = 0; w < entries.size() - 1; w++) {
            int maxscore = entries[w].getEntryScore();
            for (unsigned long x = w + 1; x < entries.size(); x++) {
                if (entries[x].getEntryScore() > maxscore) {
                    maxscore = entries[x].getEntryScore();
                    swap(entries[x], entries[w]);
                }
            }

        }
    }

    ofstream file;
    file.open(leaderboard);
    if (file.is_open())
    {
        for(int i=1;i<=10;i++){
            file << i << ": " << entries[i-1].getEntryScore() << "\t" << entries[i-1].getEntryName() << endl;

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


 void LeaderBoardModel::clearleadrboard(){
     entries.clear();
     ofstream file;
 //trunc was taken from c++.com
     file.open(leaderboard, std::ofstream::out | std::ofstream::trunc);

     file.close();



     file.open(leaderboard);
     if (file.is_open())
     {
         for(int i=1;i<=10;i++){
             file << i << ": " << 0 << " " << "...user" << "\n";

         }
         file.close();


     }
     else cout << "Unable to open file";

 }

 //the default format starts with the char '1' so if this is not the case
 //we use clearleaderboard() to do so
 void LeaderBoardModel::isempty() {
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
  void LeaderBoardModel::addEntry(ScoreEntry p){

     entries.clear();
     entries.push_back(p);
     ifstream file;
     file.open(leaderboard);

     if (file.is_open())
     {
         string temp;
         int score;
         string name;
         for(int g = 0; g < 10; g++) {

             file >>temp;

             file >> score;

             file >> name;

             ScoreEntry p1(name, score);
             if(p1.getEntryName()!= p.getEntryName())
                 entries.push_back(p1);
         }


         file.close();
         sorttable();
     }
        else cout << "Unable to open file" << endl;
}

 void LeaderBoardModel::leader(std::vector<std::string> &vec){
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
             string res;
             // Stream conversation
             ostringstream convert;
             // Instert
             convert << score;
             // Convert to string
             res = convert.str();

             vec.push_back(res);
             vec.push_back(name);
         }
         file.close();
     }
     else cout << "Unable to open file" << endl;
 }


