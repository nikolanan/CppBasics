#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cin >> n;

    while (n <= 0) {
        cin >> n;
    }

    for (int i = 1; i <= n; i += 3) {
        cout << i << endl;
    }
    return 0;
}

