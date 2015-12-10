#pragma once
#include"Animal.h"

Animal::Animal() : type("")
{

}

Animal::Animal(std::string s) : type(s)
{

}

void Animal::print()const
{
	std::cout << "The type of the animal is: " << type << std::endl;
}