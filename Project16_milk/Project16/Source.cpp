#include <iostream>
#include <iomanip>

using namespace std;

/*
A milk carton can hold 3.78 liters of milk. Each morning, a dairy farm ships cartons of milk to
a local grocery store. The cost of producing one liter of milk is $0.38,
and the profit of each carton of milk is $0.27. 

Redo Programming Exercise 15 so that the user can also input the cost of producing one liter of milk and the profit on each carton of milk.

*/


int main()

{
	int input;
	cout << "Enter desired transaction (Enter the #):" << endl;
	cout << "\t1) By Liters" << endl << "\t2) By Cost" << endl << "\t3) By Profit" << endl;
	cin >> input;
	cout << endl;

	if (input == 1)
		{
		double const cl = 3.78, cpl=0.38, pc=0.27;
		double ml=0, crt=0, cost=0, profit=0;

		cout << "\t*\t\tMilk Produce Profit System \t\t*" << endl;
		cout << "Enter amount of milk to be produced (in Liters): ";
		cin >> ml;

		if (ml <= cl)
			{
			crt = 1;
			}
		else
			{
			crt = static_cast<int>(ml / cl);
			
			}

		cost = ml * cpl;
		profit = crt * pc;
		cout << "The total number of cartons to be used in production: " << crt << endl << "The total cost for production: $" << cost << endl << "The total profit of production: $" << profit ;
		}
	else 
		if (input == 2)
			{
				double const cl = 3.78, cpl=0.38, pc=0.27;
				double ml=0, crt=0, cost=0, profit=0;

				cout << "\t*\t\tMilk Produce Profit System \t\t*" << endl;
				cout << "Enter assumed cost for production: $";
				cin >> cost;

				ml = cost / cpl;
				crt = static_cast<int>(ml / cl);
				profit = crt * pc;
				cout << "The total number of cartons to be used in production: " << crt << endl << "Amount of milk in liters for production: " << ml << " liters" << endl << "The total profit of production: $" << profit ;
			}
		else
			if (input == 3)
				{
					double const cl = 3.78, cpl=0.38, pc=0.27;
					double ml=0, crt=0, cost=0, profit=0;

					cout << "\t*\t\tMilk Produce Profit System \t\t*" << endl;
					cout << "Enter desired profit of production: $";
					cin >> profit;

					crt = static_cast<int>(profit / pc);
					ml = crt * cl;
					cost = ml * cpl;
					cout << "The total number of cartons to be used in production: " << crt << endl << "Amount of milk in liters for production: " << ml << " liters" << endl << "The total cost of production: $" << cost ;
				}

	
	cin.get();
	cin.get();

}