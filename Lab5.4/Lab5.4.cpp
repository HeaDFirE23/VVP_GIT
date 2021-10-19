#include <iostream>
#include <math.h>

using namespace std;
double x, xx, y, yy, P, S;
int main()
{
	cin >> x >> y >> xx >> yy;
	P = 2 * (abs(xx - x) + abs(yy - y));
	S = abs(xx - x) * abs(yy - y);

	cout << "P = " << P << endl;
	cout << "S = " << S << endl;
	return 0;
}