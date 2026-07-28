#pragma once
#include <string>
#include <vector>
#include "Item.h"
#include <map>
	

class Inventory
{
public:
   
    vector<Inventory>backpack;
    string name;
    int itemID;
    int QTY;
    int maxQTY = 64;
    string inventoryType;
    void addItem(int itemID, int addQTY);
   
};

