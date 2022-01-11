#pragma once
using namespace std;

class chief
{
private:
	string name;
	int experience;

public:
	void setter(string Name, int Experience) {
		name = Name;
		experience = Experience;
	}
	string getName() {
		return name;
	}
	int getExperience() {
		return experience;
	}

	string cooking() {
		return "the chief has made the dish. enjoy your meal and have a nice day\n";
	}
};
