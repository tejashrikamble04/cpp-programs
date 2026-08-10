#include<iostream>
using namespace std;
class Result
{
int m1,m2,m3,m3,m4,m5,total;
float percentage;
public:
void input()
{
cout<<"enter marks of 5 subjects:\n";
cin>>m1>>m2>>m3>>m4>>m5;
}
void calculate()
{
total=m1+m2+m3+m4+m5;
percentage=total/5.0;
}
void display()
{
cout<<"total="<<total<<endl;
cout<<"percentage="<<percentage<<"%"<<endl;
if(percentage>=35)
cout<<"Result:passed";
else
cout<<"Result:Failed";
}
};
int main()
{
Result r;
r.input()
r.calculate();
r.display();
return 0;
}
