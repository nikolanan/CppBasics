#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int theLargestNumber = INT_MIN;
	int theSmallestNumber = INT_MAX;

	for (int i = 0; i < n; i++) {

		int number;
		cin >> number;

		if (number > theLargestNumber) {
			theLargestNumber = number;
		}
		if (number < theSmallestNumber) {
			theSmallestNumber = number;
		}
	}
	cout << "Max number: " << theLargestNumber << endl;
	cout << "Min number: " << theSmallestNumber << endl;

}

