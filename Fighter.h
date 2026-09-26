#pragma once

#include <string>

class Fighter
{
private:
	std::string name;
	int health;
	int damage;
	bool isDefending = false;

public:
	Fighter(std::string fighterName, int startingHealth, int startingDamage);

	void attack(Fighter& target);
	void showStats();
	int getHealth();
	bool isDead();
	void heal(int healAmount);
	void defend();
	void takeDamage(int incomingDamage);
	
};