#include <iostream>
#include "LevelA.h"
#include "LevelB.h"
#include "LevelCreator.h"
#include "FirstLevel.h"
#include "SecondLevel.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    LevelCreator *levelA;
    LevelB *levelB;

    FirstLevel *levelCreatorA = new FirstLevel();
    levelCreatorA->createLevel(levelA);



    return 0;
}

/*
 * Creator interface i olacak.
 * Level Interface i olacak bir de.
 * Creator interface inden 2 tane class derive edilecek
 * Burada her classın bir tane create fonksiyonu olacak.
 * Design a level fonksiyonnu Level classında aldığı parametreye göre(Creator turunde) creator fonkiyonunu cagiracak.
 * */
