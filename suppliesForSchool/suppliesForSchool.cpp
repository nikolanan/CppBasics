#include <iostream>
using namespace std;

int main() {

	int totalBoxesOfPens, totalBoxesOfMarkers, detergentInLiters, discountPercentage;
	cin >> totalBoxesOfPens >> totalBoxesOfMarkers >> detergentInLiters >> discountPercentage;

	double priceOfPens = totalBoxesOfPens * 5.80;
	double priceOfMarkers = totalBoxesOfMarkers * 7.20;
	double priceOfDetergent = detergentInLiters * 1.20;

	double priceOfEveryting = priceOfPens + priceOfMarkers + priceOfDetergent;
	double priceWithDiscount = priceOfEveryting - (discountPercentage * priceOfEveryting / 100);
	
	cout << priceWithDiscount << endl;

	return 0;
}