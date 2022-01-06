#include <iostream>
using namespace std;
int x = 267;

int main()
{
    cout << "Цифры данного числа образуют возрастающую или убывающую последовательность" << endl;
    if (x / 100 < ((x / 10) % 10) < x % 10 && x / 100 > ((x / 10) % 10) > x % 10)
    {
        cout << "Истинно" << endl;
    }
    else
    {
        cout << "Ложно" << endl;
    }
}