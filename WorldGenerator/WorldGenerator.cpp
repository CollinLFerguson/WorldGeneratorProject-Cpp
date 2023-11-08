// WorldGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Race.h"
#include "Person.h"
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    Race humans = Race("Human", 80, 16);
    Person dave = Person(humans, "dave", "male", 18);
    dave.printPerson();
}
