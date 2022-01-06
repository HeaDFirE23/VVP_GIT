#include <iostream>

using namespace std;
int A = 947;
int x;

int main()
{
    x = (A / 100) + ((A % 10) * 10) + (A / 10 % 10 * 100);
    cout << x << endl;
}
