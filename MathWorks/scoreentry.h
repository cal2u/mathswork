#ifndef SCOREENTRY_H
#define SCOREENTRY_H
#include <string>

// Player object needs a name and a score when being constructed
class ScoreEntry{
private:
    std::string entryName;
    int entryScore;
public:
    ScoreEntry(std::string s, int n);
    std::string getEntryName();
    int getEntryScore();
};

#endif // SCOREENTRY_H
