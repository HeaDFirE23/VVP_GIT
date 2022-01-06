
#include <iostream>
using namespace std;

int A, B, C, x;

int main()
{
    cin >> A >> B >> C;
    x = C;
    C = A;
    A = B;
    B = x;
    cout << A << ' ' << B << ' ' << C << endl;
    return 0;
}