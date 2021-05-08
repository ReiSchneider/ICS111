#include <iostream>
#include <iomanip>
using namespace std;

/*
To make a profit, a local store marks up the prices of its items by a certain percentage.
	Write a C++ program that reads the original price of the item sold, the percentage of the 
	marked-up price, and the sales tax rate. The program then outputs the original price of the item, 
	the percentage of the mark-up, the store’s selling price of the item, the sales tax rate, the sales tax, 
	and the final price of the item. (The final price of the item is the selling price plus the sales tax.)

*/

int main()
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


   cin.get();
   cin.get();
}