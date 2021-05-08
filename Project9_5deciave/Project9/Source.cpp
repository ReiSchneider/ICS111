#include <iostream>
#include <iomanip>
#include "stdlib.h"

using namespace std;

/*
	Write a program that prompts the user to input five decimal numbers.
	The program should then add the five decimal numbers, 
	convert the sum to the nearest integer, and print the result.

*/

int main ()
{
	float dec1, dec2, dec3, dec4, dec5, aver;
	cout << "Enter first decimal number: ";
	cin >> dec1;
	cout << "Enter second decimal number: ";
	cin >> dec2;
	cout << "Enter third decimal number: ";
	cin >> dec3;
	cout << "Enter fourth decimal number: ";
	cin >> dec4;
	cout << "Enter fifth decimal number: ";
	cin >> dec5;
	system ("cls");
	aver = (dec1 + dec2 + dec3 + dec4 + dec5) / 5;

	if (aver < 10)
		cout << "AVERAGE: "  << setprecision(1) << aver;
	else
		cout << "AVERAGE: "  << setprecision(2) << aver;

	cin.get();
	cin.get();

	return 0;


}