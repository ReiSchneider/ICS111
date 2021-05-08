#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main()
{ 
	double height;
	double radius;
	const double PI = 3.14159;

	cout << fixed << showpoint << setprecision(2);
	cout << "Enter the height of the cylinder: ";
	cin >> height;
	cout << endl;
	cout << "Enter the radius of the base of the cylinder: ";
	cin >> radius;
		cout << endl;
	cout << "Volume of the cylinder = " << PI * pow(radius, 2.0)* height << endl;
	cout << "Surface area: " << 2 * radius * + 2 * PI * pow(radius, 2.0) << endl;
	cout << "Volume of the cylinder = " << PI * pow(radius, 2.0)* height << endl;


	cin.get();
	cin.get();
	return 0;
}