#include "Referee.h"

using namespace std;
 

Referee::Referee( ) {

}


char Referee::refGame(Human Humanplayer, Computer Computerplayer){
    char Humanmove = Humanplayer.makeMove(); 
    char Computermove = Computerplayer.makeMove(); 

    if (Humanmove == 'R' && Computermove == 'R') {
        return 'T';
    }
    else if (Humanmove == 'P' && Computermove == 'R') {
        return 'W';
        
    }
    else if (Humanmove == 'S' && Computermove == 'R') {
        return 'L';
        
    }
    else {
        return 'E';
    }
}
