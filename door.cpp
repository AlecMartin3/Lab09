//
// Created by Alec on 2019-11-29.
//
#include <iostream>
#include "door.hpp"
using namespace std;

void enchanted_door:: print(room* r1, room* r2){
    cout << "Enchanted door between: " << r1 << " and " << r2 << endl;
}
void dystopian_door::print(room* r1, room* r2){
    cout << "Dystopian door between: " << r1 << " and " << r2 << endl;
}