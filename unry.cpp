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
  void operator-()
  {
    n=-n;
  }
  void display()
  {
    cout << "Number=" << n << endl;
  }
};
int main()
{
  Number n1(5);
  cout << "before:";
  n1.display();
  
  cout << "after:";
  n2.display();
  return 0;
}
