#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;

    if (number > 999 || number < 100)
    {
        std::cout << "number out of range";
        return 0;
    }

    int firstDigit = number / 100;
    int secondDigit = (number % 100) / 10;
    int thirdDigit = number % 10;
    int n = firstDigit + secondDigit;
    int m = firstDigit + thirdDigit;
    int temp = number;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (temp % 5 == 0)
            {
                temp -= firstDigit;
            }
            else if (temp % 3 == 0)
            {
                temp -= secondDigit;
            }
            else if (temp % 3 != 0 && temp % 5 != 0)
            {
                temp += thirdDigit;
            }

            cout << temp << " ";
        }
        cout << endl;
    }


}
// prima - edin ton
// sekunda - dva susedni
// terca  - ton i ton prez nego - 1 i 3
//kvarta -1 i 4
// kvinta 1 i5 
// seksta 1 i 6
//septima 1 i 7
// oktava 1 i 8

// do re mi fa sol la si do re

