#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() {

	int points;
	cin >> points;
	int bonusAd = 0;
	

	if (points % 2 == 0) {
		bonusAd += 1;

	}
	else if (points % 5 == 0) {
		bonusAd += 2;
	}

	if (points <= 100) {
		int bonus = 5;

		cout << bonusAd + bonus <<endl;
		cout << points + bonusAd + bonus;
	}
	else if (points > 100 && points <= 1000) {
		double bonus = points * 0.200;

		cout << bonusAd + bonus <<endl;
		cout << points + bonus + bonusAd;
	}
	else {
		double bonus = points * 0.100;

		cout << bonus + bonusAd << endl;
		cout << points + bonus + bonusAd;
	}

	return 0;
}


