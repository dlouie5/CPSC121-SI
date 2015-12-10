#pragma once
#include"Dog.h"

Dog::Dog() :Animal("Dog"), name("")
{

}

Dog::Dog(std::string s) : Animal("Dog"), name(s)
{

}
void Dog::speak()
{
	std::cout << "Bark!\n";
}
void Dog::printName()
{
	std::cout << name << std::endl;
}