#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Weapon.h"
#include "Inventory.h"

void gotoXY(int x, int y);

void playerStatus(const Player& player1, const Weapon& playerWep, const Weapon& playerWep2);
void playerBackpack(vector<Item>& allItems, const Inventory& playerInv);