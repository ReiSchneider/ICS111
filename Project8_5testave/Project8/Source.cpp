#include <iostream>
#include <iomanip>
#include "stdlib.h"

using namespace std;

/*

Write a program that prompts the user to enter five test scores and then prints the average test score. 
(Assume that the test scores are decimal numbers.)

*/

int main ()
{
	float test1, test2, test3, test4, test5, aver;
	cout << "Enter first test score: ";
	cin >> test1;
	cout << "Enter second test score: ";
	cin >> test2;
	cout << "Enter third test score: ";
	cin >> test3;
	cout << "Enter fourth test score: ";
	cin >> test4;
	cout << "Enter fifth test score: ";
	cin >> test5;
	system ("cls");
	aver = (test1 + test2 + test3 + test4 + test5) / 5;
	cout << "Your average test score is: " << aver;
	cin.get();
	cin.get();

	return 0;


}