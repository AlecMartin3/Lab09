//
// Created by Alec on 2019-11-29.
//

#ifndef LAB09_MAZE_FACTORY_HPP
#define LAB09_MAZE_FACTORY_HPP

#include "maze.hpp"
#include "door.hpp"
#include "room.hpp"
#include "wall.hpp"
class maze_factory {
public:
    virtual maze* make_maze() = 0;
    virtual wall*  make_wall() = 0;
    virtual room*  make_room() = 0;
    virtual door*  make_door(room* r1, room* r2) = 0;
};
class enchanted_maze_factory : public  maze_factory{

    maze* make_maze();
    wall*  make_wall();
    room*  make_room();
    door*  make_door(room* r1, room* r2);
};
class dystopian_maze_factory : public  maze_factory{
    maze* make_maze();
    wall*  make_wall();
    room*  make_room();
    door*  make_door(room* r1, room* r2);
};

#endif //LAB09_MAZE_FACTORY_HPP
