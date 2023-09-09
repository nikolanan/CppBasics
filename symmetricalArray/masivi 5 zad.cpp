#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the wanted number: ";
	cin >> n;

	int arr[120];

	while (5 > n || n > 120) {
		cin >> n;
	}
	bool statement = true;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	
	for (int j = 0; j < n / 2; j++) {

		if (arr[j] != arr[n - 1 -j]) {
			statement = false;
		}
	}
	if (statement == true) {
		cout << "symetrical" << endl;
	}
	else {
		cout << "no";
	}
}

