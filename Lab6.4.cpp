#include <iostream>

using namespace std;
int x, x2, y;

int main()
{
    cin >> x;
    x2 = x * x;
    y = 3 * (x2 * x2 * x2) - 6 * x2 - 7;
    cout << y << endl;
    return 0;
}