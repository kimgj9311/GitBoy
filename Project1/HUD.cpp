#include <iostream>
#include <Windows.h>
#include "Player.h"
#include "Weapon.h"
#include "HUD.h"
#include "Inventory.h"
#include "Item.h"

using namespace std;
void gotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void playerStatus(const Player& player1, const Weapon& playerWep, const Weapon& playerWep2) {
	system("cls");
	//cout << "=============================================================================================================================================\n";
	cout << "\n+------------------+\n";
	cout << "|    Player Info   |\n";
	cout << "+------------------+\n";
	cout << endl;
	cout << "Current Location: " << player1.location << endl;
	cout << "=====================================\n";
	cout << "            Character Stat            " << endl;
	cout << " Name       : " << player1.playerName << endl;
	cout << " Job        : " << player1.job << endl;
	cout << " Hit Point  : " << player1.hp << " / " << player1.maxHP << endl;
	cout << " Stamina    : " << player1.stam << " / " << player1.maxStam << endl;
	cout << " Defense    : " << player1.def << endl;
	cout << "=====================================\n";
	cout << "             Weapon Stat              " << endl;
	cout << " Weapon     : " << playerWep.name << endl;
	cout << " Attack     : " << playerWep.attk << endl;
	cout << " Penetration: " << playerWep.AP << endl;
	cout << " Side Weapon: " << playerWep2.name << endl;
	cout << "=====================================\n";
}
void playerBackpack(vector<Item>& allItems, const Inventory& playerInv){
	cout << "=====================================\n";
	cout << "+------------------+\n";
	cout << "|     Backpack     |\n";
	cout << "+------------------+\n";
	cout << endl;
	for (int i = 0; i < playerInv.backpack.size(); i++) {
		if (playerInv.backpack.size() == 0) {
			cout << "Inventory Empty";

		}
			int itemID = playerInv.backpack[i].itemID;
			int QTY = playerInv.backpack[i].QTY;
			cout << int(i + 1) << ". " << allItems[itemID].name << " x" << QTY << "\n";
		}
	
	
	cout << "=====================================\n";

}

