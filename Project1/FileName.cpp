#include <iostream>
#include <string>

using namespace std;

class jobs
{
public:

	unsigned int hp[4] = { 160, 110, 200, 140 };
	int stam[4] = { 80, 140, 60, 70 };
	int attk[4] = { 80,150,50, 90 };
	int def[4] = { 50, 30,60,40 };//in percentage
	string job[4] = {
		"Demo Expert",
		"Sniper",
		"Juggernaut",
		"CQC Specialist"
	};

};
class monster
{
	int hp;
};

int main()
{
	jobs job[1];
	cout << job[1];

}
