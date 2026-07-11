#include <iostream>
#include <string>
#include <vector>
#include<MonsterClass>


using namespace std;


class Loot
{
public:

};



class Job
{
public:
	string name;
	int hp;
	int stam;
	int def;
	
};

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

class Player
{
public:

	int hp;
	int stam;
	int def;
	string job;
	string jobWep[3];
	int attk;
	int AP;
	string playerName;

	int damage;

	void setJob(::Job* value) {
		hp = value->hp;
		stam = value->stam;
		def = value->def;
		job = value->name;
	}
	void playerAttack(Weapon playerWep) {
		//damage = playerWep.attk - ();
	}
};


void playerStatus(Player player1,Weapon playerWep) {
	
	cout << "\n+------------------+\n";
	cout << "|    Player Info   |\n";
	cout << "+------------------+\n";
	cout << endl;
	cout << "=====================================\n";
	cout << "            Character Stat            " << endl;
	cout << " Name       : " << player1.playerName << endl;
	cout << " Job        : " << player1.job << endl;
	cout << " Hit Point  : " << player1.hp << endl;
	cout << " Stamina    : " << player1.stam << endl;
	cout << " Defense    : " << player1.def << endl;
	cout << "=====================================\n";
	cout << "             Weapon Stat              " << endl;
	cout << " Weapon Name: " << playerWep.name << endl;
	cout << " Attack     : " << playerWep.attk << endl;
	cout << " Penetration: " << playerWep.AP << endl;
	cout << "=====================================";

}
void callJobs(Job* jobs) {
	
	jobs[0].name = "Demo Expert";
	jobs[0].hp = 120;
	jobs[0].stam = 80;
	jobs[0].def = 40;

	jobs[1].name = "Sniper";
	jobs[1].hp = 100;
	jobs[1].stam = 90;
	jobs[1].def = 30;

	jobs[2].name = "Juggernaut";
	jobs[2].hp = 200;
	jobs[2].stam = 60;
	jobs[2].def = 60;

	jobs[3].name = "CQC Specialist";
	jobs[3].hp = 140;
	jobs[3].stam = 120;
	jobs[3].def = 40;
}
void callMonsters(Monster monsters[5]) {
	
	
	monsters[0].name = "Three Tongued Canid";
	monsters[0].hp= 100;
	monsters[0].attk=70;
	monsters[0].def=30;

	monsters[1].name = "Layered Hard Chitin XenoGen";
	monsters[1].hp = 140;
	monsters[1].attk = 60;
	monsters[1].def = 60;

	monsters[2].name = "Soft Shelled 5-Ton XenoGen Larva";
	monsters[2].hp = 200;
	monsters[2].attk = 20;
	monsters[2].def = 20;

	monsters[3].name = "Barbed-Tooth Shadow Walker";
	monsters[3].hp = 150;
	monsters[3].attk = 100;
	monsters[3].def = 35;

	monsters[4].name = "Full Grown Matriarch XenoGen";
	monsters[4].hp = 300;
	monsters[4].attk = 130;
	monsters[4].def = 70;

}
void callWeps(Weapon weapons[][3]) {
	//Demo Expert
	weapons[0][0].name = "Bio-Disruptor GL";
	weapons[0][0].desc = "Grenade launcher that launches rounds that are hazardous to living cells. Strong against unarmored enemies, but weak against armored targets.\n";
	weapons[0][0].attk = 60;
	weapons[0][0].AP = 10;
	weapons[0][0].isAOE = true;
	weapons[0][0].stamReduc = 30;

	weapons[0][1].name = "Annihilator Charges";
	weapons[0][1].desc = "Smaller but far more destructive and concentrated than its predecessor, C4. Good balance of damage and penetration. Just throw and detonate\n";
	weapons[0][1].attk = 50;
	weapons[0][1].AP = 30;
	weapons[0][1].isAOE = true;
	weapons[0][1].stamReduc = 20;

	weapons[0][2].name = "Matter Shredder";
	weapons[0][2].desc = "Like its predecessor, RPG model, it fires a single rocket but it shoots out thousands of shrapnels upon impact. Shreds armors to bits with downside of having low damaging power and being bulky.\n";
	weapons[0][2].attk = 50;
	weapons[0][2].AP = 30;
	weapons[0][2].isAOE = true;
	weapons[0][2].stamReduc = 40;
	//Sniper
	weapons[1][0].name = "Trailblazer";
	weapons[1][0].desc = "High firepower railgun. Delivers massive kinetic energy but its blunt projectile give poor penetration performance. Having to reload every round becomes exhausting.\n";
	weapons[1][0].attk = 100;
	weapons[1][0].AP = 10;
	weapons[1][0].isAOE = false;
	weapons[1][0].stamReduc = 35;
	
	weapons[1][1].name = ".50 Hawk";
	weapons[1][1].desc = "Anti-Material rifle that delivers extremely powerful penetrating round. Excels at both damage and penetration, but very cumbersome.\n";
	weapons[1][1].attk = 120;
	weapons[1][1].AP = 50;
	weapons[1][1].isAOE = true;
	weapons[1][1].stamReduc = 50;

	weapons[1][2].name = "AR-1500";
	weapons[1][2].desc = "Marksman rifle with lower caliber rounds. Very easy to handle, but low pentration and firepower compared to other weapons.\n";
	weapons[1][2].attk = 60;
	weapons[1][2].AP = 20;
	weapons[1][2].isAOE = true;
	weapons[1][2].stamReduc = 25;
	//Juggernaut
	weapons[2][0].name = "Plasma Cleaver";
	weapons[2][0].desc = "Two-Handed sword. The blade is energized with plasma capable of slicing flesh like butter. Huge and heavy weapon.\n";
	weapons[2][0].attk = 45;
	weapons[2][0].AP = 10;
	weapons[2][0].isAOE = true;
	weapons[2][0].stamReduc = 40;

	weapons[2][1].name = "Energy Shield + Slicer";
	weapons[2][1].desc = "Can use shield for defense when needed. The slicer is a smaller version of the Plasma Cleaver which can be carry with one hand.\n";
	weapons[2][1].attk = 35;
	weapons[2][1].AP = 10;
	weapons[2][1].isAOE = true;
	weapons[2][1].stamReduc = 30;

	weapons[2][2].name = "10k Warhammer";
	weapons[2][2].desc = "Two-Handed 10kg warhammer. Great damage, but very heavy and has no penetration.\n";
	weapons[2][2].attk = 100;
	weapons[2][2].AP = 0;
	weapons[2][2].isAOE = true;
	weapons[2][2].stamReduc = 40;
	//CQC Specialist
	weapons[3][0].name = "Krisp-45";
	weapons[3][0].desc = "Compact SMG loaded with rounds that corrodes materials on impact. Poor damage performance but good penetration. Very easy to handle.\n";
	weapons[3][0].attk = 25;
	weapons[3][0].AP = 40;
	weapons[3][0].isAOE = true;
	weapons[3][0].stamReduc = 20;

	weapons[3][1].name = "Winchester 2345";
	weapons[3][1].desc = "Lever-action shogun loaded with 8 gauge shells, far deadlier than its predecessor 12gauge shells. Poor penetration with massive recoil.\n";
	weapons[3][1].attk = 60;
	weapons[3][1].AP = 10;
	weapons[3][1].isAOE = true;
	weapons[3][1].stamReduc = 40;

	weapons[3][2].name = "M416 Carbine";
	weapons[3][2].desc = "An assault rifle with high capable magazines. Shorter barrel means less firepower but easier to handle.\n";
	weapons[3][2].attk = 35;
	weapons[3][2].AP = 20;
	weapons[3][2].isAOE = true;
	weapons[3][2].stamReduc = 25;

}
void callLoot(Loot LootDrop) {

}

int main()
{
	Player player1;
	Weapon playerWep;
	cout << "+--------------------------------------+\n" << "|            Text RPG Game             |\n" << "+--------------------------------------+\n";

	cout << "Your ship has crashed, soldier. Stranded in an alien planet, you must stay alive until rescue arrives.\n There are many alien creatures around you that wants to kill you. Choose your path wisely.\n";

	playerWep.attk = 0;
	playerWep.AP = 0;
	while (player1.playerName.empty()) {
		cout << "Enter your name: ";
		getline(cin, player1.playerName);
	}

	cout << "\n+------------------+\n";
	cout << "|     Job List     |\n";
	cout << "+------------------+\n";
	cout << endl;
	Job jobs[4];
	callJobs(jobs);
	for (int i = 0; i <= 3; i++)
	{
		cout<< "==============\n      "<<1 + i << endl << "==============\n" << "-- " << jobs[i].name << " --" << endl;
		cout << "Hit Point: " << jobs[i].hp << endl;
		cout << "Stamina  : " << jobs[i].stam << endl;
		cout << "Defense  : " << jobs[i].def << endl;
	}

	int selectjob;
	int playerJob;
	bool validChoice= false;
	
	while (!validChoice) {
		cout << "Choose your job: ";
		if (!(cin >> selectjob)) {
			cout << "\nPlease enter a number.\n";
			cin.clear();
			cin.ignore(1000, '\n');
			continue;
		}
		switch ((selectjob))
		{
		case 1:
			player1.setJob(&jobs[0]);
			playerJob = 0;
			validChoice = true;
			break;
			
		case 2:
			player1.setJob(&jobs[1]);
			playerJob = 1;
			validChoice = true;
			break;
		case 3:
			player1.setJob(&jobs[2]);
			playerJob = 2;
			validChoice = true;
			break;
		case 4:
			player1.setJob(&jobs[3]);
			playerJob = 3;
			validChoice = true;
			break;
		default:
			cout << "\nInvalid Input. Enter 1, 2, 3, or 4\n";
			break;
			

		}
	}

	int select;
	playerStatus(player1, playerWep);
	validChoice=false;
		while (!validChoice) {
			cout << "\n1. HP\n2. Stamina\n3. Defense\n";
			cout << "\nYou may add 10 points to your selected stat\n";
			cin >> select;
			
			switch (select)
			{
			case 1:
				player1.hp = player1.hp + 10;
				validChoice = true;
				break;
			case 2:
				player1.stam = player1.stam + 10;
				validChoice = true;
				break;
			case 3:
				player1.def = player1.def + 10;
				validChoice = true;
				break;
			default:
				playerStatus(player1,playerWep);
				cout << "\nInvalid Input\n";
				cout << "Input 1, 2, 3, or 4: \n";
				break;
			}
		}
		playerStatus(player1,playerWep);
	
	cout << "\n+------------------+\n";
	cout << "|    Weapon List   |\n";
	cout << "+------------------+\n";

	Weapon weapons[12][3];
	callWeps(weapons);
	
	for (int i = 0; i < 3; i++) {
		cout <<"          "<< 1 + i <<endl<< "======================\n";
		cout << "--  "<< weapons[playerJob][i].name <<"  --"<< endl;
		cout << weapons[playerJob][i].desc << endl;
		cout << "Attack     : " << weapons[playerJob][i].attk << endl;
		cout << "Penetration: " << weapons[playerJob][i].AP << endl << "======================\n";
	}
	
	validChoice = false;
	while (!validChoice) {
		cout << "Choose your weapon: ";
		cin >> select;

		switch (select)
		{
		case 1:
			playerWep= weapons[playerJob][0];
			validChoice = true;
			break;
		case 2:
			playerWep = weapons[playerJob][1];
			validChoice = true;
			break;
		case 3:
			playerWep = weapons[playerJob][2];
			validChoice = true;
			break;
		default:
			playerStatus(player1,playerWep);
			cout << "\nInvalid Input\n";
			cout << "Input 1, 2, 3, or 4: \n";
			break;
		}
	}
	system("cls");
	playerStatus(player1, playerWep);
	cout << endl ;

	

	return 0;
}