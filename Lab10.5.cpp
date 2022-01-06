#include <iostream>
using namespace std;
int x = 7557;

int main()
{
    cout << "Данное число читается одинаково слева направо и справа налево" << endl;
    if (x / 1000 == x % 10 && ((x / 100) % 10) == ((x / 10) % 10))
    {
        cout << "Истинно" << endl;
    }
    else
    {
        cout << "Ложно" << endl;
    }
}