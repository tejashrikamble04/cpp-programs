#include<iostream>
using namespace std;
class Interest 
{
float principal,rate,time,si;
public:
void input()
{
cout<<"enter principal:";
cin>>principle;
cout<<"enter rate:";
cin>>rate;
cout<<"enter time:";
cin>>time;
}
void calcutate()
{
si=(Principle*rate*rate*time)/100;
}
void display()
{
cout<<"simple Interest="<<si;
}
};
int main()
Interest i;
i.input();
i.calculate();
i.display();
return 0;
}
