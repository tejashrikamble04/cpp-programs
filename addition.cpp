#include<iostream>
using namespace std;
class Number
{
   int n;
public:
   Number(int x)
   {
     n=x;
   }
   Number operator+(Number obj)
   {
     return Number(n + obj.n);
   }
   void display()
   {
     cout<<"Number=" << n <<endl;
  }
};
int main()
{
   Number n1(10);
   Number n2(20);
   Number n3=n1+n2;
  
   cout << "first number:";
   n1.display();
    
   cout <<"second number:";
   n2.display();
   
   cout << "addition:";
   n3.display();
   
   return 0;
}
   
