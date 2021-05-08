#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main ()

{
	ifstream inFile;
	ofstream outFile;
	inFile.open ("inFile.txt", ios::app);
	outFile.open ("outFile.txt");

	string  chs3, chs4, chs5;
	char chs8;
	float chs, chs1, chs2, chs6, chs7, perimeter, area, carea, cper, balance;
	float const pi=3.1416;

	inFile >> chs >> chs1 >> chs2 >> chs3 >> chs4 >> chs5 >> chs6 >> chs7 >> chs8;
	area = chs * chs1;
	perimeter = (2*(chs))+(2*(chs1));
	carea = pi * chs2 * chs2;
	cper = 2*pi*chs2;

	if (!inFile)
	{
		cout << "Cannot open '\inFile.txt', please check your directory if file is existing";

	}
	else

	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);

	cout << "Rectangle:" << endl << "Length= " << setprecision(2) <<  chs << ", width= " << setprecision(2) << chs1 << setprecision(2) << ", area= " << area << ", perimeter= " << setprecision(2) <<  perimeter;

	cout << endl << endl;

	cout << "Circle:" << endl << "Radius= " << setprecision(2) << chs2 << ", Area= " << setprecision(2) << carea << ", perimeter= " << setprecision(2) << cper << endl;

	cout << "Name: " << chs3 << " " << chs4 << ", age: " << chs5 << endl;

	cout << "Beginning balance = $" << chs6 << ", interest rate = " << chs7 << endl ;
	
	balance = chs6 + (((chs7/12)/100)*chs6);

	cout << "Balance at the end of the month = $"  << balance << endl;

	cout << "The character that comes after " << chs8 << " in the ASCII set is B" << endl << endl;

	outFile << fixed << showpoint;


	outFile << "Rectangle:" << endl << "Length= " << setprecision(2) <<  chs << ", width= " << setprecision(2) << chs1 << setprecision(2) << ", area= " << area << ", perimeter= " << setprecision(2) <<  perimeter;

	outFile << endl << endl;

	outFile << "Circle:" << endl << "Radius= " << setprecision(2) << chs2 << ", Area= " << setprecision(2) << carea << ", perimeter= " << setprecision(2) << cper << endl;

	outFile << "Name: " << chs3 << " " << chs4 << ", age: " << chs5 << endl;

	outFile << "Beginning balance = $" << chs6 << ", interest rate = " << chs7 << endl ;
	
	balance = chs6 + (((chs7/12)/100)*chs6);

	outFile << "Balance at the end of the month = $"  << balance << endl;

	outFile << "The character that comes after " << chs8 << " in the ASCII set is B";

	inFile.close();
	outFile.close();

	cout << "Output to outFile.txt successful";
	cin.get();

	return 0;

}
