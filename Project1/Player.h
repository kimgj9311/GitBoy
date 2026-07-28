#pragma once
#include <string>
#include <vector>
#include "Job.h"
#include "Monsters.h"
#include "Inventory.h"

using namespace std;

class Player
{

public:
	Inventory playerInv;
	int hp;
	int maxHP;
	int stam;
	int maxStam;
	int def;
	string job;
	string jobWep[3];
	int attk;
	int AP;
	string playerName;
	string location;
	bool isAlive = true;
	int damage;
	int playerJob;

	Inventory backpack;
	Inventory ammoPouch;
	
	
	void setJob(::Job* value) {
		hp = value->hp;
		maxHP = value->hp;
		stam = value->stam;
		maxStam = value->stam;
		def = value->def;
		job = value->name;
		playerJob = value->jobID;
	}
	////void playerAttack(Weapon playerWep) {
	//	//damage = playerWep.attk - ();
	//}
};
void playerAttack(Player& player1, vector<Monsters>& activeMonsters);
