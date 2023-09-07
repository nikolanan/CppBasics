#include <iostream>
using namespace std;

int main()
{
    char text[21];
    gets_s(text);
    bool statement = true;

    for (int i = 0; i < strlen(text) / 2; i++) {
        if (text[i] == text[strlen(text) - i - 1]) {

        }
        else {
            cout << "No";
            statement = false;
            break;
        }
    }
    if (statement == true) {
        cout << "Yes";
    }
}

