#include <iostream>
using namespace std;

void readArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

void function(int arr[], int size, int product)
{
	int arr1[100];//2 5
	int counter = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] * arr[j] == product)
			{
				bool chck = true;
				for (int a = 0; a < counter; a++)
				{
					if (arr1[a]==arr[i] || arr1[a]*arr[i]== product)
					{
						chck = false;
					}
				}

				if (chck)
				{
					arr1[counter] = arr[i];
					counter++;
				}
				
			}
		}
	}


	for (int i = 0; i < counter; i++)
	{
		cout << "1: " << arr1[i];
		cout << " 2: " << product / arr1[i] << endl;
	}
}


int main()
{
    int arr[100];
    int n;
	int product;
	cin >> n >> product;
	readArray(arr,n);
	function(arr, n, product);
}


