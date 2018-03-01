#include <iostream>
using  namespace std;
int main()
{
  int l,r,i,j,flag=0,count=0;
  cout<<"enter num1 and num2"<<endl;
  cin>>l>>r;
  for(i=l;i<=r;i++)
  {
      flag=0;
      for(j=2;j<=(i/2);j++)
      {
          if((i%j)==0)
          {
              flag=1;
              break;
          }
          else
          {
              flag=0;
          }
      }
       if(flag==0)
        {
            count++;
        }
  }
  cout<<count;
   return 0;
}
 
