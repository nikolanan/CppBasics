#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int leftSum = 0;
    int rightSum = 0;

    for (int i = 1; i <= n; i++) {

        int firstNumber;
        cin >> firstNumber;
        leftSum += firstNumber;

    }
    for (int i = 1; i <= n; i++) {

        int secondNumber;
        cin >> secondNumber;
        rightSum += secondNumber;
    }

    if (leftSum == rightSum) {
        cout << "Yes, sum = " << rightSum;
    }
    else {
        cout << "No, diff = " << abs(rightSum - leftSum);
    }
}

