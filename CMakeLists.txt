cmake_minimum_required(VERSION 3.14)
project(Lab09)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab09 driver.cpp door.cpp maze.cpp maze_factory.cpp maze_game.cpp wall.cpp room.cpp)