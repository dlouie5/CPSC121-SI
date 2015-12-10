#pragma once
#include"Animal.h"

class Cat : public Animal
{
	std::string name;
public:
	Cat();
	Cat(std::string);
	void speak();
	void printName();
};


