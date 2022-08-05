#ifndef REFEREE_H
#define REFEREE_H

#include "Human.h"
#include "Computer.h"

class Referee { 

    public:

    Referee( ); // constructor

    char refGame(Human Humanplayer, Computer Computerplayer);
};

#endif