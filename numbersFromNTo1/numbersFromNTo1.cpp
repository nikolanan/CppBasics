#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n <= 0) {
        cin >> n;
    }

    for (int number = n; number >= 1; number--) {

        cout << number << endl;

    }
}

