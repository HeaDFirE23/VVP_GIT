
#include <iostream>
using namespace std;

int A, B, C, x;

int main()
{
    cin >> A >> B >> C;
    x = A;
    A = B;
    B = C;
    C = x;
    cout << A << ' ' << B << ' ' << C << endl;
    return 0;
}