//
// Created by Alec on 2019-11-29.
//
#include "maze_game.hpp"
#include "maze_factory.hpp"
#include "maze.hpp"
int main(){
    dystopian_maze_factory* dystopianFactory = new dystopian_maze_factory;
    maze_game *m1 = new maze_game;
    m1->create_maze(dystopianFactory);

    maze_factory* enchantedFactory = new enchanted_maze_factory;
    m1->create_maze(enchantedFactory);

};