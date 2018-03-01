#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char s[20],temp;
cout<<"enter string "<<endl;
cin>>s;
for(int i=0;i<strlen(s);i=i+2)
{
temp=s[i];
s[i]=s[i+1];
s[i+1]=temp;
}
cout<<"after swapping ";<<s;
return 0;
}
