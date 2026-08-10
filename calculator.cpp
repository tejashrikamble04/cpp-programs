#include<iostream>
using namespace std;
class Calculator
{
float a,b;
public:
void input()
{
cout<<"enter two numbers:";
cin>>a>>b;
void add()
{
cout<<"Addition="<<a+b<<endl;
}
void sub()
{
cout<<"Subtraction="<<a-b<<endl;
}
void mul()
{
cout<<"Multiplication="<<a*b<<endl;
}
void div()
{
if (b!=0)
cout<<"Division="<<a/b<<endl;
else
cout<<"Division not possible."<<endl;
}
void mod()
{
cout<<"Modulus="<<(int)a%(int)b<<endl;
}
};
int main()
{
Calculator c;
c.input();
c.add();
c.sub();
c.div();
c.mod();
return 0;
}
