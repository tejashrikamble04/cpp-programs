#include <iostream>
using namespace std;

class Patient
{
private:
    int patientId;
    string patientName;
    int age;
    string disease;
    float consultationCharge;

public:
    // Register patient
    void registerPatient()
    {
        cout << "Enter Patient ID: ";
        cin >> patientId;

        cout << "Enter Patient Name: ";
        cin.ignore();
        getline(cin, patientName);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Disease: ";
        cin.ignore();
        getline(cin, disease);
    }

    // Calculate consultation charge
    void calculateCharge()
    {
        if (age < 12)
            consultationCharge = 300;
        else if (age >= 60)
            consultationCharge = 400;
        else
            consultationCharge = 500;
    }

    // Display patient information
    void display()
    {
        cout << "\n----- Patient Information -----" << endl;
        cout << "Patient ID           : " << patientId << endl;
        cout << "Patient Name         : " << patientName << endl;
        cout << "Age                  : " << age << endl;
        cout << "Disease              : " << disease << endl;
        cout << "Consultation Charge  : Rs. "
             << consultationCharge << endl;
    }
};

int main()
{
    Patient p;

    p.registerPatient();
    p.calculateCharge();
    p.display();

    return 0;
}
