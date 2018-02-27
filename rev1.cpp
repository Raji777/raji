#include<iostream>
using namespace std;
int main()
{
int n,num=0,rem;
cout<<"enter n";
cin>>n;
while (n!=0)
{
rem=n%10;
num=num*10+rem;
n=n/10;
}
cout<<"reversed no"<<num;
return 0;
}
