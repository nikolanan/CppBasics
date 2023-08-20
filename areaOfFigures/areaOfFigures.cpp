#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() {

	string typeOfTheFigure;
	cin >> typeOfTheFigure;

	cout.setf(ios::fixed);
	cout.precision(3);

	if (typeOfTheFigure == "square") {
		double a;
		cin >> a;
		
		double area = pow(a, 2);
		
		cout << area;
	}
	else if (typeOfTheFigure == "rectangle") {
		double a, b;
		cin >> a >> b;
		double area = a * b;

		cout << area;

	}
	else if (typeOfTheFigure == "circle") {
		double PI = M_PI;
		double radius;
		cin >> radius;

		double area = PI * pow(radius, 2);
		
		cout << area;
	}
	else {
		double sideA,height;
		cin >> sideA >> height;

		double area = sideA * height / 2;

		cout << area;
	}
	return 0;
}