#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
 int num,t=0,r,q;
 cout<<"Enter the number to be tested: "<<num;
 cin>>num;
q=num;
 do
{   
r=q%10;     
t=t+pow(r,2);
q=q/10;
}
 while(q%10!=0);
 cout<<t;
return 0;
}
