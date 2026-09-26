#include "Fighter.h"
#include <iostream> 

Fighter::Fighter(std::string fighterName, int startingHealth, int startingDamage)
	: name(fighterName), health(startingHealth), damage(startingDamage) {

}

void Fighter::attack(Fighter& target) {

	target.takeDamage(damage);

}

void Fighter::showStats() {

	std::cout << "\n" << name << " Health: " << health;

	if (!isDead()) {
		std::cout << "\n" << name << " Damage: " << damage << "\n";
	}

	std::cout << "\n";
}

int Fighter::getHealth() {

	return health;
}

bool Fighter::isDead() {

	return health <= 0;

}

void Fighter::heal(int healAmount) {

	health += healAmount;

	if (health >= 100) {

		health = 100;
	}
}

void Fighter::defend() {

	isDefending = true;
}

void Fighter::takeDamage(int incomingDamage) {

	if (isDefending) {

		health -= incomingDamage / 2;
		isDefending = false;

	}
	else {
		health -= incomingDamage;
	}


}