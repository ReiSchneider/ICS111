#include <iostream>

using namespace std;

/*

Repeat Exercise 3 by declaring num1, num2, and num3, and average of type double. 
Store 75.35 into num1, -35.56 into num2, and 15.76 into num3.

*/

int main()
	{
		const double num1=75.35, num2=-35.56, num3=15.76;
		double average;
		average = (num1 + num2 + num3) / 3;
		cout << "The values are: " << endl << "Num1= " << num1 << endl << "Num2= " << num2 << endl << "Num3= " << num3 << endl<< "The average is= " << average;
		cin.get();


		return 0;
	}