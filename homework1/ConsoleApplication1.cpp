#include <iostream>
using namespace std;

int main()
{

	// n nechetno => n+1=3n+1
	// n chetno  => n+1 =n/2
	// broi zvezdi => n/10 +1
	int n;
	cin >> n;
	cout << n << endl;
	for (int i = 0; i < ((n + 10) / 10); i++)
	{
		cout << '*';
	}
	cout << n << endl;


	while (n != 1 && n > 0)
	{
		int nextN = n;
		if (nextN % 2 != 0)
		{
			nextN = 3 * n + 1;
			for (int i = 0; i < ((nextN + 10) / 10); i++)
			{
				cout << '*';
			}
			cout << nextN;
		}
		else if (nextN % 2 == 0)
		{
			nextN = n / 2;
			for (int i = 0; i < ((nextN / 10) + 1); i++)
			{
				cout << '*';
			}
			cout << nextN;
		}
		cout << endl;
		n = nextN;

	}
	return 0;
}

