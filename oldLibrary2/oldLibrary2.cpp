#include <iostream>
#include <string>
using namespace std;

int main()
{
    string favoriteBook;
    getline(cin, favoriteBook);

    int counter = 0;

    string nextBookName;
    getline(cin, nextBookName);

    bool isFound = false;


    while (nextBookName != "No More Books") {

        if (nextBookName == favoriteBook) {
            cout << "You checked " << counter << " books and found it.";
            isFound = true;
            break;
              
        }

        if (nextBookName == "") {
            break;
        }
        
        counter++;
        getline(cin, nextBookName);
    }

    if (!isFound) {
        cout << "The book you search is not here!" << endl;
        cout << "You checked " << counter << " books." << endl;
    }
}
   
