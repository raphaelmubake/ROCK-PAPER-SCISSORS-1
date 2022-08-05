referee.cpp
#include "Referee.h"
#include <string>
#include <math.h>
#include <ctime>

using namespace std;
 
//  change is made
// Constant variables
const char ROCK = 'R';
const char PAPER = 'P';
const char SCISSORS = 'S';

char Referee:: refGame(Human Humanplayer, Computer Computerplayer){
    char Humanplayer = Humanplayer.makeMove(); 
    char Computerplayer = Computerplayer.makeMove(); 

    if (Humanplayer == 'R' && Computerplayer == 'R') {
        return 'T';
    }
    else if (Humanplayer == "P" && Computerplayer == 'R') {
        return 'W';
        
    }
    else if (Humanplayer == 'S' && Computerplayer == 'R') {
        return 'L';
        
    }
    else {
        cout << "E" << endl;
    }
}
