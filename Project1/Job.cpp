#include <iostream>
#include "Job.h"
using namespace std;
void callJobs(Job *jobs) {

	jobs[0].name = "Demo Expert";
	jobs[0].desc = "Excels at dealing damage to multiple enemies. Poor performance with single strong enemy.";
	jobs[0].hp = 150;
	jobs[0].stam = 80;
	jobs[0].def = 40;
	jobs[0].jobID = 0;


	jobs[1].name = "Sniper";
	jobs[1].desc = "Destroys single target with full force. Requires more rest in between attacks making them vulnerable to multiple enemies.\n Uses expensive weaponry, which requires expensive ammo.";
	jobs[1].hp = 100;
	jobs[1].stam = 90;
	jobs[1].def = 30;
	jobs[1].jobID = 1;

	jobs[2].name = "Juggernaut";
	jobs[2].desc = "Great defense at the cost of more stamina usage and mediocre damage. Their weapons require no ammo for attacks, but requires power to be effective";
	jobs[2].hp = 200;
	jobs[2].stam = 60;
	jobs[2].def = 60;
	jobs[2].jobID = 2;

	jobs[3].name = "CQC Specialist";
	jobs[2].desc = "Average def and damage but able to multiple attacks before resting.";
	jobs[3].hp = 140;
	jobs[3].stam = 120;
	jobs[3].def = 40;
	jobs[3].jobID = 3;

}