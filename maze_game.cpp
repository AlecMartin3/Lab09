//
// Created by Alec on 2019-11-29.
//
#include "maze_game.hpp"

maze* maze_game ::create_maze(maze_factory *m1) {
    maze *m = m1->make_maze();
    wall *w = m1->make_wall();
    room *r1 = m1->make_room();
    room *r2 = m1->make_room();
    door *d = m1->make_door(r1, r2);

    return m;
}