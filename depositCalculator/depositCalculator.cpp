#include <iostream>
using namespace std;

int main(){

	double depositedSum;
	cin >> depositedSum;

	int depositPeriod;
	cin >> depositPeriod;

	double annualInterestPercent;
	cin >> annualInterestPercent;

	double interestTotal = depositedSum * annualInterestPercent/100;
	double totalPerMoth = interestTotal / 12;
	double totalSum = depositedSum + depositPeriod * totalPerMoth;

	cout << totalSum << endl;
	return 0;

}