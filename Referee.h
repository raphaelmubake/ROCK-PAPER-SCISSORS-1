#include "Human.h"
#include "Computer.h"

#ifndef REFEREE_H
#define REFEREE_H

class Referee { 

    public:

    Referee( ); // constructor
    
    char refGame(Human Humanplayer, Computer Computerplayer);
};

#endif