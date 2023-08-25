#include <iostream>
using namespace std;

int main()
{
	int firstTime, secondTime, thirdTime;
	cin >> firstTime >> secondTime >> thirdTime;

	int sum = firstTime + secondTime + thirdTime;

		if (sum % 60 <= 9) {
			cout << sum / 60 << ":0" << sum % 60;
		}
		else {
			cout << sum / 60 <<":"<< sum % 60;
		}
	
}