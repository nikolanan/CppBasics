#include <iostream>
using namespace std;

int main()
{   
    unsigned long long previous = 0, current = 1, next;

    int theWantedNumber;
    cin >> theWantedNumber;

    while (theWantedNumber <= 0 || theWantedNumber >= 94) {
        cin >> theWantedNumber;
    }

    if (theWantedNumber == 1) {
        cout << 1 << endl;
    }

    int i = 2;
    while (i <= theWantedNumber) {

        next = previous + current;
        if (i == theWantedNumber) {
            cout << next;
        }
        previous = current;
        current = next;

        i++;

    }
    return 0;
}

