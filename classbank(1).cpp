#include <iostream>
using namespace std;

class SavingAccount
{
private:
    string accountName;
    int accountNumber;
    float balance;
    float interestRate;

    // Nested class
    class AccountDetails
    {
    public:
        void show(string name, int number)
        {
            cout << "Account Name   : " << name << endl;
            cout << "Account Number : " << number << endl;
        }
    };

    AccountDetails details;

public:
    // Constructor
    SavingAccount(string name, int number, float bal, float rate)
    {
        accountName = name;
        accountNumber = number;
        balance = bal;
        interestRate = rate;
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
        cout << "\nSaving Account" << endl;
        details.show(accountName, accountNumber);
        cout << "Balance       : " << balance << endl;
        cout << "Interest Rate : " << interestRate << "%" << endl;
    }
};

int main()
{
    SavingAccount s("Rahul", 101, 10000, 5);

    s.deposit(2000);
    s.withdraw(1000);
    s.display();

    return 0;
}

  
