#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    getline(cin, text);

    for (int symbol = 0; symbol <= text.length() - 1; symbol++) {

        cout << text[symbol] << endl;
    }
}

