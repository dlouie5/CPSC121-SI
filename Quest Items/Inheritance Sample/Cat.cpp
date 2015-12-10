#pragma once
#include"Cat.h"

Cat::Cat() :Animal("Cat"), name("")
{

}

Cat::Cat(std::string s) : Animal("Cat"), name(s)
{

}
void Cat::speak()
{
	std::cout << "Meow!\n";
}
void Cat::printName()
{
	std::cout << name << std::endl;
}