//
// Created by Alptekin's Macbook on 13.03.2022.
//

#ifndef OBSERVER_OBSERVABLEINTERFACE_H
#define OBSERVER_OBSERVABLEINTERFACE_H
#include <vector>
#include "Observer.h"

class ObservableInterface {
public:
    virtual void enroll(Observer *Observer) = 0;
    virtual void remove(const Observer *Observer) = 0;
    virtual void update() = 0;
};

#endif //OBSERVER_OBSERVABLEINTERFACE_H
