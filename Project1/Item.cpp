#include "Item.h"
#include <vector>




vector<Item> LoadItems()
{
    Item item;

    vector<Item> allItems;

    item.itemID = 0;
    item.name = "Scrap Metal";
    item.stackable = true;
    allItems.push_back(item);

    item.itemID = 1;
    item.name = "Biosubstance";
    item.stackable = true;
    allItems.push_back(item);

    item.itemID = 2;
    item.name = "XenoGen Fragment";
    item.stackable = true;
    allItems.push_back(item);

    item.itemID = 3;
    item.name = "XenoGen Plasma";
    item.stackable = true;
    allItems.push_back(item);

    item.itemID = 4;
    item.name = "XenoGen Adrenal Gland";
    item.stackable = true;
    allItems.push_back(item);

    item.itemID = 6;
    item.name = "Wood";
    item.stackable = true;
    allItems.push_back(item);


    return allItems;
}