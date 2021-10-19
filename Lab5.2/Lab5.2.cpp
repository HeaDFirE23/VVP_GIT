#include <iostream>
#include <math.h>

using namespace std;
double a, b, c, ac, bc, sum;
int main()
{
	cin >> a >> b >> c;
	ac = abs(a - c);
	bc = abs(b - c);
	sum = ac + bc;

	cout << "AC = " << ac << endl;
	cout << "BC = " << bc << endl;
	cout << "AC + BC = " << sum << endl;
	return 0;
}