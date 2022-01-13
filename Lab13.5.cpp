#include <iostream>
using namespace std;

int main()
{
    float A{ 1.1 }, SUM{ 1 }, P{ 1 };
    int N{ 3 }, K{ -1 };
    for (int i{ 1 }; i != N + 1; i++)
    {
        P = P * A;
        SUM = SUM + P * K;
        K *= -1;
    }
    cout << "\n\n" << SUM;
    return;
}