#include <iostream>
using namespace std;

void zd1()
{
    int const N{ 10 };
    int A[N], K{ 1 }, L{ 4 };
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = i;
    }
    float S{ 0 };
    for (int i{ K }; i <= L; i++)
    {
        S = S + A[i];
    }
    S = S / (L - K + 1);
    cout << S << "\n\n";
    return;
}

void zd2()
{
    int const N{ 10 };
    bool posled{ true };
    int A[N], r;
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = i;
    }
    r = A[1] - A[0];
    for (int i{ 2 }; i < N; i++)
    {
        if (A[i] - A[i - 1] != r)
        {
            posled = false;
            break;
        }
    }
    if (posled == true)
    {
        cout << r;
    }
    else
    {
        cout << 0;
    }
    cout << "\n\n";
    return;
}

void zd3()
{
    int const N{ 10 };
    int A[N], min;
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = i;
    }
    min = A[0];
    for (int i{ 0 }; i < N; i += 2)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    cout << min << "\n\n";
    return;
}

void zd4()
{
    int const N{ 10 };
    int A[N], max;
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = i;
    }
    if (A[N - 1] > A[N - 2])
    {
        max = A[N - 1];
        cout << max;
        return;
    }
    for (int i{ N - 2 }; i >= 0; i--)
    {
        if (A[i] > A[i + 1] && A[i] > A[i - 1])
        {
            max = A[N - 1];
            cout << max;
            return;
        }
    }
}
void zd5()
{
    cout << "\n\n";
    int const N{ 10 };
    int A[N];
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = i;
    }
    A[6] = 1;
    for (int i{ 0 }; i < N - 1; i++)
    {
        for (int j{ i + 1 }; j < N; j++)
        {
            if (A[i] == A[j])
            {
                cout << i << " " << j;
                return;
            }
        }
    }
}

void main()
{
    zd1();
    zd2();
    zd3();
    zd4();
    zd5();
    return;
}