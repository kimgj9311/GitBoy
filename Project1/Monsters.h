#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Player.h"

using namespace std;
class Monsters
{
public:
	string name;
	int hp;
	int attk;
	int def;
	//void lootDrop(Loot value) {}

};
void callMonsters(Monsters monsters[]);

