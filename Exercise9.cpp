// Write a program that asks the user to enter the month(letting the user enter an intergerin
//the range of 1 through 12) and the year. The program should then display the number of days 
// in that month. Use the following criteria to identify leap years:
//1. Determine whether the year is divisble by 100. If it is, then it is a leap year if and only
// if it is divisible by 400. For example, 2000 is a leap year but 2100 is not.
//2. If the year is not divisible by 100, then it is a leap year if and if only it is divisible 4.
// For example, 2008 is a leap year but 2009 is not.


#include <iostream>
using namespace std;
int main() {
	int month, year;
	cout << "Enter a month[1..12]: ";
	cin >> month;
	cout << "Enter a year: ";
	cin>> year;
	if(month == 1)
		cout << "-->31 days";
	else if(month == 2) {
		if(year % 100 != 0) {
			if(year % 4 == 0) {
				cout << "--> 29 days";
			}
			else 
				cout << "--> 28 days";
		}
		else{
			if(year % 400 == 0) 
				cout << "-->29 days";
			else
				cout << "--> 28 days";
		}
		
	}
	else if(month == 3)
		cout << "-->31 days";
	else if(month == 4)
		cout << "-->30 days";
	else if(month == 5)
		cout << "-->31 days";	
	else if(month == 6)
		cout << "-->30 days";
	else if(month == 7)
		cout << "-->31 days";
	else if(month == 8)
		cout << "-->31 days";
	else if(month == 9)
		cout << "-->30 days";
	else if(month == 10)
		cout << "-->31 days";
	else if(month == 11)
		cout << "-->30 days";
	else
		cout << "-->31 days";		
	return 0;
}
