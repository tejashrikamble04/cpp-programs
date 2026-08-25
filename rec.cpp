#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double breadth;

public:
    // Default constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // Parameterized constructor
    Rectangle(double l, double b)
    {
        length = l;
        breadth = b;
    }

    // Copy constructor
    Rectangle(const Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    // Calculate area
    double calculateArea()
    {
        return length * breadth;
    }

    // Display rectangle details
    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main()
{
    // Default constructor
    Rectangle r1;
    cout << "Default Constructor:" << endl;
    r1.display();

    cout << endl;

    // Parameterized constructor
    Rectangle r2(10, 5);
    cout << "Parameterized Constructor:" << endl;
    r2.display();

    cout << endl;

    // Copy constructor
    Rectangle r3(r2);
    cout << "Copy Constructor:" << endl;
    r3.display();

    return 0;
}
