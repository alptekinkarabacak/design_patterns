//
// Created by Alptekin's Macbook on 27.03.2022.
//

#include "SecondLevel.h"
#include "LevelB.h"
Level *SecondLevel::levelCreator() {
    new LevelB();
}
