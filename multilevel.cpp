#include <iostream>
#include <string>
using namespace std;

// Base class
class Student
{
protected:
    int rollNo;
    string name;
    string studentClass;

public:
    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Class: ";
        cin >> studentClass;
    }
};

// Derived class 1
class Student_Marks : public Student
{
protected:
    int marks[5];
    int totalMarks;

public:
    void getMarks()
    {
        totalMarks = 0;

        cout << "\nEnter marks for 5 subjects:\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];

            totalMarks += marks[i];
        }
    }
};

// Derived class 2
class Student_Percentage : public Student_Marks
{
private:
    float percentage;

public:
    void calculate_Percentage()
    {
        percentage = (totalMarks / 500.0) * 100;
    }

    void display_Info()
    {
        cout << "\n----- Student Information -----\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Class       : " << studentClass << endl;

        cout << "\nMarks:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << " : "
                 << marks[i] << endl;
        }

        cout << "\nTotal Marks : " << totalMarks << "/500" << endl;
        cout << "Percentage  : " << percentage << "%" << endl;
    }
};

int main()
{
    Student_Percentage student;

    student.getData();
    student.getMarks();
    student.calculate_Percentage();
    student.display_Info();

    return 0;
}
