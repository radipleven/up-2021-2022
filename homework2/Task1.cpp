#include<iostream>
using namespace std;
int value(char roman)
{
 switch(roman)
 {
    case 'I':return 1;
   case 'V':return 5;
   case 'X':return 10;
   case 'L':return 50;
   case 'C':return 100;
   case 'D':return 500;
   case 'M':return 1000;
   default : return 0;
 }
}
int romanToArabic(char *A,int size)
{
int i, n, ans=0, p=0;
n=size-1;

for( i=n; i>=0; i--)
{
 if( value(A[i]) >= p)
  ans = ans + value(A[i]);
 else
  ans = ans - value(A[i]);

p = value(A[i]);
if(p==0)
 cout<<"Invalid roman number or out of bound\n";
}
return ans;
}
int main()
{
	int n;
	cout<<"Enter the length of Roman number you want to enter:";
	cin>>n;
	char a[n];
	
	cout<<"\nEnter roman number (I to M) to be converted:";
	cin>>a;
	
	cout<<"Equivalent Arabic number is:  "<<romanToArabic(a,n);
	
	
}
