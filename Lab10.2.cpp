#include <iostream>
using namespace std;
int A, B, C;

int main()
{
    cin >> A >> B >> C;
    cout << "A < B < C" << endl;
    if (A < B && B < C)
    {
        cout << "Справедливо" << endl;
    }
    else
    {
        cout << "Не Справедливо" << endl;
    }
}