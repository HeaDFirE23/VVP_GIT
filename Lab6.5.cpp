
#include <iostream>

using namespace std;

int x, y, z;

int main()
{
    cin >> x;
    z = (x - 3) * (x - 3) * (x - 3);
    y = 4 * (z * z) - 7 * z + 2;
    cout << y << endl;
    return 0;
}