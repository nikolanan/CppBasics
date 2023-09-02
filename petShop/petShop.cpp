#include <iostream>
using namespace std;

int main() {
	
	int dogFoodPackages;
	cin >> dogFoodPackages;

	int catFoodPackages;
	cin >> catFoodPackages;

	double dogFoodPrice = dogFoodPackages * 2.50;
	int catFoodPrice = catFoodPackages * 4;

	double totalPrice = dogFoodPrice + catFoodPrice;


	cout << totalPrice << " lv.";

	return 0;
}


