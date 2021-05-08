#include <iostream>
#include <iomanip>
#include "stdlib.h"

using namespace std;

/*
Write a program that prompts the user to input a decimal number and outputs the number rounded to the nearest integer.
*/

int main ()

{
	float deci;
	int n;
	cout << "Please enter a decimal number: " ;
	cin >> deci;
	cout << endl;
	n = static_cast<int>(deci);
	cout << n << endl;

	if (n<10)
		cout << setprecision(1) << deci;
	else
		if (n >= 10)
			cout << setprecision(2) << deci;



	cin.get();
	cin.get();
	return 0;


}