// Chapter4Problem3
// Hayden Hillis
// 4/2026
// Area of triangle, circle, rectangle
//

#include <iostream>
using namespace std;

int main()
{
	int choice;
	double radius;
	double length;
	double width;
	double base;
	double height;
	double area;
	const double PI = 3.14159;
	cout << "Calculate the area of a Circle = 1" << endl;
	cout << "Calculate the area of a Rectangle = 2" << endl;
	cout << "Calculate the area of a Triangle = 3" << endl;
	cout << "Quit = 4" << endl;
	cout << "Enter 1-4: ";
	cin >> choice;

	if (choice < 1 || choice > 4)
	{
		cout << "Error" << endl;
	}
	else if (choice == 1) {
		cout << "Radius: ";
		cin >> radius;
		if (radius < 0) {
			cout << "Error" << endl;

		}
		else {
			area = PI * radius * radius;
			cout << "Area of Circle: " << area << endl;

		}
	}
	else if (choice == 2) {
		cout << "Length: ";
		cin >> length;
		cout << "Width: ";
		cin >> width;

		if (length < 0 || width < 0) {
			cout << "Error" << endl;

		}
		else
		{
			area = length * width;
			cout << "Area of Rectangle: " << area << endl;

		}
	}
	else if (choice == 3)
	{
		cout << "Base: ";
		cin >> base;
		cout << "Height";
		cin >> height;
		if (base > 0 || height < 0)
		{
			cout << "Error" << endl;

		}
		else
		{
			area = base * height * 0.5;
			cout << "Area of Triangle: " << area << endl;

		}
	}
	else if (choice == 4) {
		cout << "Ended" << endl;
	}



}

