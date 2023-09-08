#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int sum = 0;
    int* p;
    p = arr;

    for (int i = 0; i < 10; i++) {
        cin >> *p;
        sum = sum + *p;
        p++;
       
    }
    cout << sum;
}

