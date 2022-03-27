//
// Created by Alptekin's Macbook on 27.03.2022.
//

#ifndef FACTORY_SECONDLEVEL_H
#define FACTORY_SECONDLEVEL_H

#include "LevelCreator.h"


class SecondLevel : public LevelCreator {
public:
    Level* levelCreator();
};


#endif //FACTORY_SECONDLEVEL_H
