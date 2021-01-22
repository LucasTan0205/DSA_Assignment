#include "Character.h"
Character::Character() {}
Character::Character(int hp) {
	health = hp;
}

void Character::setHealth(int hp) {
	health = hp;
}
int Character::getHealth() {
	return health;
}

void Character::display() {

}