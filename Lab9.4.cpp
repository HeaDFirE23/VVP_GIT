#include <iostream>
using namespace std;
int A = 5, B = 5, C = 2, k, n;

int main()
{
    k = (A * B) / (C * C);
    n = (A * B) - (C * C * k);
    cout << "Количество квадратов = " << k << endl;
    cout << "Незанятая площадь = " << n << endl;
    cout << A * B << endl;
}