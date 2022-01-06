#include <iostream>

using namespace std;
double A1 = 4, A2 = 3, B1 = -1, B2 = 2, C1 = 9, C2 = 3, x, y, k;

int main()
{
	k = A1 / A2;
	if (k >= 1)
	{
		y = (C2 * k - C1) / (B2 * k - B1);
	}
	else
	{
		y = (C1 / k - C2) / (B1 / k - B2);
	}
	x = (C1 - B1 * y) / A1;
    cout << 'x = ' << x << endl;
	cout << 'y = ' << y << endl;
}