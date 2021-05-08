#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;

/*

Cindy uses the services of a brokerage firm to buy and sell stocks. 
The firm charges 1.5% service charges on the total amount for each transaction, buy or sell.
When Cindy sells stocks, she would like to know if she gained or lost on a particular investment. 
Write a program that allows Cindy to input the number of shares sold, the purchase price of each share, and the selling price of each share. 
The program outputs the amount invested, the total service charges, amount gained or lost, and the amount received after selling the stock.

*/

int main()
{

	int shares, dest, guess;
	double pprice, sprice, invest, dduct1, dduct2, received, lost, win, purchased;
	double const sc=0.015;
	srand (time(NULL));
	dest = rand() % 6 + 1;

	cout << "\t\t************************************************" << endl << "\n\t\t      WELCOME TO PROJECTHDX STOCK EXCHANGE"<< endl << "\n\t\t Selling Price of each share must be at least a \n\t\t   percentage higher than the purchasing price"<< endl << "\n\t\t************************************************" << endl;

	cout << "Enter number of shares sold: ";
	cin >> shares;
	cout << endl;
	cout << "Enter purchase price of each share (Amount paid to buy each (1) share): $";
	cin >> pprice;
	cout << endl;
	cout << "Enter selling price of each share (Price of selling each (1) share: $";
	cin >> sprice;
	
	purchased = (pprice * shares) + (sc * (pprice * shares));

	cout << "\n\nThe price of the total number of shares you bought is (+service charge)$ " << purchased << endl;
	
	system ("pause");


	cout << endl;

	dduct1 = (sprice * shares) - (sc * (sprice * shares));
	dduct2 = sc * (pprice * shares);


    if (dest == 1) 
	{
		lost = dduct1 - (dduct1 * 0.4) ;
		cout << "You've lost 40% from your shares' selling price" << endl << endl;
		invest = (shares * pprice);
		cout << "The amount you invested for the shares is $" << invest << endl << endl;
		cout << "Your received amount is (+service charge) $" << lost;
	}
	else 
		if (dest == 2)
		{
		win = dduct1 + (dduct1 * 0.25) ;
		cout << "You've gained 25% additional to your shares' selling price" << endl << endl;
		invest = (shares * pprice);
		cout << "The amount you invested for the shares is $" << invest << endl << endl;
		cout << "Your received amount is (+service charge) $" << win;
		}
		else
			if (dest == 3)
			{
				lost = dduct1 - (dduct1 * 0.9) ;
				cout << "You've lost 90% from your shares' selling price" << endl << endl;
				invest = (shares * pprice);
				cout << "The amount you invested for the shares is $" << invest << endl << endl;
				cout << "Your received amount is (+service charge) $" << lost;
			}
			else
				if (dest == 4)
				{
					win = dduct1 + (dduct1 * 0.5) ;
					cout << "You've gained 50% additional to your shares' selling price" << endl << endl;
					invest = (shares * pprice);
					cout << "The amount you invested for the shares is $" << invest << endl << endl;
					cout << "Your received amount is (+service charge) $" << win;
				}
				else
					if (dest == 5)
					{
						lost = dduct1 - (dduct1 * 1) ;
						cout << "You've lost 100% from your shares' selling price" << endl << endl;
						invest = (shares * pprice);
						cout << "The amount you invested for the shares is $" << invest << endl << endl;
						cout << "Your received amount is (+service charge) $" << lost;
					}
					else
						if (dest == 6)
						{
							win = dduct1;
							cout << "You've gained back your investment" << endl << endl;
							invest = (shares * pprice);
							cout << "The amount you invested for the shares is $" << invest << endl << endl;
							cout << "Your received amount is (+service charge) $" << win;
						}

	system("pause");


	return 0;
}
