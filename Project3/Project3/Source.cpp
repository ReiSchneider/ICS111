#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int count;
	char a, b, c;
	string name;
	ifstream inFile;
	ofstream outFile;

	count = 1;
	b = 'y';

	cout << "\t\t\t\tEnter Selection: " << endl;
	cout << "\t\t\t\tA.)ICS111" << endl;
	cout << "\t\t\t\tB.)ICS101" << endl;
	cout << "\t\t\t\tC.)ENG1" << endl;
	cout << "\t\t\t\tD.)THY1" << endl;
	cin >> a;

	do
	{
	switch (a)
	{
	case 'A':
	case 'a':
		{
			system ("cls");
			cout << "Enter Name with _ as spaces: ";
			cin >> name;
			outFile.open ( name+"_ICS111.txt");

			cout << "\t\t\t\t   ICS111" << endl << endl;
			double ex1, ex2, ex3, ex4, ex5, ex6, extl, exgrade, labprlm, labgrade, q1, q2, q3, q4, q5, plec, qtl, qgrd, lecgrd, pcgrd;

			cout << fixed << showpoint << setprecision(2);

			cout << "Enter Ex1 grade: ";
			cin >> ex1;
			
			cout << "Enter Ex2 grade: ";
			cin >> ex2;
			
			cout << "Enter Ex3 grade: ";
			cin >> ex3;
			
			cout << "Enter Ex4 grade: ";
			cin >> ex4;
			
			cout << "Enter Ex5 grade: ";
			cin >> ex5;
			
			cout << "Enter Ex6 grade: ";
			cin >> ex6;
			
			cout << "Enter Lab Prelim Grade: ";
			cin >> labprlm;

			extl = ex1 + ex2 + ex3 + ex4 + ex5 + ex6;
			extl = (extl / 60) * 100;
			exgrade = extl * 0.60;

			labprlm = (labprlm / 30) * 100;
			labprlm = labprlm * 0.40;

			labgrade = exgrade + labprlm;

			cout << "Lab Grade: " << labgrade << endl << endl;

			cout << "Enter quiz1 grade: ";
			cin >> q1;
			
			cout << "Enter quiz2 grade: ";
			cin >> q2;
			
			cout << "Enter quiz3 grade: ";
			cin >> q3;
			
			cout << "Enter quiz4 grade: ";
			cin >> q4;
			
			cout << "Enter quiz5 grade: ";
			cin >> q5;

			cout << "Enter Lecture Prelim Grade: ";
			cin >> plec;

			qtl = (q1 + q2 + q3 + q4 + q5);
			qtl = (qtl / 110) * 100;
			qgrd = qtl * 0.50;

			plec = (plec / 100) * 100;
			plec = plec * 0.5;

			lecgrd = qgrd + plec;

			cout << "Lecture Grade: " << lecgrd << endl << endl;

			lecgrd = lecgrd * 0.6;

			labgrade = labgrade * 0.4;

			pcgrd = lecgrd + labgrade;

			cout << "Labgrade: " << labgrade << endl << "Lecgrade: " << lecgrd << endl;

			cout << "Your Prelim Course Grade is: " << pcgrd << endl;

			
			outFile << showpoint << fixed << setprecision(2);
			outFile << "ICS111 Grades" << endl << endl;
			outFile << "Ex1 grade: ";
			outFile << ex1 << endl;
			outFile << "Ex2 grade: ";
			outFile << ex2 << endl;
			outFile << "Ex3 grade: ";
			outFile << ex3 << endl;
			outFile << "Ex4 grade: ";
			outFile << ex4 << endl;
			outFile << "Ex5 grade: ";
			outFile << ex5 << endl;
			outFile << "Ex6 grade: ";
			outFile << ex6 << endl;
			outFile << "Lab Prelim Grade: ";
			outFile << labprlm << endl;
			outFile << "Lab Grade: " << labgrade << endl << endl;
			outFile << "Quiz1 grade: ";
			outFile << q1 << endl;
			outFile << "Quiz2 grade: ";
			outFile << q2 << endl;
			outFile << "Quiz3 grade: ";
			outFile << q3 << endl;
			outFile << "Quiz4 grade: ";
			outFile << q4 << endl;		
			outFile << "Quiz5 grade: ";
			outFile << q5 << endl;
			outFile << "Lecture Prelim Grade: ";
			outFile << plec << endl;
			outFile << "Lecture Grade: " << lecgrd << endl << endl;
			outFile << "Labgrade: " << labgrade << endl << "Lecgrade: " << lecgrd << endl;
			outFile << "Your Prelim Course Grade is: " << pcgrd << endl;

			outFile.close();

			break;
		}

	case 'B':
	case 'b':
		{

			system ("cls");
			cout << "Enter Name with _ as spaces: ";
			cin >> name;
			outFile.open ( name+"_ICS101.txt");
			cout << "\t\t\t\t   ICS101" << endl << endl;
			double hist, sw1, sw2, q1, q2, q2_2, q3, q4, q4_2, pplus, prlm, rec, colg, cmap, quiz_ave, cs, pgrade;

			cout << fixed << showpoint << setprecision(2);

			cout << "Enter grade in History (/100): ";
			cin >> hist;
			cout << "Enter grade in SW1 (/10): ";
			cin >> sw1;
			sw1 = (sw1 / 10) * 100;
			cout << "Enter grade in Computer App (/20): ";
			cin >> cmap;
			cmap = (cmap / 20) * 100;
			cout << "Enter grade in Collage (/100): ";
			cin >> colg;
			cout << "Enter grade in Quiz1 (/60): ";
			cin >> q1;
			q1 = (q1 / 60) * 100;
			cout << "Enter grade in Sw2 (/20): ";
			cin >> sw2;
			sw2 = (sw2  / 20) * 100;
			cout << "Enter grade in Quiz2 (/60): ";
			cin >> q2;
			q2 = (q2 / 60) * 100;
			cout << "Enter grade in Quiz2 Retake (/40): ";
			cin >> q2_2;
			q2_2 = (q2_2 / 40) * 100;
			if (q2_2 >= 60)
				q2 = 60;
			cout << "Enter grade in Quiz3 (/100): ";
			cin >> q3;
			cout << "Enter grade in Prelim Plus: ";
			cin >> pplus;
			cout << "Enter grade in Quiz4 (/40): ";
			cin >> q4;
			q4 = (q4 / 40) * 100;
			cout << "Enter grade in Quiz4 Retake (/40): ";
			cin >> q4_2;
			q4_2 = (q4_2 / 40) * 100;
			if (q4_2 >= 60)
				q4 = 60;
			cout << "Enter grade in Prelim Exam (/100): ";
			cin >> prlm;
			cout << "Enter grade in Recitation (/100): ";
			cin >> rec;

			prlm = pplus + prlm;

			if (prlm > 100)
				prlm = 100;

			quiz_ave = ((q1 + q2 + q3 + q4) / 4);

			cs = ((hist + sw1 + cmap + colg + sw2)/5);

			pgrade = (quiz_ave * 0.30) + (cs * 0.20) + (rec * 0.10) + (prlm * 0.40);

			cout << "Your Prelim Grade is: " << pgrade << endl;

			outFile << fixed << showpoint << setprecision(2);
			outFile << "ICS101 Grades" << endl << endl;
			outFile << "Grade in History (/100): ";
			outFile << hist << endl;
			outFile << "Grade in SW1 (/10): ";
			outFile << sw1 << endl;
			outFile << "Grade in Computer App (/20): ";
			outFile << cmap << endl;
			outFile << "Grade in Collage (/100): ";
			outFile << colg << endl;
			outFile << "Grade in Quiz1 (/60): ";
			outFile << q1 << endl;
			outFile << "Grade in Sw2 (/20): ";
			outFile << sw2 << endl;
			outFile << "Grade in Quiz2 (/60): ";
			outFile << q2 << endl;
			outFile << "Grade in Quiz2 Retake (/40): ";
			outFile << q2_2 << endl;
			outFile << "Grade in Quiz3 (/100): ";
			outFile << q3 << endl;
			outFile << "Grade in Prelim Plus: ";
			outFile << pplus << endl;
			outFile << "Grade in Quiz4 (/40): ";
			outFile << q4 << endl;
			outFile << "Grade in Quiz4 Retake (/40): ";
			outFile << q4_2 << endl;
			outFile << "Grade in Prelim Exam (/100): ";
			outFile << prlm << endl;
			outFile << "Grade in Recitation (/100): ";
			outFile << rec << endl;
			outFile << "Your Prelim Grade is: " << pgrade << endl;

			outFile.close();
			break;
		}


	case 'C':
	case 'c':
		{

			system ("cls");
			cout << "Enter Name with _ as spaces: ";
			cin >> name;
			outFile.open ( name+"_ENG1.txt");
			cout << "\t\t\t\t   ENG1\n\t     (Still has some bugs, use at your own discretion)" << endl << endl;
			
			double q1, q2, qtotal, ttotal, ts1, ts2, prlmexam, qzs, rec, prlmgrade;

			cout << fixed << showpoint << setprecision(2);

			cout << "Enter Quiz1 Raw Score: ";
			cin >> q1;
			cout << "Enter Quiz1 Total Score: ";
			cin >> ts1;

			cout << "Enter Quiz2 Raw Score: ";
			cin >> q2;
			cout << "Enter Quiz2 Total Score: ";
			cin >> ts2;

			qtotal = q1 + q2;
			ttotal = ts1 + ts2;
			qzs = (((qtotal / ttotal)*50)+50);

			cout << "Enter Prelim Exam Computed Score (Equivalent Grade): ";
			cin >> prlmexam;

			cout << "Enter recitation (80-85): ";
			cin >> rec;

			prlmgrade = (qzs * 0.20) + (prlmexam * 0.20) + (rec * 0.20);

			cout << "Your Prelim Grade is: " << prlmgrade << endl;

			outFile << fixed << showpoint << setprecision(2);

			outFile << "Enter Quiz1 Raw Score: ";
			outFile << q1 << endl;
			outFile << "Enter Quiz1 Total Score: ";
			outFile << ts1 << endl;

			outFile << "Enter Quiz2 Raw Score: ";
			outFile << q2 << endl;
			outFile << "Enter Quiz2 Total Score: ";
			outFile << ts2 << endl;

			outFile << "Enter Prelim Exam Computed Score (Equivalent Grade): ";
			outFile << prlmexam << endl;

			outFile << "Enter recitation (80-85): ";
			outFile << rec << endl;

			outFile << "Your Prelim Grade is: " << prlmgrade << endl;

			outFile.close();

			break;
		}

	case 'D':
	case 'd':
		{

			system ("cls");
			cout << "Enter Name with _ as spaces: ";
			cin >> name;
			outFile.open ( name+"_THY1.txt");
			cout << "\t\t\t\t   THY1\n\t     (Still has some bugs, use at your own discretion)" << endl << endl;
			
			double q1, q2, prlmexam, prlmgrade;

			cout << fixed << showpoint << setprecision(2);

			cout << "Enter Quiz1 Computed Score (Equivalent Grade): ";
			cin >> q1;
			
			cout << "Enter Quiz2 Computed Score (Equivalent Grade): ";
			cin >> q2;
			
			cout << "Enter Prelim Exam Computed Score (Equivalent Grade): ";
			cin >> prlmexam;


			prlmgrade = ((q1 + q2 + (prlmexam*2)) / 4);

			cout << "Your Prelim Grade is: " << prlmgrade << endl;

			outFile << fixed << showpoint << setprecision(2);

			outFile << "Enter Quiz1 Computed Score (Equivalent Grade): ";
			outFile << q1 << endl;
			
			outFile << "Enter Quiz2 Computed Score (Equivalent Grade): ";
			outFile << q2 << endl;
			
			outFile << "Enter Prelim Exam Computed Score (Equivalent Grade): ";
			outFile << prlmexam << endl;

			outFile << "Your Prelim Grade is: " << prlmgrade << endl;

			outFile.close();

			break;
		}

	default:
		system ("cls");
		cout << "\n\n\n\t    Thank you for using ProjectHDX Grade Calculating Program\n\n\t\t\t     (c)2013 ProjectHDX" << endl << endl << endl;
		system ("pause");
			return 0;



	}

	do
	{
			cout << "Do you want to continue? (y/n): ";
			cin >> b;
			switch (b)
			{
				case 'y':
				case 'Y':
					system ("cls");
					cout << "\t\t\t\tEnter Selection: " << endl;
					cout << "\t\t\t\tA.)ICS111" << endl;
					cout << "\t\t\t\tB.)ICS101" << endl;
					cout << "\t\t\t\tC.)ENG1" << endl;
					cout << "\t\t\t\tD.)THY1" << endl;
					cin >> a;
					count = 0;
					break;
				case 'n':
				case 'N':
					count = 0;
					b = 'n';
					break;
				default:
					count = 1;
					break;
			}
	}
			while (count != 0);
	}
	while (b !='n');
	
	system ("cls");
	cout << "\n\n\n\t    Thank you for using ProjectHDX Grade Calculating Program\n\n\t\t\t     (c)2013 ProjectHDX" << endl << endl << endl;
	system ("pause");
	return 0;

}
