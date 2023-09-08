#include <iostream>
using namespace std;

int main()
{
	char text[21];
	gets_s(text);

	for (int i = strlen(text) - 1; 0 <= i; i--) {

		cout << text[i] << endl;
	}

	return 0;
}

