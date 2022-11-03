// write a program to find all roots of quadratic equation ax^2 + bx + c = 0. This program accepts coefficients of a quadratic equation from the user and displays the roots 
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a, b, c;
	cout << "Nhap vao he so bac 2 a: ";
	cin >> a;
	cout << "Nhap vao he so bac 1 b: ";
	cin >> b;
	cout << "Nhap vao he so tu do c: ";
	cin >> c;
	if(a == 0) {
		if(b == 0) {
			if(c == 0)
				cout << "Phuong trinh vo so nghiem.";
			else
				cout << "Phuong trinh vo nghiem.";
		}
		else 
			cout << "Phuong trinh co 1 nghiem la: " << (double)(- c / b);
	}
	else {
		double delta = b * b - 4 * a * c;
		if(delta < 0)
			cout << "Phuong trinh vo nghiem.";
		else if(delta  == 0)
			cout << "Phuong trinh co nghiem kep: " << (double) (-b / (2 * a));
		else 
			cout << "Phuong trinh co 2 nghiem x1 = " << ((-b + sqrt(delta)) /(2.0 * a) ) << "\t\tx2 = " << ((-b - sqrt(delta)) /(2.0 * a) );
	}
	return 0;
}
