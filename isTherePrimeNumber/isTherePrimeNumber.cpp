#include <iostream>
#include <vector>
using namespace std;

bool isPrime(const vector<int>& arr,const int & n) {

    for (int i = 0; i < n; i++) {

        if (arr[i] < 2) {
          
        }
        else if (arr[i] == 3 || arr[i] == 2) {
            return true;
        }
        else {
            bool statement = false;
            for (int g = 2; g <= arr[i] / 2; g++) {
         
                if (arr[i] % g == 0) {
                    statement = true;
                }
            }
            if (statement == false) {
                return true;
            }
        }  
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter how many numbers you want: ";
    cin >> n;

    while (2 >= n || n >= 116) {
        cout << "N has to be between 2 and 115: " << endl;
        cin >> n;
    }
    
    vector<int> arr;
    arr.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isPrime(arr, n)) {
        cout << "There is at least 1 prime number" << endl;
    }
    else {
        cout << "There is no prime number" << endl;
    }

    return 0;
}

