#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int productID;
    string name;
    double price;
    int quantity;

public:
    // Parameterized constructor
    Product(int id, string n, double p, int q)
    {
        productID = id;
        name = n;
        price = p;
        quantity = q;
    }

    // Display product details
    void display()
    {
        cout << "Product ID: " << productID << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }

    // Calculate total cost
    double calculateTotalCost()
    {
        return price * quantity;
    }
};

int main()
{
    Product p1(101, "Laptop", 50000, 2);

    cout << "Product Details:" << endl;
    p1.display();

    cout << "Total Cost: " << p1.calculateTotalCost() << endl;

    return 0;
}
