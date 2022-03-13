cmake_minimum_required(VERSION 3.20)
project(Strategy)

set(CMAKE_CXX_STANDARD 17)

add_executable(Strategy main.cpp PlayerStrategy.cpp PlayerStrategy.h Player.cpp Player.h BasketballPlayer.cpp BasketballPlayer.h NflPlayer.cpp NflPlayer.h)
