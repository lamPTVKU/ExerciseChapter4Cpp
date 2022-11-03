//	 write a program to input three angles of a triangle and check whether the triangle is valid or not by using the if-else statement.
#include <iostream>
using namespace std;
int main() {
	double angle1, angle2, angle3;
	cout << "Nhap vao goc thu 1 cua tam giac: ";
	cin >> angle1;
	cout << "Nhap vao goc thu 2 cua tam giac: ";
	cin >> angle2;
	cout << "Nhap vao goc thu 3 cua tam giac: ";
	cin >> angle3;
	if(angle1 <= 0 || angle1 >= 180 || angle2 <=0 || angle2 >= 180 || angle3 <= 0 || angle3 >=180)
		cout << "Goc cua tam giac khong  hop le!!!";
	else if(angle1 + angle2 + angle3 != 180.0)
		cout << "Tong 3 goc tam giac phai bang 180 do.";
	else 
		cout << "Tam giac hop le.";	
	return 0;
}
