// Write a program that determines a student's grade. The program will read three types
// scores(quiz, mid-term, and final scores). The grade point average(GPA) be calculated 
// as GPA = 0.2 * quiz + 0.3 * mid-term + 0.5 * final score. Determine the grade based
// on the following rules:
// if the average score >= 8.5 then grade A
// if the average score >= 7.0 and < 8.5 then grade B
// if the average score >= 5.5 and < 7.0 then grade C
// if the average score >= 4.0 and < 5.5 then grade D
// if the average score < 4.0 then grade F




#include <iostream>
using namespace std;
int main() {
	double quiz, midTerm, final;
	cout << "Entern a quiz score: ";
	cin >> quiz;
	cout << "Enter a mid-Term score: ";
	cin >> midTerm;
	cout << "Enter a final score: ";
	cin >> final;
	double gpa = quiz * 0.2 + midTerm * 0.3 + final * 0.5;
	if(gpa >= 8.5)
		cout << "GPA = " << gpa << " --> you got grade A";
	else if(gpa >= 7.0 && gpa < 8.5)
		cout << "GPA = " << gpa << " --> you got grade B";
	else if(gpa >= 5.5 && gpa < 7.0)
		cout << "GPA = " << gpa << " --> you got grade C";	
	else if(gpa >= 4.0 && gpa < 5.5)
		cout << "GPA = " << gpa << " --> you got grade D";
	else 
		cout << "GPA = " << gpa << " --> you got grade F";
	return 0;
}
