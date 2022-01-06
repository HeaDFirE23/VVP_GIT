#include <iostream>
using namespace std;
int x = 22;

int main()
{
    cout << "Данное число является четным двузначным" << endl;
    if (x % 2 == 0 && x / 10 > 1)
    {
        cout << "Справедливо" << endl;
    }
    else
    {
        cout << "Не Справедливо" << endl;
    }
}