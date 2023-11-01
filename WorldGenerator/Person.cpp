#include "Person.h"
#include <iostream>
#include <string>

class Person::Person
{
	//Race race;
	//Culture culture;
	//Religion religion;
	//State homeState;
	//Town home;

	// UNIQUE TO A PERSON // 
public:
	string name;
	string gender;
	int age;

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
};
