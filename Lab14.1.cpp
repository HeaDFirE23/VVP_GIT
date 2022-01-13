#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i != b + 1; i++)
    {
        for (int j = b; j != i; j++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}