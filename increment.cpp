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
   void operator++()
   {
      ++n;
   }
   void display()
   {
      cout<<"Number = "<< n << endl;
   }
};
int main()
{
   Number n1(10);
   
   cout<<"Before:";
   n1.display();
   
   ++n1;
   
   cout<<"After:";
   n1.display();
   return 0;
}
