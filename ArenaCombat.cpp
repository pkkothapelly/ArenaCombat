// ArenaCombat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "	==ARENA COMBAT==	 \n\n";

	int playerHealth = 100;
	int enemyHealth = 100;
	int playerDamage = 10;
	int enemyDamage = 10;

	cout << "Player Health " << playerHealth << '\n';
	cout << "Enemy Health " << enemyHealth << "\n\n";

	enemyHealth = enemyHealth - playerDamage;

	cout << "Player attacks for " << playerDamage << "\n";
	cout << "Enemy Health " << enemyHealth << "\n\n";

	playerHealth = playerHealth - enemyDamage;

	cout << "Enemy attacks for " << enemyDamage << "\n";
	cout << "Player Health " << playerHealth << "\n";


	return 0;
}

