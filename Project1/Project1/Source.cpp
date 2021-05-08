#include <iostream>
#include <iomanip>
#include "stdlib.h"
#include <time.h>
#include "string"
#include <stdio.h>

using namespace std;

int main ()
{
	srand (time(NULL));
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);
	cout << "Program #1 Exercise 3" << endl << endl;
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
		cout << endl << endl;
		system ("pause");
	cin.clear();
	system ("cls");
	}
	cout << "Program #2 Exercise 3" << endl << endl;
	{
		cout << "\n\n\n\t\tCCCCCCCCC           ++               ++" << endl;
		cout << "\t\tCC                  ++               ++" << endl;
		cout << "\t\tCC             ++++++++++++     ++++++++++++" << endl;
		cout << "\t\tCC             ++++++++++++     ++++++++++++" << endl;
		cout << "\t\tCC                  ++               ++" << endl;
		cout << "\t\tCCCCCCCCC           ++               ++" << endl;
		cout << endl << endl;

		system ("pause");

	cin.clear();
	system ("cls");
	}
	cout << "Program #3 Exercise 3" << endl << endl;
	{
		const int num1=125, num2=28, num3=-25;
		int	average;
		average = (num1 + num2 + num3) / 3;
		cout << "The values are: " << endl << "Num1= " << num1 << endl << "Num2= " << num2 << endl << "Num3= " << num3 << endl<< "The average is= " << setprecision(2) <<  average;
		cout << endl << endl;
		system ("pause");

	cin.clear();
	system ("cls");
	}
	cout << "Program #4 Exercise 3" << endl << endl;
	{
		const double num1x=75.35, num2x=-35.56, num3x=15.76;
		double averagex;
		averagex
			= (num1x + num2x + num3x) / 3;
		cout << "The values are: " << endl << "Num1= " << num1x << endl << "Num2= " << num2x << endl << "Num3= " << num3x << endl<< "The average is= " << averagex;
		cout << endl << endl;
		system ("pause");

	cin.clear();
	system ("cls");
	}
	cout << "Program #5 Exercise 3" << endl << endl;
	{
		float length, width, area, perimeter;
		cout << "Enter the length: ";
		cin >> length;
		cout << endl;
		cout << "Enter the width: "	;
		cin >> width;
		cout << endl;
		area = length * width;
		perimeter = (2*(length)) + (2*(width));
		cout << "Area = " << setprecision(2) << area << endl;
		cout << "Perimeter = " << setprecision(2) << perimeter << endl;
		cout << endl << endl;
		system ("pause");

	cin.clear();
	system ("cls");
	}
	cout << "Program #6 Exercise 3" << endl << endl;
	{
		float deci;
		float n;
		cout << "Please enter a decimal number: " ;
		cin >> deci;
		cout << endl;
		n = static_cast<int>(deci);
		cout << static_cast<int>(n) << endl;

		if (n<10)
			cout << setprecision(1) << deci;
		else
			if (n >= 10)
				cout << setprecision(2) << deci;


		cout << endl << endl;
		system ("pause");
	
	cin.clear();
	system ("cls");
	}
	cout << "Program #7 Exercise 3" << endl << endl;
	{
		float test1, test2, test3, test4, test5, aver;
		cout << "Enter first test score: ";
		cin >> test1;
		cout << "Enter second test score: ";
		cin >> test2;
		cout << "Enter third test score: ";
		cin >> test3;
		cout << "Enter fourth test score: ";
		cin >> test4;
		cout << "Enter fifth test score: ";
		cin >> test5;
		system ("cls");
		aver = (test1 + test2 + test3 + test4 + test5) / 5;
		cout << "Your average test score is: " << setprecision(2) << aver;
		cout << endl << endl;
		system ("pause");

	cin.clear();
	system ("cls");
	}
	cout << "Program #8 Exercise 3" << endl << endl;
	{
		float dec1, dec2, dec3, dec4, dec5, aver1;
		cout << "Enter first decimal number: ";
		cin >> dec1;
		cout << "Enter second decimal number: ";
		cin >> dec2;
		cout << "Enter third decimal number: ";
		cin >> dec3;
		cout << "Enter fourth decimal number: ";
		cin >> dec4;
		cout << "Enter fifth decimal number: ";
		cin >> dec5;
		system ("cls");
		aver1 = (dec1 + dec2 + dec3 + dec4 + dec5) / 5;

			cout << "AVERAGE: "  << setprecision(2) << aver1;
	cout << endl << endl;
	system ("pause");
	
	cin.clear();
	system ("cls");
	}
	cout << "Program #9 Exercise 3" << endl << endl;
	{
		double n1,n2,n3,n4,n5,fnl, sum;
		cout << "Enter a decimal number: ";
		cin >> n1;
		cout << "Enter another decimal number: ";
		cin >> n2;
		cout << "Enter a 3rd decimal number: ";
		cin >> n3;
		cout << "Enter a 4th decimal number: ";
		cin >> n4;
		cout << "Enter a 5th decimal number: ";
		cin >> n5;
		cout << "Press any key to continue" << endl;
		system ("cls");
		cout << "Your decimal numbers are: " << endl << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n5 << endl;
		n1=static_cast<int>(n1);
		n2=static_cast<int>(n2);
		n3=static_cast<int>(n3);
		n4=static_cast<int>(n4);
		n5=static_cast<int>(n5);
		cout << endl;
		sum = (n1 + n2 + n3 + n4 + n5);
		fnl = ((n1 + n2 + n3 + n4 + n5) / 5);
		cout << "Your sum answer is: " << static_cast<int>(sum) << endl << "Your average is: " << static_cast<int>(fnl);
		cout << endl << endl;
		system ("pause");
	
	cin.clear();
	system ("cls");
	}
	cout << "Program #10 Exercise 3" << endl << endl;
	{
		float gl,mpg;
		cout << "Please enter automobile fuel capacity in gallons: ";
		cin >> gl;
		cout << "Please enter automobile mileage (miles per gallon): ";
		cin >> mpg;
		cout << endl;
		cout << "Your automobile can run for " << static_cast<int>(gl*mpg) << " miles" << endl;
		cout << endl << endl;
		system ("pause");
	
	cin.clear();
	system ("cls");
	}
	cout << "Program #11 Exercise 3" << endl << endl;
	{
		int hrs;
		int mns;
		int secs;
		int time = 0;

		cout << "Enter time in seconds: ";
		cin >> time;
		cout << endl;

		hrs = static_cast<int>(time / 3600) ;
		time = time - hrs * 3600;

		mns = static_cast<int>(time / 60);
		secs = time - mns * 60;
	
		cout << hrs;
		if (mns < 10)
			cout << ":0" << mns;
		else
			cout << ":" << mns;
		if (secs < 10)
			cout << ":0" << secs;
		else 
			cout << ":" << secs;
	
		cout << endl;
		cout << endl << endl;
		system ("pause");
	
	cin.clear();
	system ("cls");
	}
	cout << "Program #12 Exercise 3" << endl << endl;
	{
		int hrsx;
		int mnsx;
		int secsx;

		int timex = 0;
		cout << "Enter hours: ";
		cin >> hrsx;
		cout << "Enter minutes: ";
		cin >> mnsx;
		cout << "Enter seconds: ";
		cin >> secsx;
		cout << endl;

		timex = (hrsx * 3600) + (mnsx * 60) + secsx;

		cout << "This is your time in seconds: " << timex << "s";
		cout << endl;
		cout << endl << endl;
		system ("pause");
	
	cin.clear();
	system ("cls");
	}
	cout << "Program #13 Exercise 3" << endl << endl;
	{
	   float op, pct, stx, fnlp, slnpr, st, mkup;
	   cout << "Please enter the original price of the item (w/o taxes, etc): ";
	   cin >> op;
	   cout << "Please enter the percentage of the price increase: ";
	   cin >> pct;
	   cout << "Please enter the sales tax rate: ";
	   cin >> stx;
	   cout << endl;

	   pct = pct / 100;
	   stx = stx / 100;
	   slnpr = op + (op*pct);
	   fnlp = slnpr + (slnpr*stx);
	   st = (slnpr*stx);
	   mkup = (op * pct);

	   cout << "The item's original price is: $" << op << endl << endl;
	   cout << "The markup percentage is: " << pct*100 <<"%" << endl << endl;
	   cout << "The item's selling price is: $"<< slnpr << endl << endl;
	   cout << "The sales Tax Rate is: "<< stx*100 << "%" <<  endl << endl;
	   cout << "The sales tax is: $" << st << endl << endl;
	   cout	<< "The item's final price is: $"<< fnlp << endl << endl;

	   cout << endl << endl;
	   system ("pause");
	
	   cin.clear();
	   system ("cls");
	}
	cout << "Program #14 Exercise 3" << endl << endl;
	{
		double i1, cm, i2;
		int yard, ft;
		cout << "Enter measurment in cm: " ;
		cin >> cm;

		i1 = cm / 2.54;
		yard = static_cast<int>(i1 / 36);
		i1 = i1 - (yard * 36);
		ft = static_cast<int>(i1 / 12);
		i2 = i1 - (ft * 12);

		cout << yard << "yrd " << ft << "ft " << setprecision(2) << i2 << "inches ";
		cout << endl << endl;
		system ("pause");

	cin.clear();
	system ("cls");
	}
	cout << "Program #15 and 16 Exercise 3" << endl << endl;
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
			cout << "The total number of cartons to be used in production: " << static_cast<int>(crt) << endl << "The total cost for production: $" << setprecision(2) << cost << endl << "The total profit of production: $" << setprecision(2) << profit ;
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
					cout << "The total number of cartons to be used in production: " << static_cast<int>(crt) << endl << "Amount of milk in liters for production: " << setprecision(2) << ml << " liters" << endl << "The total profit of production: $" << setprecision(2) << profit ;
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
						cout << "The total number of cartons to be used in production: " << static_cast<int>(crt) << endl << "Amount of milk in liters for production: " << setprecision(2) << ml << " liters" << endl << "The total cost of production: $" << setprecision(2) << cost ;
					}

		cout << endl << endl;
		system ("pause");
	
	cin.clear();
	system ("cls");
	}
	cout << "Program #17 Exercise 3" << endl << endl;
	{
	double const itax=0.14, ca=0.1, ss=0.01, sb=0.25, spd=0.50;
	double payrate, hours, i1x, i2x, i3x, i4x, i5x, i6x, i7x, i8x, i9x;
	cout << "Enter Salary Per Hour: $";
	cin >> payrate;
	cout << "Enter work hours per day: ";
	cin >> hours;

	i1x = 5 * (payrate * hours);
	i2x = 25 * i1x;
	i3x = i2x - (i2x * itax);
	i4x = i3x - (i3x * ca);
	i5x = i4x - (i4x * ss);
	i6x = i5x - (i5x * sb);
	i7x = static_cast<int>(i5x * sb);
	i8x = i7x * spd;
	
	system ("cls");

	cout << "Your total income without tax: " << endl << "Per Week (5 Days): $" << setprecision(2) << i1x << endl << "For 5 Weeks: $" << i2x << endl << endl;
	cout << "Your net income for 5 weeks after deducting a 14% income tax: $" << setprecision(2) << i3x << endl << endl;
	cout << "Your remaining income after spending 10% for clothes and accessories: $" << setprecision(2) << i4x << endl << endl;
	cout << "Your remaining income after spending 1% for school supplies: $" << setprecision(2) << i5x << endl << endl;
	cout << "Your remaining income after spending 25% to buy saving bonds: $" << setprecision(2) << i6x << endl << endl;
	cout << "The total money your parents spent to buy additional savings bonds for every $1 you spent on saving bonds: $" << setprecision(2) << i8x;
	cout << endl << endl;
	system ("pause");
	
	cin.clear();
	system ("cls");
	}
	cout << "Program #18 Exercise 3" << endl << endl;
	{
		int nick, dime, quart;
		double pen;
		pen = 0;
		cout << "Enter amount of nickel: ";
		cin >> nick;
		cout << "Enter amount of dime: ";
		cin >> dime;
		cout << "Enter amount of quarter: ";
		cin >> quart;
		pen = (5 * nick) + (10 * dime) + (25 * quart);
		system ("cls");
		cout << "The amount of pennies you'll receive: " << pen;
		cout << endl << endl;
		system ("pause");
	
	cin.clear();
	system ("cls");
	}
	cout << "Program #19 Exercise 3" << endl << endl;
	{
		double const mton=2205;
		double pounds;
		int bags;
		cout << "Enter amount of rice that a bag can carry (in pounds): ";
		cin >> pounds;
		system ("pause");
		cout << "\nPress ENTER key to calculate how many rice bags needed to store 1 metric ton of rice";
		cout << endl;
		system ("pause");
		system ("cls");

		if (pounds < mton)
		{
			bags = static_cast<int>((mton / pounds));
			bags = bags + 1;
			cout << "\n\n\n\t\t************************************************" << endl << "\n\n\n\t\t\t      You will need " << static_cast<int>(bags) << " bags" << endl << "\n\n\n\t\t************************************************";
		}
		else
			if (pounds >= 2205)
			{
				cout << "\n\n\n\t\t************************************************" << endl << "\n\n\n\t\t\t      You will need 1 bag" << endl << "\n\n\n\t\t************************************************";
			}
		
		cout << endl << endl;
		system ("pause");
	
	system ("cls");
	}
	cout << "Program #20 Exercise 3" << endl << endl;
	{
		int shares, dest, guess;
		double pprice, sprice, invest, dduct1, dduct2, received, lost, win, purchased;
		double const sc=0.015;


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

		cout << "\n\nThe price of the total number of shares you bought is (+service charge)$ " << setprecision(2) << purchased << endl;
	
		system ("pause");


		cout << endl;

		dduct1 = (sprice * shares) - (sc * (sprice * shares));
		dduct2 = sc * (pprice * shares);


		if (dest == 1) 
		{
			lost = dduct1 - (dduct1 * 0.4) ;
			cout << "You've lost 40% from your shares' selling price" << endl << endl;
			invest = (shares * pprice);
			cout << "The amount you invested for the shares is $" << setprecision(2) << invest << endl << endl;
			cout << "Your received amount is (+service charge) $" << setprecision(2) << lost;
		}
		else 
			if (dest == 2)
			{
			win = dduct1 + (dduct1 * 0.25) ;
			cout << "You've gained 25% additional to your shares' selling price" << endl << endl;
			invest = (shares * pprice);
			cout << "The amount you invested for the shares is $" << setprecision(2) << invest << endl << endl;
			cout << "Your received amount is (+service charge) $" << setprecision(2) << win;
			}
			else
				if (dest == 3)
				{
					lost = dduct1 - (dduct1 * 0.9) ;
					cout << "You've lost 90% from your shares' selling price" << endl << endl;
					invest = (shares * pprice);
					cout << "The amount you invested for the shares is $" << setprecision(2) << invest << endl << endl;
					cout << "Your received amount is (+service charge) $" << setprecision(2) << lost;
				}
				else
					if (dest == 4)
					{
						win = dduct1 + (dduct1 * 0.5) ;
						cout << "You've gained 50% additional to your shares' selling price" << endl << endl;
						invest = (shares * pprice);
						cout << "The amount you invested for the shares is $" << setprecision(2) << invest << endl << endl;
						cout << "Your received amount is (+service charge) $" << setprecision(2) << win;
					}
					else
						if (dest == 5)
						{
							lost = dduct1 - (dduct1 * 1) ;
							cout << "You've lost 100% from your shares' selling price" << endl << endl;
							invest = (shares * pprice);
							cout << "The amount you invested for the shares is $" << setprecision(2) << invest << endl << endl;
							cout << "Your received amount is (+service charge) $" << setprecision(2) << lost;
						}
						else
							if (dest == 6)
							{
								win = dduct1;
								cout << "You've gained back your investment" << endl << endl;
								invest = (shares * pprice);
								cout << "The amount you invested for the shares is $" << setprecision(2) << invest << endl << endl;
								cout << "Your received amount is (+service charge) $" << setprecision(2) << win;
							}
		cout << endl << endl;
		system ("pause");

	cin.clear();
	system ("cls");
	return 0;
	}
}
