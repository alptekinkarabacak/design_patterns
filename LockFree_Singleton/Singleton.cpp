//
// Created by Alptekin's Macbook on 27.03.2022.
//

#include "Singleton.h"

Singleton *Singleton::getInstance() {
    std::lock_guard<std::mutex> lock(m_singleton_mutex);
    if (m_pinstance == nullptr) {
        m_pinstance = new Singleton();
    }

    return m_pinstance;
}

void Singleton::deleteInstance() {
    if (m_pinstance != nullptr) {
        delete m_pinstance;
    }

}
