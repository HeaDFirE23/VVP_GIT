#include <iostream>
using namespace std;
int main()
{
    int N;
    double x = 0;
    cin >> N;
    for (int i = 1; i <= (N * 2 - 1); i+= 2)
    {
        x += i;
    }
    cout << x << endl;
}