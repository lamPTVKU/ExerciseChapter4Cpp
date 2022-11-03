#include <iostream>
#include <String>
using namespace std;
int main() {
	int dollar, num;
	cout << "Enter a US dollar, and I will convert.\n";
	cout << "\n---------------MENU---------------------\n";
	cout << "1. Euro.";
	cout << "\n2. Japanese Yen";
	cout << "\n3. British Pound";
	cout << "\n4. Vietnamese Dong";
	cout << "\n------------------------------------------\n";
	
	
	cout << "Enter your option: ";
	cin >> num;
	switch(num) {
		case 1: 
			cout << num << " = " << num * 1.022 << " Euro.";
			break;
		case 2:
			cout << num << " = " << num * 149.98 << " Yen";
			break;
		case 3:
			cout << num << " = " << num * 0.89 << " Pound";
			break;
		case 4:
			cout << num << " = " << num * 24540.00 << " Dong";
		break;
	}
	return 0;
}
