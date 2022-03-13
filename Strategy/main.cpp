#include <iostream>
#include "Player.h"
#include "BasketballPlayer.h"
#include "NflPlayer.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Player *MichaelJordan = new Player(new BasketballPlayer);
    MichaelJordan->playingType();
    Player *TomBrady = new Player(new NflPlayer);
    TomBrady->playingType();
    delete MichaelJordan;
    delete TomBrady;

    return 0;
}
