#include<iostream>

#include<stdio.h>

#include<ctype.h>

#include<string.h>

using namespace std;
 

int main()

{

 
    int i;

    char s[30];
    
cout<<"\nEnter any string :: ";
   
 cin>>s;
 
   
 int len = strlen(s);

 
    for(i=0;i<len;++i)
    
{
  
      if(i==0)
       
 {

            if(islower(s[i]))
  
          s[i]=toupper(s[i]);
   
     }
        
else
 
       {
    
        if(s[i]!=' ')
     
       {
        
        if(isupper(s[i]))
   
                 s[i]=tolower(s[i]);
       
     }
       
     else
       
     {
            
    i++;
              
  if(islower(s[i]))
     
               s[i]=toupper(s[i]);
        
    }
        }
    }
 
   cout<<"\nUpdated New String is :: "<<s<<"\n";
 
   
 return 0;

}
