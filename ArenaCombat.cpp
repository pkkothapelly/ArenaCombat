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
	int enemyDamage = 20;
	while (playerHealth>0 && enemyHealth>0) {
		cout << "Player Health " << playerHealth << '\n';
		cout << "Enemy Health " << enemyHealth << "\n\n";

		enemyHealth = enemyHealth - playerDamage;

		cout << "Player attacks for " << playerDamage << "\n";
		cout << "Enemy Health " << enemyHealth << "\n\n";

		if (enemyHealth<=0) {
			cout << "Enemy is Dead\n";
			break;
		}
		
		playerHealth = playerHealth - enemyDamage;
		
		
	
		cout << "Enemy attacks for " << enemyDamage << "\n";
		cout << "Player Health " << playerHealth << "\n\n";
		
		if (playerHealth <= 0) {
			cout << "Player is Dead\n";
			break;
		}

		cout << "	*****New Round*****		\n\n";
	}
	

	return 0;
}

