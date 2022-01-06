#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    if (a > b) {
        b = a;
        cout << a << " " << b;
    }
    else {
        if (a < b) {
            a = b;
            cout << a << " " << b;
        }
        else {
            if (a = b) {
                a = 0;
                b = 0;
                cout << a << " " << b;
            }
        }
    }

    return 0;
}