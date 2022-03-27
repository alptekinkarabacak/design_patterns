//
// Created by Alptekin's Macbook on 27.03.2022.
//

#ifndef LOCKFREE_SINGLETON_SINGLETON_H
#define LOCKFREE_SINGLETON_SINGLETON_H
//Test

#include <mutex>

class Singleton {
public:
    // Singleton must not be copyable and assignable.
    Singleton(Singleton &other) = delete;
    void operator=(const Singleton &) = delete;
    static Singleton* getInstance();
    static void deleteInstance();

private:
    static std::mutex m_singleton_mutex;
    static Singleton* m_pinstance;
    Singleton() = default;

};


#endif //LOCKFREE_SINGLETON_SINGLETON_H
