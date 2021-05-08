#include <iostream>
#include <iomanip>
#include "stdlib.h"

using namespace std;

/*

Write a program that prompts the capacity, in gallons, of an automobile fuel tank and the miles per gallons the automobile can be driven.
The program outputs the number of miles the automobile can be driven without refuelling.

*/

int main ()
{
	float gl,mpg;
	cout << "Please enter automobile fuel capacity in gallons: ";
	cin >> gl;
	cout << "Please enter automobile mileage (miles per gallon): ";
	cin >> mpg;
	cout << endl;
	cout << "Your automobile can run for " << gl*mpg << " miles" << endl;
	cin.get();
	cin.get();
	return 0;



}