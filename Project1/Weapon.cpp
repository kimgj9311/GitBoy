#include <iostream>
#include "weapon.h"
using namespace std;

void callWeps(Weapon weapons[][3]) {
	//Demo Expert
	weapons[0][0].name = "Bio-Disruptor GL";
	weapons[0][0].desc = "Grenade launcher that launches rounds that are hazardous to living cells. \nStrong against unarmored enemies, but weak against armored targets.\n";
	weapons[0][0].attk = 80;
	weapons[0][0].AP = 10;
	weapons[0][0].isAOE = true;
	weapons[0][0].stamReduc = 30;

	weapons[0][1].name = "Annihilator Charges";
	weapons[0][1].desc = "Smaller but far more destructive and concentrated than its predecessor, C4.\nGood balance of damage and penetration. Just throw and detonate\n";
	weapons[0][1].attk = 60;
	weapons[0][1].AP = 40;
	weapons[0][1].isAOE = true;
	weapons[0][1].stamReduc = 20;

	weapons[0][2].name = "Matter Shredder";
	weapons[0][2].desc = "Like its predecessors, RPG models, it fires a single rocket that shoots out thousands of shrapnels upon impact. \nShreds armors to bits with downside of having low damaging power and being bulky.\n";
	weapons[0][2].attk = 40;
	weapons[0][2].AP = 50;
	weapons[0][2].isAOE = true;
	weapons[0][2].stamReduc = 40;
	//Sniper
	weapons[1][0].name = "Trailblazer";
	weapons[1][0].desc = "High firepower railgun. Delivers massive kinetic energy but its blunt projectile give poor penetration performance. \nHaving to reload every round becomes exhausting.\n";
	weapons[1][0].attk = 100;
	weapons[1][0].AP = 10;
	weapons[1][0].isAOE = false;
	weapons[1][0].stamReduc = 35;

	weapons[1][1].name = ".50 Hawk";
	weapons[1][1].desc = "Anti-Material rifle that delivers extremely powerful penetrating round. \nExcels at both damage and penetration, but very cumbersome with incredible recoil.\n";
	weapons[1][1].attk = 120;
	weapons[1][1].AP = 50;
	weapons[1][1].isAOE = false;
	weapons[1][1].stamReduc = 50;

	weapons[1][2].name = "AR-1500";
	weapons[1][2].desc = "Marksman rifle with lower caliber rounds. \nVery easy to handle, but low pentration and firepower compared to other weapons.\n";
	weapons[1][2].attk = 50;
	weapons[1][2].AP = 20;
	weapons[1][2].isAOE = false;
	weapons[1][2].stamReduc = 25;
	//Juggernaut
	weapons[2][0].name = "Plasma Cleaver";
	weapons[2][0].desc = "Two-Handed sword. The blade is energized with plasma, capable of slicing flesh like butter. \nHuge and heavy weapon.\n";
	weapons[2][0].attk = 65;
	weapons[2][0].AP = 20;
	weapons[2][0].isAOE = true;
	weapons[2][0].stamReduc = 40;

	weapons[2][1].name = "Energy Shield + Slicer";
	weapons[2][1].desc = "Can use shield for defense when needed. \nThe Slicer is a smaller version of the Plasma Cleaver which can be carry with one hand.\n";
	weapons[2][1].attk = 35;
	weapons[2][1].AP = 10;
	weapons[2][1].isAOE = false;
	weapons[2][1].stamReduc = 30;

	weapons[2][2].name = "10k Warhammer";
	weapons[2][2].desc = "Two-Handed 10kg warhammer. Great damage, but very heavy and has no penetration.\n";
	weapons[2][2].attk = 100;
	weapons[2][2].AP = 0;
	weapons[2][2].isAOE = true;
	weapons[2][2].stamReduc = 50;
	//CQC Specialist
	weapons[3][0].name = "Krisp-45";
	weapons[3][0].desc = "Compact SMG loaded with rounds that corrodes materials on impact. Poor damage performance but good penetration. Very easy to handle.\n";
	weapons[3][0].attk = 35;
	weapons[3][0].AP = 50;
	weapons[3][0].isAOE = false;
	weapons[3][0].stamReduc = 20;

	weapons[3][1].name = "Winchester 2345";
	weapons[3][1].desc = "Huge Lever-action shotgun loaded with 8 gauge shells, far deadlier than its predecessor 12gauge shells. Poor penetration with massive recoil.\n";
	weapons[3][1].attk = 70;
	weapons[3][1].AP = 10;
	weapons[3][1].isAOE = false;
	weapons[3][1].stamReduc = 40;

	weapons[3][2].name = "M416 Carbine";
	weapons[3][2].desc = "An assault rifle with high capable magazines. Shorter barrel means less firepower but easier to handle.\n";
	weapons[3][2].attk = 45;
	weapons[3][2].AP = 20;
	weapons[3][2].isAOE = false;
	weapons[3][2].stamReduc = 25;

	weapons[4][0].name = "G-Bar";
	weapons[4][0].desc = "A tactical knife issue to every mercenaries of GenoS. Used as a last resort or to finish off enemies.\n";
	weapons[4][0].attk = 20;
	weapons[4][0].AP = 10;
	weapons[4][0].isAOE = false;
	weapons[4][0].stamReduc = 10;

}