#include <iostream>

using namespace std;

/*

Consider the following C++ program in which the statements are in the incorrect order. 
Rearrange the statements so that it prompts the user to input the length and width of a rectangle and output the 
area and perimeter of the rectangle.

#include <iostream>
{
int main()
cout << "Enter the length: ";
cin >> length;
cout << endl;
int length;
area = length * width;
return 0;
int width;
cin>> width;
cout << "Enter the width: "
cout << endl;
cout << "Area = " << area << endl;
cout << "Perimeter = " << perimeter << endl;
int area;
using namespace std;
int perimeter;
}

*/

int main ()
	{
		int length, width, area, perimeter;
		cout << "Enter the length: ";
		cin >> length;
		cout << endl;
		cout << "Enter the width: "	;
		cin >> width;
		cout << endl;
		area = length * width;
		perimeter = (2*(length)) + (2*(width));
		cout << "Area = " << area << endl;
		cout << "Perimeter = " << perimeter << endl;
		cin.get();
		cin.get();

		return 0;
	}