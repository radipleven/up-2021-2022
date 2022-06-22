#include <iostream>
using namespace std;
const int MAXSIZE = 100;

void fillMatrix(int matrix[][MAXSIZE], int n, int m) //n-rows m-columns
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];

		}
	}
}
void printMatrix(int matrix[][MAXSIZE], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}
}
void snowflakeSpread(int matrix[][MAXSIZE], int n, int m,int a, int b, int value) //a,b - coordinates of snowflake center
{
	for (int i = a+1; i <= n; i++)//down right
	{
		for (int j = b+1; j <= m; j++)
		{
			matrix[i][j] += value;
		}
	}

	for (int i = a + 1; i <= n; i++)//down left
	{
		for (int j = b - 1; j >= 0; j--)
		{
			matrix[i][j] += value;
		}
	}
	for (int i = a - 1; i >= 0; i--)//up right
	{
		for (int j = b + 1; j < m; j++)
		{
			matrix[i][j] += value;
		}
	}

	for (int i = a - 1; i >= 0; i--)//up left
	{
		for (int j = b - 1; j >= 0; j--)
		{
			matrix[i][j] += value;
		}
	}

}
void snowflakes(int matrix[][MAXSIZE], int n, int m)
{
	int coordinate1[MAXSIZE];
	int coordinate2[MAXSIZE];
	int values[MAXSIZE];
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] >= 0)
			{
				coordinate1[i] = i;
				coordinate2[i] = j;
				values[i] = matrix[i][j];
				counter++;
			}

		}
	}

	for (int i = 0; i < counter; i++)
	{
		snowflakeSpread(matrix, n, m, coordinate1[i], coordinate2[i], values[i]);
	}
}
int main()
{
	int n,m;
	cin >> n >>m;
	int matt[MAXSIZE][MAXSIZE];

	fillMatrix(matt, n, m);
	snowflakeSpread(matt, n, m,2,2,3);
	printMatrix(matt, n, m);
	return 0;
}

