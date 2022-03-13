//
// Created by Alptekin's Macbook on 13.03.2022.
//

#include "Observable.h"

void Observable::remove(const Observer *Observer) {

}

void Observable::enroll(Observer *Observer) {
    m_enrolledList.push_back(Observer);
}

void Observable::update() {

}
