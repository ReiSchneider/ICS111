
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

/*

One metric ton is approximately 2205 pounds. Write a program that prompts the user to input the amount of rice, in pounds, in a bag. 
The program outputs the number of bags needed to store one metric ton of rice.

*/

/*
int main ()

{
	double const mton=2205;
	double pounds;
	int bags;
	cout << "Enter amount of rice that a bag can carry (in pounds): ";
	cin >> pounds;
	cin.get();
	cout << "\nPress ENTER key to calculate how many rice bags needed to store 1 metric ton of rice";
	cin.get();
	system ("cls");

	if (pounds < mton)
	{
		bags = static_cast<int>((mton / pounds));
		bags = bags + 1;
		cout << "\n\n\n\t\t************************************************" << endl << "\n\n\n\t\t\t      You will need " << bags << " bags" << endl << "\n\n\n\t\t************************************************";
	}
	else
		if (pounds >= 2205)
		{
			cout << "\n\n\n\t\t************************************************" << endl << "\n\n\n\t\t\t      You will need 1 bag" << endl << "\n\n\n\t\t************************************************";
		}

	cin.get();







	return 0;
}
*/

	int main() 
	{
		double pounds;
		int bags;
		double const metrictons = 2205;
		
		cout << "Enter amount of rice per bag (in pounds) = "; 
		cin >> pounds; 
		cout << endl;
		cout << "This program will calculate how many bag of rice needed to store 1 metric ton of rice" << endl << endl;
		system ("pause");
		cout << endl << endl;
		if (pounds >= metrictons)
		{
			cout << "You will need 1 bag of rice";
		}
		else if (pounds < metrictons)
		{
			bags = static_cast<int>(metrictons/pounds);
			bags++;
			cout << "You will need " << bags << " bag/s";
		}
		cout << endl << endl;
		system ("pause");
		return 0; 
	}
