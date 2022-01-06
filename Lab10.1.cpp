#include <iostream>
using namespace std;
int A, B;

int main()
{
    cin >> A >> B;
    cout << "A > 2 и B <= 3" << endl;
    if (A > 2 && B <= 3)
    {
        cout << "Справедливо" << endl;
    }
    else
    {
        cout << "Не Справедливо" << endl;
    }
}