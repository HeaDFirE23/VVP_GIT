#include <iostream>

using namespace std;

int main()
{
    int a{ 3 }, b{ 4 }, c{ 5 };
    cout << "\n\n a b c = " << a << " " << b << " " << c;
    bool f{ false };
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        f = true;
    }
    if (f == true)
    {
        cout << "\nИстина";
    }
    else
    {
        cout << "\nЛожь";
    }
}