//
// Created by Alec on 2019-11-29.
//

#include "maze_factory.hpp"

room* enchanted_maze_factory ::make_room() {
    enchanted_room *er = new enchanted_room();
    return  er;
}
door* enchanted_maze_factory::make_door(room *r1, room *r2) {
    enchanted_door *ed = new enchanted_door(r1, r2);
    return ed;
}
wall* enchanted_maze_factory::make_wall() {
    enchanted_wall *ew = new enchanted_wall();
    return  ew;
}
maze* enchanted_maze_factory::make_maze() {
    enchanted_maze *em = new enchanted_maze();

}

room* dystopian_maze_factory::make_room() {
    dystopian_room *dr = new dystopian_room();
    return dr;
}
door* dystopian_maze_factory::make_door(room *r1, room *r2) {
    dystopian_door *dd = new dystopian_door(r1, r2);
    return dd;

}
wall* dystopian_maze_factory::make_wall() {
    dystopian_wall *dw = new dystopian_wall();
    return  dw;

}
maze* dystopian_maze_factory::make_maze() {
    dystopian_maze *dm = new dystopian_maze();
    return dm;
}