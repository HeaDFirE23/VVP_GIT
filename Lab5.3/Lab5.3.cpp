#include <iostream>
#include <math.h>

using namespace std;
double a, b, c, ac, bc, pr;
int main()
{
	cin >> a >> c >> b;
	ac = abs(a - c);
	bc = abs(b - c);
	pr = ac * bc;

	cout << "AC = " << ac << endl;
	cout << "BC = " << bc << endl;
	cout << "AC * BC = " << pr << endl;
	return 0;
}