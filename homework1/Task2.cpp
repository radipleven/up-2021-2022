#include <iostream>
using namespace std;

void oneToNine(int n)
{
	switch (n)
	{
	case 9: cout << "IX"	<< endl; break;
	case 8: cout << "VII"	<< endl; break;
	case 7: cout << "VII"	<< endl; break;
	case 6: cout << "VI"	<< endl; break;
	case 5: cout << "V"		<< endl; break;
	case 4: cout << "IV"	<< endl; break;
	case 3: cout << "III"	<< endl; break;
	case 2: cout << "II"	<< endl; break;
	case 1: cout << "I"		<< endl; break;

	}
}
int main()
{
    int n;
    cin >> n;
	if (n < 0 || n >999)
	{
		cout << "number out of range";
		return 0;
	}

	
		if (n>=900)
		{
			cout << "CM";
			n %= 900;
		}
		else if (n >= 500)
		{
			{
				int d = n / 500;
				
				for (int i=0; i < d; i++)
				{
					cout << "D";
				}
			}
			n %= 500;
		}

		

		if (n>=400)
		{
			cout << "CD";
			n %= 400;
		}
		else if (n >= 100)
		{
			{
				int c = n / 100;
				
				for (int i=0; i < c; i++)
					cout << "C";
			}
			n %= 100;
		}

		if (n>=90)
		{
			cout << "XC";
			n %= 90;
		}
		else if (n >= 50)
		{
			{
				int l = n / 50;
				
				for (int i = 0; i < l; i++)
				{
					cout << "L";
				}
			}
			n %= 50;
		}

		if (n >= 40)
		{
			cout << "XL";
			n %= 40;
		}

		else if (n >= 10)
		{
			{
				int x = n / 10;
				
				for (int i=0; i < x; i++)
					cout << "X";
			}
			n %= 10;
		}

		
		if (n >= 9)
		{
			cout << "IX";
			n %= 9;
		}

		else if (n >= 5)
		{
			{
				int v = n / 5;
				
				for (int i=0; i < v; i++)
					cout << "V";
			}
			n %= 5;
		}

		if (n >= 4)
		{
			cout << "IV";
			n %= 4;
		}
		else if (n >= 1)
		{
			int a = n;
			
			for (int i=0; i < a; i++)
				cout << "I";
		}
		
		cout << endl;
		
		
	

	return 0;
}

