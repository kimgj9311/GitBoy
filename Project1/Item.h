#pragma once
#include <string>
#include <vector>

using namespace std;


class Item
{
public:
    int itemID;
    string name;
    bool stackable;
    int healPoint;
    int QTY;
};
vector<Item> LoadItems();
