#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;


int main()

{
	double kg, pnds;
	cout << fixed << showpoint << setprecision(2);

	cout << "Enter weight in Kilograms ";
	cin >> kg;
	cout << endl;
	pnds = kg * 2.2;
	cout << "Your weight in pounds is " << pnds << " pounds";


	cin.get();
	cin.get();




}
