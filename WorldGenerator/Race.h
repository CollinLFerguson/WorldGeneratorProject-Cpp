#pragma once
#include <iostream>
#include <string>

class Race
{
private:
	//std::string raceNames; //Array of common race names. Used to automatically generate names for people.
	std::string raceName;
	int raceAvgMaxAge;
	int raceAdulthoodAge;

public:
	Race();
	Race(std::string raceName, int raceAvgMaxAge, int raceAdulthoodAge);
	std::string getRaceName();
	void printRace();
};