cmake_minimum_required(VERSION 3.20)
project(LockFree_Singleton)

set(CMAKE_CXX_STANDARD 17)

add_executable(LockFree_Singleton main.cpp Singleton.cpp Singleton.h)
