#include<iostream>
using namespace std;

int main()
{
	int countrow=0;
	int contcol=0;
    int num[3][3] = {
        {3,5,5},
        {9,4,9},
        {7,5,8},
		
    };
    int rows=sizeof(num)/ sizeof(num[0]);
    
       //rows
		for(int j=1;j<rows-1;j++)
		{
			if(num[0][j]==num[rows-1][j]){
			
			    
			    countrow++;
			}
			
			
		}
	 //Columns
		for(int j=1;j<=rows-2;j++)
		{
			if(num[j][0]==num[j][rows-1]){
			
			    
			    contcol++;
			}
			
			
		}
	
	if(countrow==rows-2&&contcol==rows-2)
    cout<<"true"; 
    else
    cout<<"false";     //output will be false as first row and last row dont have same value at the middle
    
    return 0;    
}
