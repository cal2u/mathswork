#include "leaderboard.h"
#include "ui_leaderboard.h"
#include "leaderboardmodel.h"

// Constructor and destrcutor
LeaderBoard::LeaderBoard(QWidget *parent) : QDialog(parent), ui(new Ui::LeaderBoard){
    ui->setupUi(this);

    lBoardMd = new LeaderBoardModel();
    lBoardMd->leader(scores);

    // Debugging values
    //clearleadrboard();
    /*ScoreEntry p("Matthew", 100);
    ScoreEntry p2("Caleb", 100);
    ScoreEntry p3("Ian", 100);
    ScoreEntry p4("Matt", 100);
    ScoreEntry p5("Jean", 100);
    ScoreEntry p6("Dan", 10);
    ScoreEntry p7("Sand", 1010);
    lBoardMd->addEntry(p);
    lBoardMd->addEntry(p2);
    lBoardMd->addEntry(p3);
    lBoardMd->addEntry(p2);
    lBoardMd->addEntry(p4);
    lBoardMd->addEntry(p6);
    lBoardMd->addEntry(p7);*/

// Checks to see if file exist in order to create temporary one
 /*   ifstream file;
    file.open("leaderboard.txt");

    if (file.is_open())
    {
        std::string temp;
        int score;
        std::string name;
        for(int g=0;g<10;g++) {
            file >>temp;
            file >> score;
            file >> name;
            std::string res;
            // Stream conversation
            ostringstream convert;
            // Instert
            convert << score;
            // Convert to string
            res = convert.str();

            scores.push_back(res);
            scores.push_back(name);
        }
        file.close();
    }
    else cout << "Unable to open file" << endl;
*/
createBoard();
}

LeaderBoard::~LeaderBoard() {
    delete ui;
}

void LeaderBoard::on_pushButton_clicked() {
    this->close();
}

// Goes through and gets the vector of scores and players to display as labels
void LeaderBoard::createBoard(){
   QString qEntries [20];
    for (int i = 0; i < 20; i++){
        // Must convert to QString
        std::string str = scores[i];
        QString qstr = QString::fromStdString(str);
        qEntries[i] = qstr;
    }
    // All the labels
    ui->topScore1->setText(qEntries[0]);
    ui->topName1->setText(qEntries[1]);
    ui->topScore2->setText(qEntries[2]);
    ui->topName2->setText(qEntries[3]);
    ui->topScore3->setText(qEntries[4]);
    ui->topName3->setText(qEntries[5]);
    ui->topScore4->setText(qEntries[6]);
    ui->topName4->setText(qEntries[7]);
    ui->topScore5->setText(qEntries[8]);
    ui->topName5->setText(qEntries[9]);
    ui->topScore6->setText(qEntries[10]);
    ui->topName6->setText(qEntries[11]);
    ui->topScore7->setText(qEntries[12]);
    ui->topName7->setText(qEntries[13]);
    ui->topScore8->setText(qEntries[14]);
    ui->topName8->setText(qEntries[15]);
    ui->topScore9->setText(qEntries[16]);
    ui->topName9->setText(qEntries[17]);
    ui->topScore10->setText(qEntries[18]);
    ui->topName10->setText(qEntries[19]);

}
