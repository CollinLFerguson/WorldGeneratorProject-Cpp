#pragma once
#include <iostream>
#include <string>

#include "Race.h"

class Person
{
private:
	Race* race;

	std::string name;
	std::string gender;
	int age;

public:
		Person(Race race, std::string name, std::string gender, int age);
		void printPerson();
};

