#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    getline(cin,text);

    int sum = 0;

    for (int symbol = 0; symbol <= text.length() - 1; symbol++) {

        char postion = text[symbol];

        if (text[symbol] == 'a') {
            sum += 1;
        }
        else if (text[symbol] == 'e') {
            sum += 2;
        }
        else if (text[symbol] == 'i') {
            sum += 3;
        }
        else if (text[symbol] == 'o') {
            sum += 4;
        }
        else if (text[symbol] == 'u'){
            sum += 5;
        }
    }
    cout << sum << endl;
}

