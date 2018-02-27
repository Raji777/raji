#include<iostream>
using namespace std;
int main()
{
int n,fact=1;
cout<<"enter positive integer";
cin>>n;
if(n<=20)
{
for(int i=1;i<=n;i++)
{
fact=fact*i;
}
cout<<"the factorial is"<<fact;
}
else
cout<<"invalid input";
return 0;
}
