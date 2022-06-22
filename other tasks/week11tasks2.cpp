#include <iostream>
using namespace std;

//edno ne znam kak raboti
int* insertAt(int*& arr, int size, int index, int element)
{
	int newSize = size + 1;
	int* temp = new int[newSize];
	for (int i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}

	temp[index] = element;

	for (int i = index+1; i < newSize; i++)
	{
		temp[i] = arr[i-1];

	}
	
	for (int i = 0; i < newSize; i++)
	{
		arr[i] = temp[i];
	}
	
	return arr;



	/*int* arr = new int[6]{1,4,23,2,5,23};
	insertAt(arr, 6,2,43);
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}*/
}

//dve
int* removeAt(int*& arr, int& size, int index)
{
	int* temp = new int[size-1];
	size -= 1;

	for (int i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}

	for (int i = index; i < size; i++)
	{
		temp[i] = arr[i + 1];
	}
	delete[] arr;
	arr = temp;
	
	return arr;


	/*int* arr = new int[6]{ 1,4,23,2,5,23 };
	int size = 6;
	removeAt(arr, size, 0);

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}*/
}

int main()
{
	
}

 