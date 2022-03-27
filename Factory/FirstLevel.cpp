//
// Created by Alptekin's Macbook on 27.03.2022.
//

#include "FirstLevel.h"
#include "LevelA.h"


Level *FirstLevel::levelCreator() {
    return new LevelA();
}