#include <iostream>

using namespace std;

void readArrays(int arr[], int n)
{
    cout << "Enter array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
void sort(int arr[],int n)
{
    for (int a = 0; a < n; a++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int temp = 0;
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    
}
void mixArrays(int arr1[], int arr2[], int n)
{
    int counter = 0;
    for (int i = n; i < 2*n; i++)
    {
        arr1[i] = arr2[counter];
        counter++;
    }
    //sort(arr1, n);
    
}

void reverseArray(int arr[], int n)
{
    int temp[100];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{

    int n;
    int arr1[100];
    int arr2[100];
    cin >> n;

    readArrays(arr1, n);
    printArr(arr1, n);
    cout << endl;
    readArrays(arr2, n);
    printArr(arr2, n);

    
   // mixArrays(arr1, arr2, n);
    
    
    return 0;
}


