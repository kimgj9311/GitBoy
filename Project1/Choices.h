#pragma once

#include "Player.h"
#include "Job.h"
#include "HUD.h"
#include "Weapon.h"
#include "Inventory.h"
class Choices {
public:
	
};
void chooseJob(Player& player1, Job* jobs);

void chooseStat(Player& player1);

void chooseWeapon(Player& player1, Weapon& playerWep, Weapon weapons[][3], Weapon& playerWep2);
void choosePath(Player& player1, Weapon& playerWep, Weapon weapons[][3], Weapon& playerWep2, Inventory& playerInv);