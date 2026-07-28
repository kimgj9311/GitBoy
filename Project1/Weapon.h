#pragma once
#include <string>
using namespace std;

class Weapon
{
public:
	int attk;
	int AP;
	string desc;
	string name;
	bool isAOE;
	int stamReduc;

};
void callWeps(Weapon weapons[][3]);