#include "Race.h"
#include "iostream"

Race::Race()
{
	this->raceName = "";
	this->raceAvgMaxAge = 0;
	this->raceAdulthoodAge = 0;
}
Race::Race(std::string raceName, int raceAvgMaxAge, int raceAdulthoodAge)
{
	this-> raceName = raceName;
	this-> raceAvgMaxAge = raceAvgMaxAge;
	this->raceAdulthoodAge = raceAdulthoodAge;
};

void Race::printRace()
{
	std::cout << "Race Name: " << getRaceName() << "\n" << "Race Average Max Age: " << raceAvgMaxAge << "\n"
		<< "Race Adulthood Age: " << raceAdulthoodAge << "\n";
	std::cout << "----------------------------------\n";
};


std::string Race::getRaceName()
{
	return raceName;
};