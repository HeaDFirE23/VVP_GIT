#include <iostream>
using namespace std;

const int n = 3;
int mas[n] = { 4 , 3 , 5 };
int x = 0, z;

int main()
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        x = mas[i];
        for (j = i - 1; j >= 0 && mas[j] > x; j--)
            mas[j + 1] = mas[j];

        mas[j + 1] = x;
    }
    cout << mas[0] << " " << mas[1] << " " << mas[2] << endl;
    z = mas[0] * mas[0] + mas[1] * mas[1];
    if (z == mas[2] * mas[2])
    {
        cout << "Треугольник Прямоугольный" << endl;
    }
    else
    {
        cout << "Треугольник не Прямоугольный" << endl;
    }
}
