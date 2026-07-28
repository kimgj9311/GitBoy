#include <iostream>
#include <windows.h>
#include <vector>
#include <string>

#include "Player.h"
#include "Monsters.h"
#include "Weapon.h"
#include "Job.h"
#include "Inventory.h"
#include "Item.h"
#include "HUD.h"
#include "Choices.h"


using namespace std;

int main()
{
	Player player1;
	player1.location = "Ship Wrekage";
	Weapon playerWep;
	Weapon playerWep2;
	Weapon weapons[12][3];
	callWeps(weapons);
	vector<Item>allItems = LoadItems();
	vector<Inventory> backpack;
	Inventory playerInv;
	Monsters monsters[7];
	callMonsters(monsters);

	mobAttk(player1,monsters[], 1);

	
	//cout << "+--------------------------------------+\n" << "|            Text RPG Game             |\n" << "+--------------------------------------+\n";

	//cout << "Wake up, soldier...You have crashed landed in the wilderness of the planet, Tetracil.\n";
	//cout << "Nearest outpost is just at the horizon. There are many dangerous alien creatures in between.\n";
	//cout << "Be wary of the dominant insectoid specie, XenoGen.\n";
	//cout << "Choose your path wisely...\n";
	//playerWep.attk = 0;
	//playerWep.AP = 0;
	//while (player1.playerName.empty()) {
	//	cout << "Enter your name: ";
	//	getline(cin, player1.playerName);
	//}
	//playerStatus(player1, playerWep, playerWep2);

	//cout << "\n+------------------+\n";
	//cout << "|     Job List     |\n";
	//cout << "+------------------+\n";
	//cout << endl;
	//Job jobs[4];
	//callJobs(jobs);
	//for (int i = 0; i <= 3; i++)
	//{
	//	cout << "==============\n      " << 1 + i << endl << "==============\n" << "-- " << jobs[i].name << " --" << endl;
	//	cout << "Hit Point: " << jobs[i].hp << endl;
	//	cout << "Stamina  : " << jobs[i].stam << endl;
	//	cout << "Defense  : " << jobs[i].def << endl;
	//}
	//
	////Job Pick
	//chooseJob(player1, jobs);

	//player1.hp = player1.maxHP;
	//player1.stam = player1.maxStam;
	//playerStatus(player1, playerWep, playerWep2);

	//cout << "\n+------------------+\n";
	//cout << "|    Weapon List   |\n";
	//cout << "+------------------+\n";

	//
	//
	//for (int i = 0; i < 3; i++) {
	//	cout << "          " << 1 + i << endl << "======================\n";
	//	cout << "--  " << weapons[player1.playerJob][i].name << "  --" << endl;
	//	cout << weapons[player1.playerJob][i].desc << endl;
	//	cout << "Attack       : " << weapons[player1.playerJob][i].attk << endl;
	//	cout << "Penetration  : " << weapons[player1.playerJob][i].AP << endl;
	//	cout << "Stamina Drain: " << weapons[player1.playerJob][i].stamReduc << endl << "======================\n";
	//}
	////Weapon Pick
	//chooseWeapon(player1, playerWep, weapons, playerWep2);
	//playerStatus(player1, playerWep, playerWep2);
	//chooseStat(player1);
	//int cont;
	//playerWep2 = weapons[4][0];
	//cout << "\nThe following weapon is a standard issued weapon.\n" << "=======================\n";
	//cout << "Weapon Name: "<<playerWep2.name << endl;
	//cout << playerWep2.desc << endl;
	//cout << "Attack     : "<<playerWep2.attk << endl;
	//cout << "Penetration: "<<playerWep2.AP << endl;
	//cout << "Stamina Use: "<<playerWep2.stamReduc << endl;
	//
	//cout << "Input any key to start...\n";
	//cin >> cont;
	//
	//
	//player1.stam -= 40;
	//player1.hp -= 20;
	//
	//playerStatus(player1, playerWep, playerWep2);
	//choosePath(player1, playerWep, weapons, playerWep2, playerInv);
	//playerStatus(player1, playerWep, playerWep2);
	//
	//playerBackpack(allItems, playerInv);
	//cout << endl;
	//
	//int test;
	//cout << "test";
	//cin >> test;
	return 0;
}