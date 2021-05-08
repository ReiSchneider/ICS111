#include <iostream>

using namespace std;

/*

Consider the following program segment
//include statement(s)
//using namespace statement
int main()
{
//variable declaration
//executable statements
//return statement
}
a. Write C++ statements that include the header files iostream.
b. Write a C++ statement that allows you to use cin, cout, and endl.
c. Write C++ statements that declare the following variables: num1, num2, num3, and average of type int.
d. Write C++ statements that store 125 into num1, 28 into num2, and -25 into num3.
e. Write a C++ statement that stores the average of num1, num2, and num3, into average.
f. Write C++ statements that output the values of num1, num2, num3, and average.
g. Compile and run your program.



*/

int main()
	{
		const int num1=125, num2=28, num3=-25;
		int	average;
		average = (num1 + num2 + num3) / 3;
		cout << "The values are: " << endl << "Num1= " << num1 << endl << "Num2= " << num2 << endl << "Num3= " << num3 << endl<< "The average is= " << average;
		cin.get();


		return 0;
	}