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
	int choice;
	bool isPlayerDefending = false;
	while (playerHealth>0 && enemyHealth>0) {

		
		cout << "Player Health " << playerHealth << '\n';
		cout << "Enemy Health " << enemyHealth << "\n\n";

		cout << "1. Attack\n";
		cout << "2. Defend\n";
		
		cin >> choice;
		while (choice !=1 && choice!=2) {
			cout << "\nDont be blind, look at the choices again twat\n";
			cout << "Choose Action: ";
			cin >> choice;

		}
		

		if (choice == 1) {
			isPlayerDefending = false;
			enemyHealth = enemyHealth - playerDamage;

			cout << "\nPlayer attacks for " << playerDamage << "\n";
			cout << "Enemy Health " << enemyHealth << "\n\n";

		}
		

		else if (choice == 2) {
			isPlayerDefending = true;
			
				/*playerHealth = playerHealth - enemyDamage;



				cout << "Enemy attacks for " << enemyDamage << "\n";
				cout << "Player Health " << playerHealth << "\n\n";*/

				cout << "\nPlayer Defends\n";
				
			}

		if (enemyHealth <= 0) {
			cout << "Enemy is Dead\n";
			break;
		}

		if (isPlayerDefending) {
			playerHealth = playerHealth - enemyDamage / 2;
			cout << "\nPlayer Health is " << playerHealth << "\n";
			cout << "Enemy Health is " << enemyHealth << "\n";
		}

			else {
				playerHealth = playerHealth - enemyDamage;

				cout << "Enemy Attacks with "<<enemyDamage<<"\n";
				cout << "\nPlayer Health is " << playerHealth << "\n";
			}
		

		

		if (playerHealth <= 0) {
			cout << "Player is Dead\n";
			break;
		}

		

		cout << "\n	*****New Round*****		\n\n";
	}
	

	return 0;
}

