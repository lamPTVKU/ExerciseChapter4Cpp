// Write a program to check whether a character is alphabet (A), digit(D), or special character(S)


#include <iostream>
using namespace std;
int main() {
	char c;
	cout << "Enter a character: ";
	cin >> c;
	if( (c >= 65 && c <= 90) || (c >= 97 && c <=122))
		cout << "Character is alphabet (A)";
	else if ( c >= 	48 && c <=57)
		cout << "Character is digit (D)";
	else
		cout << "Character is special (S)";
	return 0;
}
