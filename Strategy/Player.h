//
// Created by Alptekin's Macbook on 10.03.2022.
//

#ifndef STRATEGY_PLAYER_H
#define STRATEGY_PLAYER_H
#include "PlayerStrategy.h"


class Player {
public:
    Player(PlayerStrategy *playerStrategy = nullptr) : m_playerStrategy(playerStrategy) {
    }
    ~Player() {
        delete this->m_playerStrategy;
    }
    /*
     * To allows change strategy in runtime.
     * */
    void setStrategy(PlayerStrategy *playerStrategy) {
        delete this->m_playerStrategy;
        this->m_playerStrategy = playerStrategy;
    }

    void playingType() const {
        this->m_playerStrategy->playingStyle();
    }

private:
    PlayerStrategy *m_playerStrategy;

};


#endif //STRATEGY_PLAYER_H
