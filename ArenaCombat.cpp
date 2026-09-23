// ArenaCombat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;




void showHealth(int pHealth, int eHealth) {
	cout <<"Player Health: " << pHealth << '\n';
	cout <<"Enemy Health: " << eHealth << "\n\n";
}

int getPlayerChoice() {

	int choice; 

	
	cin >> choice;
	while (choice != 1 && choice != 2 && choice !=3) {
			cout << "\nDont be blind, look at the choices again twat\n";
			cout << "Choose Action: ";
			cin >> choice;
	}

	return choice;
}

bool isDead(int health) {

	return health <= 0;

}

void playerAttack(int& eHealth, int pDamage) {

	eHealth = eHealth - pDamage ;

}

void enemyAttack(int& pHealth, int enemyDamage, bool isPDefending) {

	if (isPDefending) {
		pHealth = pHealth - enemyDamage/2;
		
	}
	else {
		pHealth = pHealth - enemyDamage;
	}


}

void healPlayer(int& pHealth, int healAmount) {
	
		pHealth = pHealth + healAmount;
	
		if (pHealth>100) {
			pHealth = 100;
		}
}


int main()
{
	int playerHealth = 100;
	int enemyHealth = 100;
	int playerDamage = 10;
	int enemyDamage = 10;
	int choice;


	cout << "	==ARENA COMBAT==	 \n\n";

	bool isPlayerDefending = false;
	while (playerHealth>0 && enemyHealth>0) {

		
		

		cout << "1. Attack\n";
		cout << "2. Defend\n";
		cout << "3. Heal Yourself\n";
		
		
		
			
		choice = getPlayerChoice();

		
		

		if (choice == 1) {
			isPlayerDefending = false;
			playerAttack(enemyHealth, playerDamage);

		}

		

		else if (choice == 2) {
			
			isPlayerDefending = true;

			}

		else if (choice == 3) {
			isPlayerDefending = false;
			healPlayer(playerHealth, 15);

		}

		if (isDead(enemyHealth))
		{
			cout << "\nEnemy is Dead\n";
			break;
		}

		enemyAttack(playerHealth, enemyDamage, isPlayerDefending);

		

		if (isDead(playerHealth)) {
			cout << "Player is Dead\n";
			break;
		}

		showHealth(playerHealth,enemyHealth);

		

		cout << "\n	*****New Round*****		\n\n";
	}
	

	return 0;
}

