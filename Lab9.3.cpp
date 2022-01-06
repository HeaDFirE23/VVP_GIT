#include <iostream>
using namespace std;
int K = 145, N = 4;

int main()
{
    K = K + N - 1;
    if (K % 7 != 0)
    {
        cout << K % 7 << endl;
    }
    else
    {
        cout << '7' << endl;
    }
}