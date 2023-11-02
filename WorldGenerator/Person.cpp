#include "Person.h"
#include <string>
#include <iostream>

	//Race race;
	//Culture culture;
	//Religion religion;
	//State homeState;
	//Town home;

	// UNIQUE TO A PERSON // 
	Person::Person()
	{
		name = "dave";
		gender = "male";
		age = 20;
	}

	void Person::printPerson()
	{
		std::cout << "my name is " << name << ", I am " << age << " and I am a " << gender << ".\n";
	}
