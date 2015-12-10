#include<iostream>
#include"Dog.h"
#include"Cat.h"

int main()
{
	Animal B;
	Dog C("Cookie");
	Cat D("Wollie");

	Animal* a[3];

	a[0] = &B;
	a[1] = &C;
	a[2] = &D;

	for (int i = 0; i < 3; i++)
	{
		a[i]->print();
		a[i]->printName();
		a[i]->speak();
		std:: cout << std::endl;
	}

	return 0;
}