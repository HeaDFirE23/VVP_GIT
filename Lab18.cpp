#include <iostream>
using namespace std;

void zd1()
{
    int const N{ 7 };
    int A[N], B[N];
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = i;
        B[i] = N - i;
    }
    for (int i{ 0 }; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    for (int i{ 0 }; i < N; i++)
    {
        cout << B[i] << " ";
    }
    cout << "\n\n";
    swap(A, B);
    for (int i{ 0 }; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    for (int i{ 0 }; i < N; i++)
    {
        cout << B[i] << " ";
    }
    cout << "\n\n";
    return;
}

void zd2()
{
    int const N{ 7 };
    int A[N], S{ 0 };
    float B[N];
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = i;
    }
    for (int i{ 0 }; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    for (int i{ 0 }; i < N; i++)
    {
        for (int j{ 0 }; j <= i; j++)
        {
            S = S + A[j];
        }
        B[i] = (float)S / (i + 1);
        S = 0;
    }
    for (int i{ 0 }; i < N; i++)
    {
        cout << B[i] << " ";
    }
    cout << "\n\n";
    return;
}

void zd3()
{
    int const N{ 7 };
    int A[N], max;
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = i;
    }
    for (int i{ 0 }; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    for (int i{ N - 1 }; i > -1; i--)
    {
        max = A[i];
        if ((A[i] % 2) == 1)
        {
            break;
        }
    }
    for (int i{ 0 }; i < N; i++)
    {
        if ((A[i] % 2) == 1)
        {
            A[i] = A[i] + max;
        }
    }
    for (int i{ 0 }; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n\n";
    return;
}

void zd4()
{
    int const N{ 7 };
    int A[N];
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = i + 1;
    }
    for (int i{ 0 }; i < N; i++)
    {
        cout << A[i] << " ";
    }
    int max{ A[N - 1] }, min{ A[0] };
    for (int i{ 1 }; i < N; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    for (int i{ N - 2 }; i >= 0; i--)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    for (int i{ 0 }; i < N; i++)
    {
        if (max == A[i])
        {
            max = i;
            break;
        }
    }
    for (int i{ 0 }; i < N; i++)
    {
        if (min == A[i])
        {
            min = i;
            break;
        }
    }
    if (max > min)
    {
        for (int i{ min + 1 }; i < max; i++)
        {
            A[i] = 0;
        }

    }
    else
    {
        for (int i{ max + 1 }; i < min; i++)
        {
            A[i] = 0;
        }

    }
    cout << "\n";
    for (int i{ 0 }; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n\n";
    return;
}

void zd5()
{
    int const N{ 7 };
    int A[N], buf;
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = i + 1;
    }
    A[0] = 8;
    for (int i{ 0 }; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    for (int i{ 1 }; i < N; i++)
    {
        if (A[i] < A[i - 1])
        {
            buf = A[i];
            A[i] = A[i - 1];
            A[i - 1] = buf;
        }
        else
        {
            break;
        }
    }
    for (int i{ 0 }; i < N; i++)
    {
        cout << A[i] << " ";
    }
    return;
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