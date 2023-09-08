#include <iostream>
using namespace std;

int main()
{
    double arr[30];
    int numberOfStudents;
    cout << "Enter number of students: ";
    cin >> numberOfStudents;
    
    double maxGrade = 2;

    for (int i = 0; i < numberOfStudents; i++) {
        cin >> arr[i];
        if (arr[i] > maxGrade) {
            maxGrade = arr[i];
        }
    }
    cout << "Max grade is: " << maxGrade << endl;

    return 0;
}

