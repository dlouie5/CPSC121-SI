#pragma once
#include<iostream>
#include<string>

class Animal
{
	std::string type;
public:
	Animal();
	Animal(std::string);
	virtual void speak()
	{
		std::cout << "Animal!\n";
	};
	virtual void printName()
	{
		std::cout << "No Name.\n";
	};
	void print() const;
};