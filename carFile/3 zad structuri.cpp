#include <iostream>
using namespace std;

int main()
{
	struct Car {
		char numberPlate[10];
		int range;
		double averageFuelConsumption;
	}car1,car2;

	strcpy_s(car1.numberPlate, "w 4442 we");
	car1.range = 100000;
	car1.averageFuelConsumption = 7.8;

	cout << car1.numberPlate << endl;
	cout << car1.range << endl;
	cout << car1.averageFuelConsumption << endl;
	cout << endl;

	cin >> car2.range;
	cin >> car2.averageFuelConsumption;
	cin.ignore();
	gets_s(car2.numberPlate);
	cout << endl;

	cout << car2.numberPlate << endl;
	cout << car2.range << endl;
	cout << car2.averageFuelConsumption << endl;

	
}

