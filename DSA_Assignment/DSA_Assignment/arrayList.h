#pragma once
#include <iostream>
#include <string>
#include "Weapon.h"
using namespace std;
const int  MAX_SIZE = 100;
typedef Weapon ItemType;

class List {
    private:
        ItemType items[MAX_SIZE];
        int size;

    public:
        List();

        bool add(ItemType item);
        bool add(int index, ItemType item);
        bool remove(int index);
        //string search(string item, int start, int end);
        bool isEmpty();
        int getLength();
        void display();
        //void replace(int index, ItemType item);
};
