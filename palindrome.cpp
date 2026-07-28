#include<iostream>
using namespace std;
int main()
{
int n,temp, rev=0,rem;
cout<<"enter a number:";
cin>>n;
temp=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n/=10;
}
if(temp==rev)
cout<<"palindrome";
else
cout<<"not palindrome";
return 0;
}
