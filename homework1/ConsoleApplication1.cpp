#include <iostream>
using namespace std;


int main()
{
    int t1, t2 ,o1 ,o2;
    int interval = 0;
    
    cin >> t1 >> o1 >> t2 >> o2;

    if ((o1<1 || o1 >8) || (o2 < 1 || o2 >8) || (t1<1 || t1>8) || (t2 < 1 || t2>8))
    {        
        cout << "Wrong input";
        return 0;
    }
    if ((o1==1 && t1<6) || (o2==1 && t2<6))
    {       
        cout << "Wrong input";
        return 0;
    }

    if (t1>t2)
    {
        if (t2 ==1)
        {
            t2 = 8;
            o2--;
        }
        else
        {
            interval = 8%(t1-t2);
            cout << interval << endl;
        }     
    }

    switch (interval)
    {
    case 2: cout << "Out of tune"; break;
    case 3: cout << "Good sound"; break;
    case 4: cout << "Hollow sound"; break;
    case 7: cout << "Out of tune"; break;
    default: cout << "Normal"; break;
    }
   
    return 0;
}

