//TODO: You need to write the three function definitions to make this code work

#include<iostream>

using namespace std;

//function prototypes
double avg(int, int, int);
void runContest(int);
void displayResults(int, double);

int main()
{
	int count; //Variable to keep track of how many contestants there are
	char cont; //Variable to check if the program should loop again
	do
	{
		cout << "How many contestants are there? ";
		cin >> count;
		cout << endl;

		runContest(count); //Function call to runContest

		cout << "Do you want to run another contest? (y/n): ";
		cin >> cont;
		cout << endl;

	} while (tolower(cont) == 'y');

	system("pause");
	return 0;
}
