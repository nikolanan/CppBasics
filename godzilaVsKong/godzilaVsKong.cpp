#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	double filmBudget, extrasCount, clothingPricePerExtra;

	cin >> filmBudget >> extrasCount >> clothingPricePerExtra;

	double decor = filmBudget * 0.10;
	double totalExtrasClothesPrice = extrasCount * clothingPricePerExtra;

	double totalExtrasClothesPriceDiscount = 0;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (extrasCount > 150) {
		double totalExtrasClothesPriceDiscount = totalExtrasClothesPrice - totalExtrasClothesPrice * 0.10;

		if (decor + totalExtrasClothesPriceDiscount > filmBudget) {
			cout << "Not enough money!" << endl;
			cout << "Wingard needs " << abs(filmBudget - (decor + totalExtrasClothesPriceDiscount)) << " leva more.";

		}
		else if (decor + totalExtrasClothesPriceDiscount <= filmBudget) {
			cout << "Action!" << endl;
			cout << "Wingard starts filming with " << abs(filmBudget - (decor + totalExtrasClothesPriceDiscount)) << " leva left.";
		}
	}
	else {
		if (decor + totalExtrasClothesPrice > filmBudget) {
			cout << "Not enough money!" <<endl;
			cout << "Wingard needs " << abs(filmBudget - (decor + totalExtrasClothesPrice)) << " leva more.";

		}
		else if (decor + totalExtrasClothesPrice <= filmBudget) {
			cout << "Action!" << endl;
			cout << "Wingard starts filming with " << abs(filmBudget - (decor + totalExtrasClothesPrice)) << " leva left.";
		}
	}


}
