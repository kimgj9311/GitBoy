#include <iostream>
#include <Windows.h>
#include <vector>
#include "Player.h"
#include "Weapon.h"
#include "HUD.h"
#include "Inventory.h"
#include "Item.h"
#include "Monsters.h"

void callMonsters(Monsters monsters[]) {


	monsters[0].name = "Soft Shelled 5-Ton XenoGen Larva";
	monsters[0].hp = 200;
	monsters[0].attk = 20;
	monsters[0].def = 20;

	monsters[1].name = "Layered Hard Chitin XenoGen";
	monsters[1].hp = 140;
	monsters[1].attk = 60;
	monsters[1].def = 60;

	monsters[2].name = "XenoGen Guardian";
	monsters[2].hp = 200;
	monsters[2].attk = 50;
	monsters[2].def = 50;

	monsters[3].name = "Full Grown XenoGen Matriarch";
	monsters[3].hp = 300;
	monsters[3].attk = 130;
	monsters[3].def = 70;

	monsters[4].name = "Barbed-Tooth Pouncer";
	monsters[4].hp = 150;
	monsters[4].attk = 100;
	monsters[4].def = 35;

	monsters[5].name = "Three Tongued Canid";
	monsters[5].hp = 100;
	monsters[5].attk = 70;
	monsters[5].def = 30;

	monsters[6].name = "Amorphous Herbaceous Abomination";
	monsters[6].hp = 120;
	monsters[6].attk = 30;
	monsters[6].def = 20;

	monsters[7].name = "Bark Covered Monstrosity";
	monsters[7].hp = 150;
	monsters[7].attk = 40;
	monsters[7].def = 60;
	
	monsters[7].name = "Five-Legged Instectoid";
	monsters[7].hp = 150;
	monsters[7].attk = 70;
	monsters[7].def = 60;
}
void mobAttk(Player& player1, Monsters monsters[], int monsID)
{
	int dmg;
	dmg = monsters[monsID].attk - player1.def;
	player1.hp -= dmg;


	cout << "\nThe monsters attack!\n";
	cout << "You received " << dmg << " damage.\n";
	cout << "Your HP: " << player1.hp << " / " << player1.maxHP << "\n";
}