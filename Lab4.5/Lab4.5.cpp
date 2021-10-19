#include <iostream>
#include <math.h>

using namespace std;
double a, b, sum, raz, pr, ch;
int main()
{
	cin >> a >> b;
	a = abs(a);
	b = abs(b);
	sum = a + b;
	raz = a - b;
	pr = a * b;
	ch = a / b;

	cout << "Sum = " << sum << endl;
	cout << "Raz = " << raz << endl;
	cout << "Pr = " << pr << endl;
	cout << "Chas = " << ch << endl;
	return 0;
}