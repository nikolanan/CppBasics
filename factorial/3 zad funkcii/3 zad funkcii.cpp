#include <iostream>
using namespace std;

double factoriel(int number) {
    int sum = 1;
    if (number == 0) {
        return 1;
    }
    else {
        for (int i = 1; i <= number; i++) {
            sum = sum * i;
        }
    }
                                             
    return sum;
}
int main()
{
    double m, n, k;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;


    double result = (factoriel(m) + factoriel(n) + factoriel(k)) / (factoriel(3) + factoriel(5));
    cout << result;


 
}

