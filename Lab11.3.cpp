#include <iostream>
using namespace std;
int main()
{
    int a, b, c, s;
    cin >> a >> b >> c;
    if (b > c) {
        s = c - a;
        cout << c << " " << s;
    }
    else if (b < c) {
        s = b - a;
        cout << b << " " << s;
    }

    return 0;
}