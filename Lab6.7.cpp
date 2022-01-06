
#include <iostream>

using namespace std;
int A, y, x;

int main()
{
    cin >> A;
    x = A * A;
    y = A * A * A * A * A;
    cout << x * x * x * x * x * y << endl;
}