#include <iostream>
#include <iomanip>
#include "stdlib.h"

using namespace std;

/*

17.	You found an exciting summer job for five weeks. It pays, say, $15.50 per hour. Suppose
that the total tax you pay on your summer job income is 14%. After paying the taxes, you spend 10% of your net income to buy new clothes 
and other accessories for the next school year and 1% to buy school supplies. After buying clothes and school supplies, 
you use 25% of the remaining money to buy savings bonds. For each dollar you spend to buy savings bonds, your parents spend $0.50 
to buy additional savings bonds for you. Write a program that prompts the user to enter the pay rate for an hour and the number
of hours you worked each week. The program then outputs the following:
a. Your income before and after taxes from your summer job.
b. The money you spend on clothes and other accessories.
c. The money you spend on school supplies.
d. The money you spend to buy savings bonds.
e. The money your parents spend to buy additional savings bonds for you.


*/


int main()

{
	double const itax=0.14, ca=0.1, ss=0.01, sb=0.25, spd=0.50;
	double payrate, hours, i1, i2, i3, i4, i5, i6, i7, i8, i9;
	cout << "Enter Salary Per Hour: $";
	cin >> payrate;
	cout << "Enter work hours per day: ";
	cin >> hours;

	i1 = 5 * (payrate * hours);
	i2 = 25 * i1;
	i3 = i2 - (i2 * itax);
	i4 = i3 - (i3 * ca);
	i5 = i4 - (i4 * ss);
	i6 = i5 - (i5 * sb);
	i7 = static_cast<int>(i5 * sb);
	i8 = i7 * spd;
	
	system ("cls");

	cout << "Your total income without tax: " << endl << "Per Week (5 Days): $" << i1 << endl << "For 5 Weeks: $" << i2 << endl << endl;
	cout << "Your net income for 5 weeks after deducting a 14% income tax: $" << i3 << endl << endl;
	cout << "Your remaining income after spending 10% for clothes and accessories: $" << i4 << endl << endl;
	cout << "Your remaining income after spending 1% for school supplies: $" << i5 << endl << endl;
	cout << "Your remaining income after spending 25% to buy saving bonds: $" << i6 << endl << endl;
	cout << "The total money your parents spent to buy additional savings bonds for every $1 you spent on saving bonds: $" << i8;
	cin.get();
	cin.get();
	return 0;

}
