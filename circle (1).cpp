#include<iostream>
using namespace std;
class circle
{
float radius;
public:
void input()
{
cout<<"enter radius:";
cin>>radius;
}
void area()
{
cout<<"area="<<3.14*radius*radius<<endl;
}
void circumference()
{
cout<<"circumference="<<2*3.14*radius<<endl;
}
};
int main()
{
circle c;
c.input();
c.area();
c.circumference();
return 0;
}
