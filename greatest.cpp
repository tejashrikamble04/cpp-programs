#include<iostream>
using namespace std;
class Greatest
{
int a,b;
public:
void input()
{
cout<<"enter two numbers:";
cin>>a>>b;
}
void display()
{
if(a>b)
cout<<"Greatest="<<a;
else
cout<<"Greatest="<<b;
}
};
int main()
{
Greatest g;
g.input();
g.display();
return 0;
}
