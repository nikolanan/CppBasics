#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct Book{
		string title;
		int year;
	};

	int n;
	cin >> n;
	Book* books;
	books = new Book[n];

	cin.ignore();

	for (int i = 0; i < n; i++) {
		getline(cin,books[i].title);
		cin.ignore();
		cin >> books[i].year;
		cin.ignore();
	}
	
	

	for (int i = 0; i < n; i++) {
		cout << "Book number " << i + 1 << endl;
		cout << books[i].title << endl;
		cout << books[i].year << endl;
	}

	return 0;
}

