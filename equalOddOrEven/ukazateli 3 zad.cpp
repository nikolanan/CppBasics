#include <iostream>
using namespace std;

int main()
{
	int Arr[10];
	int* p = Arr;

	int counterEven = 0;
	int counterOdd = 0;

	for (int i = 0; i < 10; i++) {
		cin >> *(p+i);
	}
	for (int i = 0; i < 10; i++) {
		if (*(p + i) % 2 == 0) {
			counterEven++;
		}
		else {
			counterOdd++;
		}
	}

	cout << "The array reversed:" << endl;

	for (int i = 9; 0 <= i; i--) {
		cout << *(p + i) << endl;
	}

	cout <<"" << endl;

	if (counterEven > counterOdd) {
		cout << "More even numbers";
	}
	else if (counterEven < counterOdd) {
		cout << "More odd numbers";
	}
	else {
		cout << "Equal count of odd and even numbers";
	}
}

