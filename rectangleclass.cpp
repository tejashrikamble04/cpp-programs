#include<iostream>
using namespace std;
class Rectangle
{
private:
  double length;
  double width;
public:
  Rectangle():length(1.0),width(1.0)
  {
  }
  Rectangle(double len,double wid):length(len),width(wid)
  {
  }
  -Recctangle()
  {
    cout<< "Rectangle object destroyed." << endl;
  double getlength()const
  {
    return length;
  }
  double getwidth()const
  {
    return width;
  }
  void strLength(double len)
  {
    length=len;
  }
  void setwidth(double wid)
  {
    width=wid;
  }
  double calculateArea() const
 {
    return length * width;
 }
 double calculatePerimeter() const
 {
   return 2 * (length+width);
  }
};
int main(0
{
 Rectangle rect(4.0,40.0);
 cout<<"Rectangle properties:"<<endl;
 cout<<"Length:"<<rect.getLength()<<endl;
 cout<<"Area:"<<rect.calculateArea()<<endl;
 cout<<"Perimeter:"<<rect.calculatePerimeter()<<endl;
   return 0;
}
