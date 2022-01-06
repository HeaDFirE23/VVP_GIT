#include <iostream>
using namespace std;
int N = 285;

int main()
{
    cout << N % 7 << endl;
    if (N % 7 == 1)
    {
        cout << "Понедельник" << endl;
    }
    if (N % 7 == 2)
    {
        cout << "Вторник" << endl;
    }
    if (N % 7 == 3)
    {
        cout << "Среда" << endl;
    }
    if (N % 7 == 4)
    {
        cout << "Четверг" << endl;
    }
    if (N % 7 == 5)
    {
        cout << "Пятница" << endl;
    }
    if (N % 7 == 6)
    {
        cout << "Суббота" << endl;
    }
    if (N % 7 == 0)
    {
        cout << "Воскресенье" << endl;
    }
}