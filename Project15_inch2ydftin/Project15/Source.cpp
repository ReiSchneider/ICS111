#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

/*

Write a program that prompts the user to input a length expressed in centimeters.
The program should then convert the length to inches (to the nearest inch) and output the length expressed in yards, feet, and inches, in that order. 
For example, suppose the input for centimeters is 312. To the nearest inch, 312 centimeters is equal to 123 inches.
123 inches would thus be output as:
3 yard(s), 1 feet (foot), and 3 inch(es).


*/

int main ()
	// 1 in = 2.54cm, 1yrd = 3ft = 36 inches, 1 ft=12 inch
	// Property of ProjectHDX | Kyle Cedrick R. Cancio © 2009

{
	double i1, cm, i2;
	int yard, ft;
	cout << "Enter measurment in cm: " ;
	cin >> cm;

	i1 = cm / 2.54;
	yard = static_cast<int>(i1 / 36);
	i1 = i1 - (yard * 36);
	ft = static_cast<int>(i1 / 12);
	i2 = i1 - (ft * 12);

	cout << yard << "yrd " << ft << "ft " << setprecision(1) << i2 << "inches " << endl;

	system("pause");
	return 0;

}
