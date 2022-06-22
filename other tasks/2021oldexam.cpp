#include <iostream>
using namespace std;
const int MAX_SIZE = 1024;

bool function(int* matrix[], int size)
{
	
	

	int counter1 = 0;
	int counter2 = 0;
	int counter3 = 0;
	int counter4 = 0;
	

	//goren lqv
	for (int i = 0; i < (size-1)/2; i++)   //2
	{
		for (int j = 0; j < (size - 1) / 2; j++)//2
		{
			if (i==j)
			{
				counter1 += matrix[i][j];
			}
		}
	}
	 // goren desen
	for (int i = 0; i <(size-1)/2 ; i++)//0 do 1
	{
		for (int j = ((size - 1) / 2) + 1 ; j < size; j++)//3 do 4
		{
			if ((i+ ((size - 1) / 2) + 1)==j)
			{
				counter2 += matrix[i][j];
			}
		}
	}

	
	//dolu lqv
	for (int i = ((size - 1) / 2) + 1; i < size; i++)//3 do 4
	{
		for (int j =  0; j < ((size - 1) / 2); j++)//0 do 2
		{
			if ((j + ((size - 1) / 2) + 1) == i)  //i+3==j
			{
				counter3 += matrix[i][j];
			}
		}
	}


	// dolu desen
	for (int i = ((size - 1) / 2) + 1; i < size; i++)   //2
	{
		for (int j = ((size - 1) / 2) + 1; j < size; j++)//2
		{
			if (i == j)
			{
				counter4 += matrix[i][j];
			}
		}
	}
	if (counter1 == counter2 == counter3 == counter4)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{ 
    
	int size = 0;
	while (true)
	{	
		cin >> size;
		if (size > 3 && size %2 !=0)
		{
			break;
		}
	}
	cout << "size: " << size << endl;
	
	
	int** matrix = new int* [size];
	for (int i = 0; i < size; i++)
	{
		matrix[i] = new int[size];
	}

	cout << "Fill matrix" << endl;
	for (int j = 0; j < size; j++)
	{
		cout << "Row #" << j << endl;
		for (int i = 0; i < size; i++)
		{
			cin >> matrix[j][i];
		}
	}

	cout << "Print matrix" << endl;

	for (int j = 0; j < size; j++)
	{
		
		for (int i = 0; i < size; i++)
		{
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}

	cout << function(matrix,size);

	for (int i = 0; i < size; i++)
	{
		delete [] matrix[i] ;
	}

	delete[] matrix;
	return 0;


}

