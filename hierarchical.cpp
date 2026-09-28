#include <iostream>
using namespace std;

// Base class
class Library
{
public:
    string libraryName;

    void getLibrary()
    {
        cout << "Enter Library Name: ";
        cin >> libraryName;
    }

    void displayLibrary()
    {
        cout << "Library Name: " << libraryName << endl;
    }
};

// Derived class 1
class Book : public Library
{
public:
    string bookName;

    void getBook()
    {
        cout << "Enter Book Name: ";
        cin >> bookName;
    }

    void displayBook()
    {
        displayLibrary();
        cout << "Book Name: " << bookName << endl;
    }
};

// Derived class 2
class Magazine : public Library
{
public:
    string magazineName;

    void getMagazine()
    {
        cout << "Enter Magazine Name: ";
        cin >> magazineName;
    }

    void displayMagazine()
    {
        displayLibrary();
        cout << "Magazine Name: " << magazineName << endl;
    }
};

int main()
{
    Book b;
    Magazine m;

    cout << "--- Book Details ---" << endl;
    b.getLibrary();
    b.getBook();
    b.displayBook();

    cout << "\n--- Magazine Details ---" << endl;
    m.getLibrary();
    m.getMagazine();
    m.displayMagazine();

    return 0;
}
