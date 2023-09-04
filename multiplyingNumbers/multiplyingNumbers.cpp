#include <iostream>
using namespace std;

int sum(int x, int y) {
    int z;
    z = x + y;
    return z;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int result = sum(a, b) * sum(c, d);

    cout << result;
}

