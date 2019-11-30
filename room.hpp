//
// Created by Alec on 2019-11-29.
//

#ifndef LAB09_ROOM_HPP
#define LAB09_ROOM_HPP


class room {
public:
    room();
    virtual void print();
};
class enchanted_room : public room{
public:
    enchanted_room(){
        print();
    }
    void print();
};
class dystopian_room : public room{
public:
    dystopian_room(){
        print();
    }
    void print();
};


#endif //LAB09_ROOM_HPP
