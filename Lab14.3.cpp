# include <iostream>
# include <cmath>

using namespace std;

int main()

{

	int N;
	int K = 0;
	int S = 0;
	cin >> N;
	while (S <= N) {
		++K;
		S += K;
	}
	cout << K << endl;
	return 0;
}