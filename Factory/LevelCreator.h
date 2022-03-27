//
// Created by Alptekin's Macbook on 27.03.2022.
//

#ifndef FACTORY_LEVELCREATOR_H
#define FACTORY_LEVELCREATOR_H

#include "Level.h"

class LevelCreator {
public:
    virtual Level* levelCreator(){};
    virtual ~LevelCreator(){};
    void createLevel(LevelCreator* level) {
        Level *concereteLevel;
        concereteLevel = this->levelCreator();
        concereteLevel->whichLevel();
    }
};


#endif //FACTORY_LEVELCREATOR_H
