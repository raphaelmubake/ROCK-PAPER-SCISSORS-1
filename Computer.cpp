#include "Computer.h"
#include <string>
#include <math.h>
#include <ctime>

using namespace std;

// Constant variables
const char ROCK = 'R';
const char PAPER = 'P';
const char SCISSORS = 'S';

char Computer::makeMove() {
   /* srand(time(0));
    // Random number
    int num = rand() % 3 + 1;
 
    if(num==1) return 'R';
    if(num==2) return 'P';
    if(num==3) return 'S'; */
    return 'R';
}
