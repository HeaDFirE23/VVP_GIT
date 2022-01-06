#include<iostream>
using namespace std;
int main() 
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && b >= c)
        cout << a + b << endl;
    else if (a >= b && b <= c)
        cout << a + c << endl;
    else if (b >= a && a >= c)
        cout << b + a << endl;
    else if (b >= a && a <= c)
        cout << c + b << endl;
    else if (c >= a && b <= a)
        cout << c + a << endl;
    else if (c >= a && b >= a)
        cout << c + b << endl;
    return 0;
}