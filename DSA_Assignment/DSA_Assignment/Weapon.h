#pragma once
#pragma once
#include <iostream>
#include "arrayList.h"
using namespace std;

class Weapon {
private:
    string name;
    int damage;
    int range;

public:
    Weapon();
    Weapon(string name, int damage, int range);
    string getName();
    int getDamage();
    int getRange();
    

};