#include <iostream>
using namespace std;

//nula
int sumOfDigits(int n)
{
	if (n ==0)
	{
		return 0;
	}

	return sumOfDigits(n / 10) + n % 10;
}

//edno
int recStrlen(const char* str)
{
	if (*str=='\0')
	{
		return 0;
	}

	return recStrlen(str + 1) + 1;
}

//dve 
int sum=0;
int rem=0;

int reverse(int n)
{
	if (n>0)
	{
		rem = n % 10;
		sum = sum * 10 + rem;
		return reverse(n / 10);
	}
	else
	{
		return sum;
	}	
}

//tri
int factorial(int n)
{
	if (n==0)
	{
		return 1;
	}
	return factorial(n - 1) * n;
}

//chetiri
bool areEqual(const char* str1,const char* str2)
{
	if (*str1=='\0' && *str2=='\0')
	{
		return true;
	}
	if (*str1 == *str2)
	{

		return areEqual(str1 + 1, str2 + 1);
	}
	else
	{
		return false;
	}
}

//pet
int fibonacci(int n)
{
	if (n <= 1)
	{
		return n;
	}

	return fibonacci(n - 1) + fibonacci(n - 2);
}

//shest
int minimal(int* arr, int size, int min)
{
	if (size == 0)
	{
		return min;
	}
	if (*arr<min)
	{
		min = *arr;
	}
	return minimal(++arr, --size, min);
}

//sedem :)

//osem
int lowercase = 0;
int uppercasse = 0;
int numbers = 0;
void evaluate(const char* str)
{
	if (*str == '\0')
	{
		cout << "Numbers: " << numbers <<endl;
		cout << "Lowercase: " << lowercase<< endl;
		cout << "Uppercase: " << uppercasse;
		return;
	}

	if (*str >= 'a' && *str <= 'z')
	{
		lowercase++;
	}
	else if (*str >= 'A' && *str <= 'Z')
	{
		uppercasse++;
	}
	else if (*str >= '0' && *str <= '9')
	{
		numbers++;
	}
	evaluate(str+1);
}

//devet
void swapcase(const char* str)
{
	if (*str=='\0')
	{
		return;
	}
	else if(*str >='a' && *str<='z')
	{
		cout << char(*str - 32);
	}
	else if (*str >= 'A' && *str <= 'Z')
	{
		cout << char(*str + 32);
	}
	else if (*str ==' ')
	{
		cout << ' ';
	}

	swapcase(str + 1);
	
}
int main()
{
	//cout << sumOfDigits(154);
	//cout << recStrlen("Radi");
	//cout << reverse(3211);
	//cout << factorial(5);
	//cout << areEqual("","");
	//cout << fibonacci(10);
	//cout << fibonacci(10);
	//int arr[4] = { 5,2,3,4 };
	//cout << minimal(arr,4,arr[0]);
	//evaluate("123asdA");
	//swapcase("deVet PET");
	return 0;
}
