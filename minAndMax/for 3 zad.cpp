#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of numbers: ";
    cin >> n;

    int min = INT_MAX;
    int max = INT_MIN;
    int number;

    for (int i = 0; i < n; i++) {
        cin >> number;
        if (number > max) {
            max = number;
        }
        if (number < min) {
                min = number;
        }
        
        
    }
    cout << "min = " << min << endl;
    cout << "max = " << max << endl;
}

