#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int power = 0; power <= n; power += 1) {

        if (power % 2 == 0) {
            cout << pow(2, power) << endl;
        }
    
    }
}

