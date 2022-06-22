#include <iostream>
using namespace std;

//Напишете програма, която проверява дали по въведени x, y (координати на точка), 
// R (радиус), x1, y1(център на окръжност),
//точката P(x,y) лежи в окръжността C(R, K(x1, y1)).


//In general, x and y must satisfy (x - center_x)² + (y - center_y)² < radius².
int main()
{
    int x, y, r, x1, y1;

    cout << "enter x: ";
    cin >> x;
    cout << endl;
    cout << "enter y: ";
    cin >> y;
    cout << endl;
    cout << "enter r: ";
    cin >> r;
    cout << endl;
    cout << "enter x1: ";
    cin >> x1;
    cout << endl;
    cout << "enter y1: ";
    cin >> y1;
    cout << endl;

    //(x-x1)^2 + (y-y1)^2=r*r
    
    if ( ( (x-x1)*(x-x1)  +  (y-y1)*(y-y1) )<= (r*r) )
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}

