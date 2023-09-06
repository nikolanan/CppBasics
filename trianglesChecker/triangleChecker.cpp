#include <iostream>
using namespace std;

double check(double a, double b, double c) {

    if (a + b > c && a + c > b && b + c > a) {
        return true;
    }
    else {return false;}
}
void typeOfTriangle(double a, double b, double c) {
    if (a == b && b == c) {
        cout << "equilateral ";
    }
    else if (a == b || b == c || a == c) {
        cout << "isosceles ";
    }
    else {
        cout << "scalene ";
    }
}
int main()
{
    int n;
    cout << "Enter number of triangles: ";
    cin >> n;
    
    int arr[100][3];

    for (int i = 1; i <= n; i++) {
        for (int j = 1, k = 3; j <= k; k--) {
            if (k == 3) {
                cout << "Enter a: ";
                cin >> arr[i][k];
            }
            else if(k == 2) {
                cout << "Enter b: ";
                cin >> arr[i][k];
            }
            else {
                cout << "Enter c: ";
                cin >> arr[i][k];
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (check(arr[i][1], arr[i][2], arr[i][3]) == true) {

            cout << arr[i][1] << " " << arr[i][2] << " " << arr[i][3] << " ";
            cout << "Such triangle exists: ";
            typeOfTriangle(arr[i][1], arr[i][2], arr[i][3]);
            cout <<endl;
        }
        else {
            cout << "Such triangle does not exist " << endl;
        }
    }
}


