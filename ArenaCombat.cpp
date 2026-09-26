// ArenaCombat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Fighter.h"
#include <iostream>


int getPlayerChoice() {

	int choice; 
	std::cin >> choice;
	while (choice != 1 && choice != 2 && choice !=3) {
			std::cout << "\nDont be blind, look at the choices again twat\n";
			std::cout << "Choose Action: ";
			std::cin >> choice;
	}

	return choice;
}

	

int main()
{

	Fighter player("Player", 100,10);
	Fighter enemy("Enemy", 100, 10);

	std::cout << "\n\n	==ARENA COMBAT==	 \n\n";

	
	while (!player.isDead() && !enemy.isDead()) {

		std::cout << "1. Attack\n";
		std::cout << "2. Defend\n";
		std::cout << "3. Heal Yourself\n";
		
		int choice = getPlayerChoice();

		if (choice == 1) {
			player.attack(enemy);
			enemy.showStats();

		}
		else if (choice == 2) {
			
			player.defend();

			}

		else if (choice == 3) {
			player.heal(10);


		}

		if (enemy.isDead())
		{
			std::cout << "\nEnemy is Dead\n";
			break;
		}

		enemy.attack(player);
		player.showStats();

		

		if (player.isDead()) {
			std::cout << "\nPlayer is Dead\n";
			break;
		}

		std::cout << "\n	*****New Round*****		\n\n";
	}
	

	return 0;
}

