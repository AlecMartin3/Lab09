//
// Created by Alec on 2019-11-29.
//

#ifndef LAB09_MAZE_GAME_HPP
#define LAB09_MAZE_GAME_HPP

#include "maze.hpp"
#include "maze_factory.hpp"
class maze_game{
public:
    maze* create_maze(maze_factory *m1);

};
#endif //LAB09_MAZE_GAME_HPP
