//
// Created by Alptekin's Macbook on 10.03.2022.
//

#ifndef STRATEGY_BASKETBALLPLAYER_H
#define STRATEGY_BASKETBALLPLAYER_H


#include "PlayerStrategy.h"
#include <iostream>


class BasketballPlayer : public PlayerStrategy{
    void playingStyle() {
        std::cout<<"I am a basketball player and I can Hoop!"<<std::endl;
    }
};


#endif //STRATEGY_BASKETBALLPLAYER_H
