#pragma once
#include"Animal.h"

class Dog : public Animal
{
	std::string name;
public:
	Dog();
	Dog(std::string);
	void speak();
	void printName();
};


