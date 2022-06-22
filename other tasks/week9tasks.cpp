#include <iostream>
using namespace std;


//nula
void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

//edno ama spored men ne trqbva da e taka a da editva samiq masiv ne da go printira 
void reverse(int* arr, int size)
{
	
	
	for (int i = size-1; i >= 0; i--)
	{
		cout << arr[i]<< endl;
	}

	
}
//dve
int* findElement(int* arr, int element, int size)
{
	
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == element)
		{
			return (arr+i);
		}
	}
	return nullptr;

	/*int a[3] = { 1,2,3 };
	int* b = findElement(a, 0,3);
	cout << *b;*/

}

//tri
void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort 
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place 
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

void merge(int* arr1, int* arr2,int* target, int size1, int size2)
{
	for (int i = 0; i < size1; i++)
	{
		target[i] = arr1[i];
	}
	int j = 0;
	for (int i = size1; i < size1+size2; i++)
	{
		target[i] = arr2[j];
		j++;
	}
	bubbleSort(target, size1 + size2);




	/*int arr1[3] = { 1,3,7 };
	int arr2[3] = { 2,4,9};
	int target[6];
	merge(arr1, arr2, target, 3, 3);

	for (int i = 0; i < 6; i++)
	{
		cout << target[i] << endl;
	}*/
}

void minArray(int* arr1, int* arr2,int size1,int size2, int* pointer)
{
	int res1 = 0;
	int res2 = 0;
	for (int i = 0; i < size1; i++)
	{
		res1 += arr1[i];
	}
	for (int i = 0; i < size2; i++)
	{
		res2 += arr2[i];
	}
	if (res1< res2)
	{
		pointer = arr1;
		cout << *pointer << endl;

	}
	else if (res1>res2)
	{
		pointer = arr2;
		cout << *pointer << endl;
	}
	else
	{
		cout << "Sums are equal" << endl;
	}


	/*int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };
	int* ptr = nullptr;
	minArray(arr1, arr2, 5, 5, ptr);*/
}
int main()
{
	return 0;	
}


