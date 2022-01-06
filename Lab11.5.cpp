#include <iostream>
using namespace std;
int main() 
{
    double a;
    cin >> a;

    if (a > 0) 
    {
        cout << "положительное ";

    }
    if (a < 0) 
    {
        cout << "отрицательное ";

    }
    if (a == 0) 
    {
        cout << "нулевое число ";
    }
    else 
    {
        if (a / 2 == 0) 
        {//костыль на нулевое число 
            cout << "нечетное число ";

        }

        else 
        {
            cout << "четное число ";
        }
    }

    return 0;
}