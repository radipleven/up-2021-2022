#include <iostream>
using namespace std;

//nula
int* halfArr(int* arr, int size)
{
    int* newArr = new int[size / 2];
	for (int i= 0; i < size/2; i++)
	{
		newArr[i] = arr[i];
	}

	return newArr;
}

//edno
int* copyArr(int* arr, int size)
{
	int* arr1 = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr[i];
	}

	return arr1;
}

//dve
void printRows(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}cout << endl;
}
void teachers()
{
	int teachers;
	cout << "Enter number of teachers ";
	cin >> teachers;
	int** matrix = new int* [teachers];
	for (int i = 0; i < teachers; i++)
	{ 
		
		cout << "Enter number of grades for teacher #" << i + 1<< " ";
		int a;
		cin >> a; 
		matrix[i] = new int[a];
		for (int j = 0; j < a; j++)
		{
			int n;
			cout << "Enter grade #" << j + 1<< " ";
			cin >> n;
			matrix[i][j] = n;
		}
		cout << "Grades for teacher #" << i + 1 << ": ";
		printRows(matrix[i], a);
	}

	
	for (int i = 0; i < teachers; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	
}

//chetiri
int sum = 0;
int rem = 0;
int reverse(int n)
{
	if (n > 0)
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

char* intToChar(int a)
{
	int size = 0;
	int tempNumber = a;
	while (tempNumber != 0)
	{
		size ++;
		tempNumber /= 10;
	}
	
	cout << "size:  " << size << endl; //3  ?
	char* asd = new char[size]; //7
	cout << strlen(asd) << "length of asd" << endl;
	int tempi = reverse(a);
	
	for (int i = 0; i < size; i++)
	{
		asd[i] = tempi % 10 + '0';
		tempi /= 10;
	}

	return asd;
	

}

//shest
void copyArray(char* str1, const char* str2)
{
	int size = strlen(str2);
	for (int i = 0; i < size; i++)
	{
		str1[i] = str2[i];
	}

}

// sedem
char* copyArrDynamic(char str[], int size)
{
	char* arr = new char[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}
	return arr;
}

//osem
int getSize(char* str) {
	int size = 0;
	while (*str != '\0') {
		size++;
		str++;
	}
	return size;
}
//char* concat(char str1[], char str2[])
//{
//	char* str = new char[getSize(str1) + getSize(str2) +1];
//
//	for (int i = 0; i < getSize(str1); i++)
//	{
//		str[i] = str1[i];
//	}
//
//	int a = 0;
//	for (int j = getSize(str1)+1; j < getSize(str1)+getSize(str2); j++)
//	{
//		str[j] = str1[a];
//		a++;
//	}
//
//	return str;
//}


//ilia concat
char* concat(char* str_1, char* str_2) {

	int new_size_1 = getSize(str_1);
	int new_size_2 = getSize(str_2);

	char* newStr = new char[new_size_1 + new_size_2 + 1];
	for (int i = 0; i < new_size_1; i++) {
		newStr[i] = str_1[i];
	}
	for (int i = new_size_1; i < new_size_1 + new_size_2 + 1; i++) {
		newStr[i] = str_2[i - new_size_1];
	}
	return newStr;
}
int main()
{
	/*
	char str1[1024];
	const char* str2 = "asdolifg";

	copyArray(str1, str2);

	for (int i = 0; i < strlen(str2); i++)
	{
		cout << str1[i];
	}*/

	/* sedma
	char arr[] = "asdasd";
	char* dynArr = copyArrDynamic(arr, 6);
	for (int i = 0; i < 6; i++)
	{
		cout << dynArr[i];
	}
	
	delete[] dynArr;*/

	char* str1 = new char[5]{ 'I', 'l', 'i', 'a' };
	char* str2 = new char[5]{ 'A', 'l', 'e', 'x' };
	char* result = concat(str1, str2);
	cout << result << endl;
	delete[] str1;
	delete[] str2;
	delete[] result;
	return 0;
}


