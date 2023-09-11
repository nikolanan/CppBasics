#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    double c, d;
    cin >> c >> d;

    cout << "address a: " << &a << endl;
    cout << "address b: " << &b << endl;
    cout << "address c: " << &c << endl;
    cout << "address d: " << &d << endl;

    return 0;
    
}

