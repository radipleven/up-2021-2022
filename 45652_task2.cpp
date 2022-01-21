//
// СУ "Св. Климент Охридски"
// Факултет по математика и информатика
// Курс Увод в Програмирането 2020/21
// Контролно 1
// 2020-11-29
//
// Начален час на контролното: 9:00
// Име: Radostin Ivanov 
// ФН:45652
// Специалност: Информатика
// Курс: 2
// Административна група: 4
// Използван компилатор: вграден на visual studio
//

#include <iostream>
#include <cmath>


bool isPrime(int c)
{
	if (c == 0 || c==1 )return false;
	for (int i = 2; i < c; i++)
	{
		if (c % i == 0)
		{
			return false;
		}
	}

	return true;

}
int numberOfDividers(int a)
{
	int counter = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			counter++;
		}
	}

	return counter-2;
}

bool isNumberEligible(int a)
{
	if (isPrime(numberOfDividers(a)))
	{
		return true;
	}
	else return false;
}
int main()
{
	int a, b = 0;
	std::cin >> a;
	std::cin >> b;
	int c = 0;
	for (int i = a; i < b; i++)
	{
		if (isNumberEligible(i))
		{
			c++;
		}
		
	}

	std::cout << c;

}

