//
// Created by Alec on 2019-11-29.
//

#ifndef LAB09_DOOR_HPP
#define LAB09_DOOR_HPP

#include "room.hpp"

class door {
public:
    door(room* r1, room* r2);
    virtual void print(room* r1, room* r2) = 0;
};
class enchanted_door : public door{
public:
    enchanted_door(room* r1, room* r2);
    void print(room* r1, room* r2) override;
};
class dystopian_door : public door{
public:
    dystopian_door(room* r1, room* r2);
    void print(room* r1, room* r2) override;
};

#endif //LAB09_DOOR_HPP
