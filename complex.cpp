#include<iostream>
using namespace std;

class Complex {
   float real,imag;
 
 public:
 void input() {
    cout << "enter real and imaginary parts:";
cin >> real >> imag;
}
 Complex add(Complex c) {
   Complex result;
   result.real=real+c.real;
   result.imag=imag+c.imag;
   return result;
}
   Complex subtract(Complex c) {
   Complex result;
   result.real=real-c.real;
   result.imag=imag-c.imag;
   return result;
}
void display() {
   cout <<real;
   if(imag>=0)
     cout <<"+"<<imag<<"i";
   else
     cout <<"-"<<-imag<<"i";
   cout<<endl;
 }
};
int main() {
 Complex c1,c2,sum,difference;
 cout <<"enter first Complex number:\n";
 c1.input();
 cout <<"enter second Complex number:\n";
 c2.input();
 sum = c1.add(c2);
 difference = c1.subtract(c2);
 cout << "\n Addition=";sum.display();
 cout << "subtract=";difference.display();
 return 0;
}




