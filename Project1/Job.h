#pragma once
#include <string>
using namespace std;
class Job
{
public:
	string name;
	string desc;
	int hp;
	int maxHP;
	int stam;
	int maxStam;
	int def;
	int jobID;
	

};
void callJobs(Job *jobs);
