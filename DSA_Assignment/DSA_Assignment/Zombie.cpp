#include "Zombie.h"

Zombie::Zombie() {}
Zombie::Zombie(int hp, int dmg) : Character(hp) {
	damage = dmg;
}

void Zombie::setDamage(int dmg) {
	damage = dmg;
}
int Zombie::getDamage() {
	return damage;
}

void Zombie::display() {

}