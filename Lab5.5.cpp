#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, x2, x3, y1, y2, y3;
    double st1, st2, st3, S, P;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    st1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    st2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    st3 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    cout << st1 << " " << st2 << " " << st3 << endl;
    P = st1 + st2 + st3;
    int PM = P / 2;
    S = sqrt(PM * (PM - st1) * (PM - st2) * (PM - st3));
    cout << "P = " << P << " S = " << S << endl;
    return 0;
}

