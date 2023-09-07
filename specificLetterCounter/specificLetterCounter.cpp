#include <iostream>
using namespace std;

int main()
{
	char text[21];
	gets_s(text);

	char symbol;
	cout << "Enter the wanted symbol: ";
	cin >> symbol;

	int counter = 0;


	for (int i = 0; i < strlen(text); i++) {
		if (text[i] == symbol) {
			counter++;
		}
	}
	cout << counter++;

	return 0;
}

