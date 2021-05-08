#include <iostream>
#include <iomanip>
#include "stdlib.h"

using namespace std;

/*

18.	Write a program that prompts the user to input a number of quarters, dimes, and nickels. 
The program then outputs the total value of the coins in pennies.

*/

int main ()

{
	int nick, dime, quart;
	double pen;
	pen = 0;
	cout << "Enter amount of nickel: ";
	cin >> nick;
	cout << "Enter amount of dime: ";
	cin >> dime;
	cout << "Enter amount of quarter: ";
	cin >> quart;
	pen = (5 * nick) + (10 * dime) + (25 * quart);
	system ("cls");
	cout << "The amount of pennies you'll receive: " << pen;
	cin.get();
	cin.get();



	return 0;
}
