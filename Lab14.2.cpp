﻿#include <iostream>
using namespace std;
int main()
{
    int a, b, c = 0;
    cin >> a >> b;

    while (a > b)
    {
        a -= b;
        c += 1;
    }
    cout << c << "\n\n";

}