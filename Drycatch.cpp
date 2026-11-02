#include <iostream>
#include <exception>
using namespace std;

class InvalidAgeException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "Invalid Age! Age must be 18 or above.";
    }
};

class Person
{
    int age;

public:
    void getAge()
    {
        cout << "Enter age: ";
        cin >> age;

        if (age < 18)
        {
            throw InvalidAgeException();
        }

        cout << "Valid age: " << age << endl;
    }
};

int main()
{
    Person p;

    try
    {
        p.getAge();
    }
    catch (InvalidAgeException &e)
    {
        cout << e.what();
    }

    return 0;
}
