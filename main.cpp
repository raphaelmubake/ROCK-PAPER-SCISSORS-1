#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <string>
#include <math.h>
#include <ctime>

using namespace std;

// Constant variables
const char ROCK = 'R';
const char PAPER = 'P';
const char SCISSORS = 'S'; 

int main() {
    //User's choice
   /* char Humanplayer; 
    //Compter's choice
    char Computerplayer;
    
    Humanplayer = Human::makeMove(); 
    cout << "Your choice is: "<< endl;
    Showmove(Humanplayer);
    
    cout << "Computer's choice is: "<< endl;
    Computerplayer = Computer::makeMove();
    Showmove(Computerplayer);
    
    refGame(Humanplayer, Computerplayer); */

    Human player1;
    Computer player2;
    Referee r;
    cout<<r.refGame(player1,player2)<<endl;
 
    return 0;
}
