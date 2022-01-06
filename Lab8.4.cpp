#include <iostream>

using namespace std;
int A = 27;
int x;

int main()
{
    x = ((A % 10) * 10) + A / 10;
    cout << x << endl;
}
