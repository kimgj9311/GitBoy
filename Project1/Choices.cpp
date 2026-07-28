#include <iostream>
#include <string>
#include "Choices.h"
#include "Player.h"
#include "Job.h"
#include "HUD.h"
#include "Weapon.h"
#include "Inventory.h"



using namespace std;
//Character Creation
void chooseJob(Player& player1,Job* jobs) {
	//Choose Job
	
	int selectjob;
	bool validChoice = false;
	while (!validChoice) {
		cout << "Choose your job: ";
		if (!(cin >> selectjob)) {
			cout << "\nPlease enter a number.\n";
			cin.clear();
			cin.ignore(1000, '\n');
			continue;
		}

		switch ((selectjob))
		{
		case 1:
			player1.setJob(&jobs[0]);
			validChoice = true;
			break;

		case 2:
			player1.setJob(&jobs[1]);
			player1.playerJob = 1;
			validChoice = true;
			break;
		case 3:
			player1.setJob(&jobs[2]);
			player1.playerJob = 2;
			validChoice = true;
			break;
		case 4:
			player1.setJob(&jobs[3]);
			player1.playerJob = 3;
			validChoice = true;
			break;
		default:
			cout << "\nInvalid Input\n";
			cout << "Input 1, 2, 3, or 4: \n";
			break;
		}
		
	}
	system("cls");
}
void chooseStat(Player& player1) {
	//Choose Stat Upgrade
	bool validChoice = false;
	int select;
	while (!validChoice) {
		cout << "Choose a Stat to Upgrade.";
		cout << "\n1. HP\n2. Stamina\n3. Defense\n";
		cout << "\nYou may add 10 points to your selected stat\n";
		if (!(cin >> select)) {
			cout << "\nPlease enter a number.\n";
			cin.clear();
			cin.ignore(1000, '\n');
			continue;
		}
		switch (select)
		{
		case 1:
			player1.maxHP += 10;
			validChoice = true;
			break;
		case 2:
			player1.maxStam += 10;
			validChoice = true;
			break;
		case 3:
			player1.def += 10;
			validChoice = true;
			break;
		default:
			cout << "\nInvalid Input\n";
			cout << "Input 1, 2, 3, or 4: \n";
			break;
		}
	}
	system("cls");
}
void chooseWeapon(Player& player1, Weapon& playerWep, Weapon weapons[][3], Weapon& playerWep2) {
	//Choose Weapon

	bool validChoice = false;
	int select;
	int playerJob;
	validChoice = false;
	while (!validChoice) {
		cout << "Choose your weapon: ";
		if (!(cin >> select)) {
			cout << "\nPlease enter a number.\n";
			cin.clear();
			cin.ignore(1000, '\n');
			continue;
		}
		switch (select)
		{
		case 1:
			playerWep = weapons[player1.playerJob][0];
			validChoice = true;
			break;
		case 2:
			playerWep = weapons[player1.playerJob][1];
			validChoice = true;
			break;
		case 3:
			playerWep = weapons[player1.playerJob][2];
			validChoice = true;
			break;
		default:
			cout << "\nInvalid Input\n";
			cout << "Input 1, 2, 3, or 4: \n";
			break;
		}
	}
	system("cls");
}

//Game Start
void choosePath(Player& player1, Weapon& playerWep, Weapon weapons[][3], Weapon& playerWep2, Inventory& playerInv) {
	

	cout << "Your ship wreckage has little no supplies, most destroyed in the crash.\nYou can search for supplies in the wreckage or go find some materials in the woods, but you are also low on stamina and slightly injured. You can rest to recover.\n";
	cout << "1. Scavenge Wreckage\n2. Look for materials in woods\n3. Rest\n";
	bool validChoice = false;
	int select;
	select = 0;
	while (!validChoice) {
		cout << "Select your path: ";
		if (!(cin >> select)) {
			cout << "\nPlease enter a number.\n";
			cin.clear();
			cin.ignore(1000, '\n');
			continue;
		}
		switch ((select))
		{
		case 1:
			playerInv.addItem(1, 3);
			validChoice = true;
			break;
		case 2:
			player1.location = "Twisted Vine Woods";
			playerInv.addItem(1,2);
			playerInv.addItem(1,2);
			validChoice = true;
			break;
		case 3:
			player1.stam += 40;
			validChoice = true;
			break;

		default:
			cout << "\nInvalid Input. Enter 1, 2, or 3.\n";
			break;
		}
	}
	system("cls");
}
