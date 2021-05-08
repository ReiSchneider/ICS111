#include <iostream>

using namespace std;

/*

12.	Write a C++ program that prompts the user to input the elapsed time for an event in hours, minutes, and seconds. 
The program then outputs the elapsed time in seconds.

*/


int main()
{
	int hrs;
	int mns;
	int secs;

	int time = 0;
	cout << "Enter hours: ";
	cin >> hrs;
	cout << "Enter minutes: ";
	cin >> mns;
	cout << "Enter seconds: ";
	cin >> secs;
	cout << endl;

	time = (hrs * 3600) + (mns * 60) + secs;

	cout << "This is your time in seconds: " << time << "s";
	cout << endl;

	cin.get();
	cin.get();
	return 0;
} 