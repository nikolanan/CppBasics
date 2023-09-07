#include <iostream>
using namespace std;

int main()
{
    char text[21];
    gets_s(text);

    int counter = 0;
    for (int i = 0; i < 20; i++) {
        if (text[i] == 0) {
            break;
        }
        else { counter++; }
    }
    cout << counter << endl;

    return 0;
}

