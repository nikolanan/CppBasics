#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int oddSum = 0;
    int evenSum = 0;

    for (int i = 1; i <= n; i++) {

        int number;
        cin >> number;

        if (i % 2 == 0) {
            evenSum += number;
        }
        else {
            oddSum += number;
        }
    }
    if (oddSum == evenSum) {
        cout << "Yes" << endl;
        cout << "Sum = " << oddSum;
    }
    else {
        cout << "No" << endl;
        cout << "Diff = " << abs(oddSum - evenSum) << endl;
    }


}

