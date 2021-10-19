#include <iostream>
#include <math.h>

using namespace std;
double x, xx, y, yy, l;
int main()
{
	cin >> x >> y >> xx >> yy;
	l = sqrt((x - xx) * (x - xx) + (y - yy) * (y - yy));

	cout << "Rasstyanie = " << l << endl;
	return 0;
}