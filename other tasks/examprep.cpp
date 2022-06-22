#include <iostream>
using namespace std;


void rec(char* str1, char* str2)
{

	if (*str1 == '\0' && *str2 == '\0')// if edno
	{
		return;
	}else if (*str1 != '\0' && *str2 == '\0') // if dve
	{
		cout << *str1;
		--str2;
		rec(str1 + 1, str2 + 1);
	}else if (*str2 != '\0' && *str1 == '\0') // if tri
	{	
		cout << *str2;
		--str1;
		rec(str1 + 1, str2 + 1);
	}
	else
	{
		cout << *str1;
		cout << *str2;

		rec(str1 + 1, str2 + 1);
	}
	
	
}

void  reverseRows(int matrix[3][3])//purva
{
	for (int i = 2; i >= 0; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j]<< " ";
		}
		cout << endl;
	}
}

void  reverseCols(int matrix[3][3])//vtora
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 2; j >= 0; j--)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void  reverseSmth(int matrix[3][3]) // treta
{
	for (int i = 2; i <=0; i--)
	{
		for (int j = 2; j >= 0; j--)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void  reverseSmth(int matrix[3][3]) // chetvurta
{
	for (int i = 2; i <= 0; i--)
	{
		for (int j = 2; j >= 0; j--)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void  reverseColsAndRows(int matrix[3][3]) // peta
{
	for (int i = 2; i >= 0; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}
}

void transponirana(int matrix[3][3])//6
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}
}

void doubleTrans(int matrix[3][3])//7
{
	for (int i = 2; i >= 0; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}
}

void revCols(int matrix[3][3])//8
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 2; j >= 0; j--)
		{
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}
}

void lastOne(int matrix[3][3])//9
{
	for (int i = 2; i >= 0; i--)
	{
		for (int j = 2; j >= 0; j--)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{

	char str1 [5]= { 'a','c','e','g' };
	char str2 [6] = { 'b','d','f','h','i' };
	double a = 39;
	double b = 39;
	double c = 39;
	double d = 39;
	int e = 3456;
	bool exist = a + b + c + d == 360;
	bool exist2 = (e % 100)/10 < 7 && e % 3 == 0;
	//rec(str1,str2);
	int matrix[3][3] = { {1, 2, 3},
						 {4, 5, 6},
						 {7, 8, 9} };
	reverseCols(matrix);
	
	return 0;
}

