// Write a program that accepts three integers a, b, c (-999999999..999999999)
// from the user and prints them out in ascending order

#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	int max = 999999999, min = -999999999;
	cout << "Enter a[" << min << ".." << max << "] : "; 
	cin >> a;
	cout << "Enter b[" << min << ".." << max << "] : "; 
	cin >> b;
	cout << "Enter c[" << min << ".." << max << "] : "; 
	cin >> c;
	if(a >= min && a <= max && b >= min && b <= max && c >= min && c <= max) {
		if(a <= b && a <= c) {
			cout << a;
			if(b <= c) 
				cout << " " << b << " " << c;
			else
				cout << " " << c << " " << b;
		}
		else if(b <= a && b <= c) {
			cout << b;
			if(a <= c) 
				cout << " " << a << " " << c;
			else 
				cout << " " << c << " " << a;
		}
		else {
			cout << c;
			if(a <= b) 
				cout << " " << a << " " << b;
			else 
				cout << " " << b << " " << a; 
		}
	}
	return 69;
}

