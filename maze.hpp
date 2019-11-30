//
// Created by Alec on 2019-11-29.
//

#ifndef LAB09_MAZE_HPP
#define LAB09_MAZE_HPP

#include <vector>
#include "room.hpp"
#include "door.hpp"
#include "wall.hpp"
class maze {
public:
    maze();
    virtual void print();


};
class enchanted_maze : public maze{
public:
    enchanted_maze(){
        print();
    }
    void print() override;
};
class dystopian_maze : public maze{
public:
    dystopian_maze(){
        print();
    }
    void print();
};

#endif //LAB09_MAZE_HPP
