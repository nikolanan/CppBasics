#include <iostream>
using namespace std;

int main() {

	double sqKm;
	cin >> sqKm;

	double price = sqKm * 7.61;

	double discount = price * 0.18l;

	double priceWithDiscount = price - discount;

	cout << "The final price is: " << priceWithDiscount << " lv." << endl;
	cout << "The discount is: " << discount << " lv." << endl;

	return 0;
}