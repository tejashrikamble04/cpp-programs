#include <iostream>
using namespace std;

class CheckingAccount
{
private:
    string accountName;
    int accountNumber;
    float balance;

public:
    // Constructor
    CheckingAccount(string name, int number, float bal)
    {
        accountName = name;
        accountNumber = number;
        balance = bal;
    }

    void deposit(float amount)
    {
        balance += amount;
    }

    void withdraw(float amount)
    {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance" << endl;
    }

    void display()
    {
        cout << "\nChecking Account" << endl;
        cout << "Account Name   : " << accountName << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    CheckingAccount c("Rahul", 102, 5000);

    c.deposit(2000);
    c.withdraw(1000);
    c.display();

    return 0;
}
