#include <iostream>
using namespace std;

int main()
{
    char word[21];
    gets_s(word);

    for (int i = 0; i < strlen(word); i++) {
        cout << word[i] << endl;
    }
}

