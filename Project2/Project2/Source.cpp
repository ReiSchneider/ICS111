#include <iostream>
#include <iomanip>
#include "stdlib.h"
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inData ("specs.txt");
	ofstream outData;
	string line;


	 getline (inData, line);

	 cout << line << endl;

	cout << "test";

	cin.get();
	cin.clear();

	cout << "test";

	inData.close();
	outData.close();

	cin.get();
return 0;
}

