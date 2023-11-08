#include "Person.h"

#include <string>
#include <iostream>

#include "Race.h"

	//Culture culture;
	//Religion religion;
	//State homeState;
	//Town home;

	// UNIQUE TO A PERSON // 
	Person::Person(Race race, std::string name, std::string gender, int age)
	{
		this->race = &race;
		this-> name = name;
		this-> gender = gender;
		this-> age = age;
	}

	void Person::printPerson()
	{
		race->printRace();
		std::cout << "I am a " << race->getRaceName() << "my name is " << name << ", I am " << age << " and I am a " << gender << ".\n";
	}
