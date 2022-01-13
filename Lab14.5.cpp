#include <iostream>

using namespace std;
int NOD(int a, int b);

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    if (b == 0)
        cout << a << endl;
    else
        cout << NOD(a, b) << endl;

    return 0;
}

int NOD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}