#include<iostream>
using namespace std;
class Employee
{
int empId;
string name;
float salary;
public:
void accept(
{
cout<<"enter Employee ID:";
cin>>empID;
cout<<"enter name:";
cin>>name;
cout<<"enter salary:";
cin>>salary;
}
void display()
{
cout<<"\n Employee details\n";
cout<<"ID:"empID<<endl;
cout<<"name:"<<name<<endl;
cout<<"salary:"<<salary<<endl
}
};
int main()
{
employee e;
e.accept();
e.display();
return 0;
}
