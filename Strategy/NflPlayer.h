//
// Created by Alptekin's Macbook on 10.03.2022.
//

#ifndef STRATEGY_NFLPLAYER_H
#define STRATEGY_NFLPLAYER_H
#include "PlayerStrategy.h"
#include <iostream>


class NflPlayer : public PlayerStrategy{
   void playingStyle() {
       std::cout<<"I am a NFL player and I have to carry ball to score line!"<<std::endl;
   }
};


#endif //STRATEGY_NFLPLAYER_H
