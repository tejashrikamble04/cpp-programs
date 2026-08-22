#include<iostream>
using namespace std;
class complex {
private
int real,imag;
public:
Complex(int i=0 r=0):real(r),imag(i) {}
Complex add(const complex &c)
{
return Complex(real+c.real,imag+c.imag);
}
void display() const {
cout<<real<<"+i"<<imag<<endl;
}
};
int main() {
Complex c1(4,5),c2(2,8);
Complex sum=c1 adda(c2);
Complex diff=c1 subtract(c);
cout<<"first complex number:";c1.display();
cout<<"second complex number:";c2.display();
cout<<"addition:";sum.display();
cout<<"subtract:";diff.display();
return 0;
}



 


