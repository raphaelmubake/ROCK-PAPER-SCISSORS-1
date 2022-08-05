#include "Referee.h"

using namespace std;
 

Referee::Referee( ) {

}


char Referee::refGame(Human Humanplayer, Computer Computerplayer){
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
        return 'E';
    }
}
