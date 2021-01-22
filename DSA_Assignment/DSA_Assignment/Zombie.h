#pragma once
#include "Character.h"
class Zombie : public Character
{
    private:
        int damage;

    public: 
        Zombie();
        Zombie(int, int);

        void setDamage(int);
        int getDamage();

        void display();
};

