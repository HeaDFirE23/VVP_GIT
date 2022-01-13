#include <iostream>
using namespace std;

int main()
{
    float A{ 1.1 }, SUM{ 1 }, P{ 1 };
    int N{ 3 };
    for (int i{ 1 }; i != N + 1; i++)
    {
        P = P * A;
        SUM = SUM + P;
    }
    cout << "\n\n" << SUM;
    return;
}
