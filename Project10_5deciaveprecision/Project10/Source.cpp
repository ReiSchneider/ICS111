#include <iostream>
#include <iomanip>
#include <stdio.h>
#include "stdlib.h"

using namespace std;

/*

Write a program that does the following:
a. Prompts the user to input five decimal numbers.
b. Prints the five decimal numbers.
c. Converts each decimal number to the nearest integer.
d. Adds the five integers.
e. Prints the sum and average of the five integers.


*/

int main ()

{
	float n1,n2,n3,n4,n5,fnl, sum;
	cout << "Enter a decimal number: ";
	cin >> n1;
	cout << "Enter another decimal number: ";
	cin >> n2;
	cout << "Enter a 3rd decimal number: ";
	cin >> n3;
	cout << "Enter a 4th decimal number: ";
	cin >> n4;
	cout << "Enter a 5th decimal number: ";
	cin >> n5;
	cout << "Press any key to continue" << endl;
	system ("cls");
	cout << "Your decimal numbers are: " << endl << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n5 << endl;
	n1=static_cast<int>(n1);
	n2=static_cast<int>(n2);
	n3=static_cast<int>(n3);
	n4=static_cast<int>(n4);
	n5=static_cast<int>(n5);
	cout << endl;
	sum = (n1 + n2 + n3 + n4 + n5);
	fnl = ((n1 + n2 + n3 + n4 + n5) / 5);
	cout << "Your sum answer is: " << sum << endl << "Your average is: " << fnl;
	cin.get();
	cin.get();
	return 0;
}