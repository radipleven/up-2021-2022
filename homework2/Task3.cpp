#include<iostream>
using namespace std;
#include <stdio.h>

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
    char str [] = "dsa1&1&s1s=0";
     
    int length = 0;
     bool flag=false;
    int i = 0;

    length = strlen (str);
    char str1[]="\0";
    int j=0;
    for(i  = 0; i < length; i++)
    {

        if(str[i]=='1'||str[i]=='0'||str[i]=='&'||str[i]=='|'||str[i]=='=')
        {
            
            str1[j]=str[i];
            j++;
        }

    }
     for(i  = 0; i <strlen (str1)-3; i++)
    {
      cout<<str1[i];
    }
    
    for(i  = 0; i <strlen (str1); i++)
    {
      if(str1[i]==str1[i+1]){
      	flag=false;
      	break;
	  }
      else
      flag=true;
    }
    if(flag==false)
    {
    	 cout<<"is Not Valid!";
	}
   
    else if(flag==true)
    
    cout<<"Valid!";
    return 0;

}

