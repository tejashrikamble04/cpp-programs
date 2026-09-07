#include <iostream>
using namespace std;

class MobileRecharge
{
private:
    string mobileNumber;
    string customerName;
    float balance;

public:
    // Constructor
    MobileRecharge(string number, string name, float initialBalance)
    {
        mobileNumber = number;
        customerName = name;
        balance = initialBalance;
    }

    // Recharge account
    void recharge(float amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Recharge successful!" << endl;
        }
        else
        {
            cout << "Invalid recharge amount." << endl;
        }
    }

    // Deduct balance
    void deductBalance(float amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid amount." << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance." << endl;
        }
        else
        {
            balance = balance - amount;
            cout << "Amount deducted successfully!" << endl;
        }
    }

    // Display account details
    void display()
    {
        cout << "\n----- Account Details -----" << endl;
        cout << "Customer Name : " << customerName << endl;
        cout << "Mobile Number : " << mobileNumber << endl;
        cout << "Balance       : Rs. " << balance << endl;
    }
};

int main()
{
    MobileRecharge account("9876543210", "Rahul", 100);

    account.display();

    cout << "\nAdding recharge of Rs. 200..." << endl;
    account.recharge(200);

    account.display();

    cout << "\nDeducting Rs. 50..." << endl;
    account.deductBalance(50);

    account.display();

    return 0;
}
