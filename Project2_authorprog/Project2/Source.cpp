#include <iostream>
#include "stdlib.h"
#include "string"

using namespace std;

/*
				*************************************
				*		Programming Assignment 1	*
				*        Computer Programming I		*
				*             Author: ???			*
				*		Due Date: Monday, Jun. 24	*
				*************************************

In your program, substitute ??? with your own name. 
If necessary, adjust the positions and the number of the stars to produce a rectangle.


*/

int main ()
	{
		string nme, lsnm;
		int asn;
		cout << "Input Author First Name: ";
		cin >> nme;
		cout << endl;
		cout << "Input Author Last Name: ";
		cin >> lsnm;
		cout << "Input assignment number: ";
		cin >> asn;
		cin.get ();
		system ("cls");
		cout << "\n" << endl;
		cout << "\n" << endl;
		cout << "\n" << endl;
		cout << "\t\t\t" "*************************************" << endl;
		cout << "\t\t\t" "*      Programming Assignment " << asn << "     " "*" << endl;
		cout << "\t\t\t" "*       Computer Programming I      *" << endl;
		cout << "\t\t\t" "*        Author: " << lsnm << ", " << nme;
		cout << "\t    *" << endl;
		cout << "\t\t\t" "*     Due Date: Monday, Jun. 24     *" << endl;
		cout << "\t\t\t" "*************************************" << endl;
		cin.get ();
		return 0;






	}