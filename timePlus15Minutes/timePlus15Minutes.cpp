#include <iostream>
using namespace std;

int main() {

	int hour, minutes;
	cin >> hour >> minutes;
	
	if (minutes >= 45) {
		if (hour == 23) {
			if ((minutes + 15) % 60 <= 9) {
				cout << "0:" << "0" << (minutes + 15) % 60;
			}
			else {
				cout << "0:" << (minutes + 15) % 60;
			}
		}
		else {
			if ((minutes + 15) % 60 <= 9) {
				cout << hour + 1 << ":0" << (minutes + 15) % 60;
			}
			else {
				cout << hour + 1 << ":" << (minutes + 15) % 60;
			}
		}
	}
	else if (minutes <45) {

		cout << hour <<":"<< minutes + 15;

	}
	return 0;
}	