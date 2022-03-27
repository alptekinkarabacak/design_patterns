//
// Created by Alptekin's Macbook on 27.03.2022.
//

#ifndef FACTORY_LEVEL_H
#define FACTORY_LEVEL_H

#include <iostream>

class Level {
public:
    virtual void whichLevel() = 0;
    virtual ~Level(){};
};

#endif //FACTORY_LEVEL_H
