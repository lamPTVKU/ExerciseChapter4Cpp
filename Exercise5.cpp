// The area of a rectangle is the rectangle's lenth times it width. Write a program that asks for the length and width of two rectangles. The program should tell the user whih rectangle has
// the greater area, or if the areas are the same
#include <iostream>
using namespace std;
int main() {
	double width1, length1, width2, length2;
	cout << "Nhap vao chieu rong hinh chu nhat thu 1: ";
	cin >> width1;
	cout << "Nhap vao chieu dai hinh chu nhat thu 1: ";
	cin >> length1;
	cout << "Nhap vao chieu rong hinh chu nhat thu 2: ";
	cin >> width2;
	cout << "Nhap vao chieu dai hinh chu nhat thu 2: ";
	cin >> length2;
	if(width1 * length1 > width2 * length2)
		cout << "Dien tich hinh chu nhat 1 lon hon.";
	else if(width1 * length1 < width2 * length2)
		cout << "Dien tich hinh chu nhat 2 lon hon.";
	else
		cout << "2 Hinh chu nhat co dien tich bang nhau.";
	
	return 0;
}
