// Write a program to input all sides of a triangle and chack whether the triangle
// is an equilateral(E) , isosceles(I), or scalene(S) triangle using if- else statement.
// If the user input a number less than 0, the program display a message "not triangle"


#include <iostream>
using namespace std;
int main() {
	double firstSide, secondSide, thirdSide;
	cout << "Enter a first side: ";
	cin >> firstSide;
	cout << "Enter a second side: ";
	cin >> secondSide;
	cout << "Enter a third side: ";
	cin >> thirdSide;
	if(firstSide <=0 || secondSide <= 0 || thirdSide <= 0) {
		cout << "Not triangle.";
		return 0;
	}
	else if(firstSide + secondSide <= thirdSide || firstSide + thirdSide <= secondSide || secondSide + thirdSide <= firstSide) {
		cout << "Not triangle.";
		return 0;
	}
	
	if(firstSide == secondSide || firstSide == thirdSide || secondSide == thirdSide) {
		if(firstSide == secondSide && firstSide == thirdSide) 
			cout << "E triangle";
		else
			cout << "I triangle";
	}
	return 0;
}
