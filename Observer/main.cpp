/*
 * In observer interface there are one observable and many observer.
 * First of all observer has to register to observable
 * And when state changes observable has to notify all observers.
 * */
#include <iostream>
#include "Observer.h"
#include "Observable.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
