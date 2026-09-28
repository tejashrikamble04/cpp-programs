#include <iostream>
#include <string>
using namespace std;

// Base Class
class Employee
{
protected:
    int employeeID;
    string employeeName;
    string department;

public:
    void getEmployeeDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, employeeName);

        cout << "Enter Department: ";
        getline(cin, department);
    }

    void displayEmployeeDetails()
    {
        cout << "\nEmployee ID   : " << employeeID;
        cout << "\nEmployee Name : " << employeeName;
        cout << "\nDepartment    : " << department;
    }
};

// Derived Class 1
class TeachingStaff : public Employee
{
private:
    string subject;
    string qualification;

public:
    void getTeachingDetails()
    {
        getEmployeeDetails();

        cout << "Enter Subject: ";
        getline(cin, subject);

        cout << "Enter Qualification: ";
        getline(cin, qualification);
    }

    void displayTeachingDetails()
    {
        displayEmployeeDetails();

        cout << "\n Subject       : " << subject;
        cout << "\n Qualification : " << qualification;
    }
};

// Derived Class 2
class NonTeachingStaff : public Employee
{
private:
    string designation;
    int workingHours;

public:
    void getNonTeachingDetails()
    {
        getEmployeeDetails();

        cout << "Enter Designation: ";
        getline(cin, designation);

        cout << "Enter Working Hours: ";
        cin >> workingHours;
    }

    void displayNonTeachingDetails()
    {
        displayEmployeeDetails();

        cout << "\n Designation   : " << designation;
        cout << "\n Working Hours : " << workingHours << " hours";
    }
};

// Main Function
int main()
{
    TeachingStaff teacher;
    NonTeachingStaff staff;

    cout << "===== ENTER TEACHING STAFF DETAILS =====\n";
    teacher.getTeachingDetails();

    cout << "\n\n===== ENTER NON-TEACHING STAFF DETAILS =====\n";
    staff.getNonTeachingDetails();

    cout << "\n\n===== TEACHING STAFF DETAILS =====";
    teacher.displayTeachingDetails();

    cout << "\n\n===== NON-TEACHING STAFF DETAILS =====";
    staff.displayNonTeachingDetails();

    cout << endl;

    return 0;
}
