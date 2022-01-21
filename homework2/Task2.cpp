#include<iostream>
using namespace std;
int arraySortedOrNot(int arr[],int n)
{
	

   
    if (n == 1 || n == 0)
        return -1;

    
    if (arr[n - 1] < arr[n - 2])
        return n-1;
    
    return arraySortedOrNot(arr, n - 1);
}

int main()
{
	
   
    int x[3][4]= {{1,2,3}, {111,453, -1}, {1,0,3,4}};
    
    
    for (int i = 0; i < 3; i++)
    {
    	int n=*(&x[0] + 1)-x[0];
    	cout<<n<<endl;
        int index=arraySortedOrNot(x[0],n);
        if(index==3)
        {
        	cout<<x[2][0]<<" "<<x[2][1]<<" "<<x[2][2]<<" "<<x[2][3]<<endl;
		}
    }
 
    return 0;
}
