#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

/*

Coded by Kyle Cedrick R. Cancio | ProjectHDX (c) 2009-2013

*/

int main()

{
	cout << fixed << showpoint << setprecision(2);
	double box, sl, pr, ga, total, i1, i2, i3, i4;
	cout << "\t\t\t  *  Ticket Sales System  *" << endl;
	cout << "\t\t\tBox ********************* $250" << endl;
	cout << "\t\t\tSide Line *************** $100" << endl;
	cout << "\t\t\tPremier ***************** $50" << endl;
	cout << "\t\t\tGeneral Admission ******* $25" << endl;
	cout << "********************************************************************************" << endl;

	cout << "Enter amount of Box Ticket(s) sold: " ;
	cin >> box;
	cout << "Enter amount of Side Line Ticket(s) sold: ";
	cin >> sl;
	cout << "Enter amount of Premier Ticket(s) sold: ";
	cin >> pr;
	cout << "Enter amount of General Admission Ticket(s) sold: ";
	cin >> ga;


	i1 = box * 250;
	i2 = sl * 100;
	i3 = pr * 50;
	i4 = ga * 25;
	total = i1 + i2 + i3 + i4;

	system ("cls");

	cout << "********************************************************************************" << endl;
	cout << "\t    Tickets\t\tTickets Sold\t\tTicket Sales" << endl;
	cout << "********************************************************************************" << endl;
	cout << "\t    Box" << "\t\t\t" << static_cast<int>(box) << "\t\t\t" << "$" << i1 << endl;
	cout << "\t    Side Line" << "\t\t" << static_cast<int>(sl) << "\t\t\t" << "$" << i2 << endl;
	cout << "\t    Premier" << "\t\t" << static_cast<int>(pr) << "\t\t\t" << "$" << i3 << endl;
	cout << "\t    General Admission" << "\t" << static_cast<int>(ga) << "\t\t\t" << "$" << i4 << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\tTotal Sales: \t\t" << total << endl;
	cout << "********************************************************************************" << endl;
	cout << "****************************ProjectHDX (c) 2009-2013****************************" << endl;
	cout << "********************************************************************************" << endl;

	cin.get();
	cin.get();
}
