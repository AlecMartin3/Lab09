//
// Created by Alec on 2019-11-29.
//

#ifndef LAB09_WALL_HPP
#define LAB09_WALL_HPP


class wall {
public:
    wall();
    virtual void print();
};
class enchanted_wall : public wall{
public:
    enchanted_wall(){
        print();
    }
    void print();
};
class dystopian_wall : public wall{
public:
    dystopian_wall(){
        print();
    }
    void print();
};

#endif //LAB09_WALL_HPP
