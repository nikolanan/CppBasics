#include <iostream>
using namespace std;

int main() {
	int pagesCount, pagesPerHour, daysCount;
	cin >> pagesCount >> pagesPerHour >> daysCount;

	int hoursNeeded = pagesCount / pagesPerHour;
	int hoursDaily = hoursNeeded / daysCount;

	cout << hoursDaily << endl;

	return 0;
}