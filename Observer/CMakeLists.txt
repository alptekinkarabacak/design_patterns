cmake_minimum_required(VERSION 3.20)
project(Observer)

set(CMAKE_CXX_STANDARD 17)

add_executable(Observer main.cpp ObserverInterface.h ObservableInterface.h Observer.cpp Observer.h Observable.cpp Observable.h)
