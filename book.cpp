#include <iostream>
using namespace std;

class LibraryBook
{
private:
    int bookId;
    string bookName;
    string author;
    bool issued;

public:
    // Constructor
    LibraryBook(int id, string name, string auth)
    {
        bookId = id;
        bookName = name;
        author = auth;
        issued = false;
    }

    // Issue book
    void issueBook()
    {
        if (!issued)
        {
            issued = true;
            cout << "Book issued successfully!" << endl;
        }
        else
        {
            cout << "Book is already issued." << endl;
        }
    }

    // Return book
    void returnBook()
    {
        if (issued)
        {
            issued = false;
            cout << "Book returned successfully!" << endl;
        }
        else
        {
            cout << "Book was not issued." << endl;
        }
    }

    // Display book details
    void display()
    {
        cout << "\nBook ID     : " << bookId << endl;
        cout << "Book Name   : " << bookName << endl;
        cout << "Author      : " << author << endl;
        cout << "Status      : ";

        if (issued)
            cout << "Issued" << endl;
        else
            cout << "Available" << endl;
    }
};

int main()
{
    LibraryBook book(101, "C++ Programming", "Bjarne Stroustrup");

    book.display();

    cout << "\nIssuing book..." << endl;
    book.issueBook();

    book.display();

    cout << "\nReturning book..." << endl;
    book.returnBook();

    book.display();

    return 0;
}
