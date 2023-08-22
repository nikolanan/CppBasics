#include <iostream>
#include <math.h>
using namespace std;

int main() {

	double angleInRadiands;
	cin >> angleInRadiands;

	double angleInDerees = angleInRadiands * 180 / 3.14;

	cout << round(angleInDerees) << endl;
	return 0;


	
}