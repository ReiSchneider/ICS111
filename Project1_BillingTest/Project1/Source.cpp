#include <iostream>
#include "stdlib.h"
using namespace std;

int main()
{
    int custype;
    float bpfee = 4.50, bscpf = 20.50, pch = 7.50, bbpf = 15.0, bbscpf = 75.00, adtl = 5.00, bbpch = 40.00;
    double bill;
    int pcs, bsch, ad;
	cout << "\t\t * Automated Billing Calculation System *" << endl;
	cout << "\t\t * \t      Billing system \t\t*" << endl;
    cout << "Select customer type" << endl;
    cout << "1.) RESIDENTIAL" << endl << "2.) BUSINESS" << endl;
    cin >> custype;
    system ("cls");
    system ("cls");

    if (custype == 1)
    {
		cout << "\t\t * \tFor residential customers \t*" << endl;
		cout << "\t\t\tBill processing fee: $4.50" << endl << "\t\t\tBasic service fee: $20.50" << endl << "\t\t   Premium channels: $7.50 per channel" << endl << endl;
        cout << "Enter premium channel(s) ";
        cin >> pcs;
        system ("cls");
        bill = bpfee + bscpf + (pch*(pcs));
        cout << "Your bill is $" << bill << endl;
		cout << "Press ENTER key to finish" << endl;
		cin.get();
    }
    else
        if (custype == 2)
        {
					cout << "\t\t * \tFor business customers \t*" << endl;
		cout << "\t\t\tBill processing fee: $15.00" << endl << "\tBasic service fee: $75.00 + $5/channel for more than 10 channel" << endl << "\t\t   Premium channels: $50.00 per channel" << endl << endl;
            cout << "Enter premium channel(s) ";
            cin >> pcs;
            cout << "Enter basic channel(s) ";
            cin >> bsch;
            system ("cls");
            ad = bsch - 10;
                if (ad < 10)
                    {
                        bill = bbpf + bbscpf + (pcs*(bbpch));
						cout << "Your bill is $" << bill << endl;
						cout << "Press ENTER key to finish" << endl;
						cin.get();
                    }
                else 
					{
                        bill = bbpf + bbscpf + (pcs*(bbpch)) + (ad*(adtl));
                        cout << "Your bill is $" << bill << endl;
						cout << "Press ENTER key to finish" << endl;
						cin.get();
					}

        }
    else
		{
        cout << "Please select an option: PRESS ENTER TO FINISH" << endl;
		cin.get();
		}
	cin.get();
    return 0;
}

