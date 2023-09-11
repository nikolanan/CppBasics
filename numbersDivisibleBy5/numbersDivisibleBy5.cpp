#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n = n - 1;
    
    for (int i = 0; i < n; n--) {

        if (n % 5 == 0) {
            cout << n << endl;
        }

    }

    return 0;
}

