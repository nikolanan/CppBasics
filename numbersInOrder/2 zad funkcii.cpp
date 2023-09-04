#include <iostream>
using namespace std;

void swapping(int &x, int&y) {
    int temp;
    temp = y;
    y = x;
    x = temp;
}
int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (x > y) {
        swapping(x, y);
    }
    if (x > z) {
        swapping(x, z);
    }
    if (y > z) {
        swapping(y, z);
    }

    cout << x << y << z;
}

