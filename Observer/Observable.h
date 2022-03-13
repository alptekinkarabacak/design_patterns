//
// Created by Alptekin's Macbook on 13.03.2022.
//

#ifndef OBSERVER_OBSERVABLE_H
#define OBSERVER_OBSERVABLE_H

#include "ObservableInterface.h"



class Observable : public ObservableInterface{
public:
    void update() override;
    void enroll(Observer *Observer) override;
    void remove(const Observer *Observer) override;
    int getObserverData();

private:
    int m_observer_data;
    std::vector<Observer> m_enrolledList;
};


#endif //OBSERVER_OBSERVABLE_H
