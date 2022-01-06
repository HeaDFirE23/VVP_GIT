#include <iostream>
using namespace std;
int main() 
{
    int a;
    cin >> a;
    if (a / 2 == 0) 
    {
        cout << "четное";

    }
    else 
    {
        cout << "нечетное ";
    }
    if (a / 100 >= 1) 
    {
        cout << "трехзначное число";

    }
    else 
    {
        if (a / 10 >= 1) 
        {
            cout << "двузначное число";

        }
        else 
        {
            cout << "однозначное число";
        }
    }

    return 0;
}