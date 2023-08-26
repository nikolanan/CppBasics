#include <iostream>
using namespace std;

int main()
{
    string username, password, enteredPassword;
    cin >> username >> password >> enteredPassword;

    while (enteredPassword != password) {

        cin >> enteredPassword;
    }
    cout << "Welcome " << username << "!";
}

