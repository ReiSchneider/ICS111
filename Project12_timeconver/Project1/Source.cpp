#include <iostream>

using namespace std;

/*

1Write a C++ program that prompts the user to input the elapsed time for an event in seconds. 
The program then outputs the elapsed time in hours, minutes, and seconds. 
(For example, if the elapsed time is 9630 seconds, then the output is 2:40:30.)

*/


int main()
{
	int hrs;
	int mns;
	int secs;
	int time = 0;

	cout << "Enter time in seconds: ";
	cin >> time;
	cout << endl;

	hrs = static_cast<int>(time / 3600) ;
	time = time - hrs * 3600;

	mns = static_cast<int>(time / 60);
	secs = time - mns * 60;
	
	cout << hrs;
	if (mns < 10)
		cout << ":0" << mns;
	else
		cout << ":" << mns;
	if (secs < 10)
		cout << ":0" << secs;
	else 
		cout << ":" << secs;
	
	cout << endl;

	cin.get();
	cin.get();
	return 0;
} 