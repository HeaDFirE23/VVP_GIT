#include <iostream>
using namespace std;
int main()
{
	double cost;
	cin >> cost;
	for (int i = 1; i <= 10; i++)
	{
		cout << (cost * i * 0.1) << endl;
	}
}