#pragma once

#include <string>

class Fighter
{
private:
	std::string name;
	int health;
	int damage;
	bool isDefending = false;
	void takeDamage(int incomingDamage);

public:
	Fighter(std::string fighterName, int startingHealth, int startingDamage);

	virtual ~Fighter() = default;

	virtual void attack(Fighter& target);
	void showStats() const;
	int getHealth() const;
	bool isDead() const;
	void heal(int healAmount);
	void defend();

};

