#include <iostream>
using namespace std;
int main()
{
    int N;
    double x = 1;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        x = x * 1.1 * i;
    }
    cout << x << endl;
    return 0;
}