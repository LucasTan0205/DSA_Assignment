#include "Weapon.h"

Weapon::Weapon() {}
Weapon::Weapon(string n, int d, int r) {
	name = n;
	damage = d;
	r = range;
}
string Weapon::getName() {
	return name;
}
int Weapon::getDamage(){
	return damage;
}
int Weapon::getRange() {
	return range;
}