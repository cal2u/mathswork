#include "scoreentry.h"
#include <string>

ScoreEntry::ScoreEntry(std::string s, int n){
    this->entryName = s;
    this->entryScore = n;
}

std::string ScoreEntry::getEntryName() {
    return entryName;
}

int ScoreEntry::getEntryScore() {
    return entryScore;
}
