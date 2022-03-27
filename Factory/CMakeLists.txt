cmake_minimum_required(VERSION 3.20)
project(Factory)

set(CMAKE_CXX_STANDARD 17)

add_executable(Factory main.cpp LevelCreator.h FirstLevel.cpp FirstLevel.h SecondLevel.cpp SecondLevel.h LevelDesigner.h Level.h LevelA.cpp LevelA.h LevelB.cpp LevelB.h)
