
#include <iostream>
using namespace std;

int A, B, x;

int main()
{
    cin >> A >> B;
    x = A;
    A = B;
    B = x;
    cout << A << ' ' << B << endl;
    return 0;
}
