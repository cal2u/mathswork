#include "leaderboard.h"
#include "ui_leaderboard.h"
#include "leaderboardmodel.h"

// Constructor and destrcutor
LeaderBoard::LeaderBoard(QWidget *parent) : QDialog(parent), ui(new Ui::LeaderBoard){
    ui->setupUi(this);

    //clearleadrboard();
    ScoreEntry p("fae", 2);
    ScoreEntry p2("nah", 1);
    //isempty();
    addEntry(p);
    addEntry(p2);
    printleader();

    //printleader();

    //scores;
    //leaders(scores);

    ifstream file;
    file.open(leaderboard);

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



createBoard();
}

LeaderBoard::~LeaderBoard() {
    delete ui;
}

void LeaderBoard::on_pushButton_clicked() {
    this->close();
}

void LeaderBoard::createBoard(){
   QString qEntries [20];
    for (int i = 0; i < 20; i++){

        std::string str = scores[i];
        //std::cout<< str << '\n';
        QString qstr = QString::fromStdString(str);
        qEntries[i] = qstr;
    }

    ui->topName1->setText(qEntries[0]);
    ui->topScore1->setText(qEntries[1]);
    ui->topName2->setText(qEntries[2]);
    ui->topScore2->setText(qEntries[3]);
    ui->topName3->setText(qEntries[4]);
    ui->topScore3->setText(qEntries[5]);
    ui->topName4->setText(qEntries[6]);
    ui->topScore4->setText(qEntries[7]);
    ui->topName5->setText(qEntries[8]);
    ui->topScore5->setText(qEntries[9]);
    ui->topName6->setText(qEntries[10]);
    ui->topScore6->setText(qEntries[11]);
    ui->topName7->setText(qEntries[12]);
    ui->topScore7->setText(qEntries[13]);
    ui->topName8->setText(qEntries[14]);
    ui->topScore8->setText(qEntries[15]);
    ui->topName9->setText(qEntries[16]);
    ui->topScore9->setText(qEntries[17]);
    ui->topName10->setText(qEntries[18]);
    ui->topScore10->setText(qEntries[19]);

}
