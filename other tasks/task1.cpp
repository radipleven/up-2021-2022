#include <iostream>
using namespace std;
void row1andN(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "*";
	}
	for (int i = 0; i < n / 2; i++)
	{
		cout << " ";
	}
	for (int i = 0; i < n; i++)
	{
		cout << "*";
	}
	cout << endl;
}
int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) 
	{
		for (int k = n - i; k > 0; k--)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}

