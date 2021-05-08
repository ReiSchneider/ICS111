#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int x;
	cout << "enter value: ";
	cin >> x;

	do
	{
		cout << x%10;
		x = static_cast<int>(x/10);
	}
	while (x != 0);
	system ("pause");

}