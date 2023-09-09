#include <iostream>
using namespace std;

int main()
{
    double arr[30];
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    double x;
    cout << "Enter the wanted grade: ";
    cin >> x;

    bool statement = false;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] == x) {
            statement = true;
        }
    }


    if (statement == true) {
        cout << "There is a student with such a grade";
    }
    else {
        cout << "There is no student with such a grade";
    }
}

