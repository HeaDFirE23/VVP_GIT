#include <iostream>
#include <vector>
using namespace std;

void zd1()
{
    vector<vector<int>> A{ {1,2,3,4}, {6,7,8,9}, {11,12,13,14}, {16,17,18,19}, {21,22,23,24} };
    vector<int> max, min;
    int M = A.size(), N{ sizeof(A[0]) / sizeof(A[0][0]) }, buff;
    for (int i{ 0 }; i < M; i++)
    {
        max = { i, 0 };
        min = { i, 0 };
        for (int j{ 0 }; j < N; j++)
        {
            if (A[i][j] < A[min[0]][min[1]])
            {
                min = { i,j };
            }
            if (A[i][j] > A[max[0]][max[1]])
            {
                max = { i,j };
            }
        }
        buff = A[min[0]][min[1]];
        A[min[0]][min[1]] = A[max[0]][max[1]];
        A[max[0]][max[1]] = buff;
    }
    for (int i{ 0 }; i < M; i++)
    {
        for (int j{ 0 }; j < N; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";
    return;
}

void zd2()
{
    vector<vector<int>> A{ {1,2,3,4}, {6,7,8,9}, {11,12,13,14}, {16,17,18,19}, {21,22,23,24} };
    vector<int> max{ 0, 0 }, min{ 0, 0 };
    int M = A.size(), N{ sizeof(A[0]) / sizeof(A[0][0]) }, buff;
    for (int i{ 0 }; i < M; i++)
    {
        for (int j{ 0 }; j < N; j++)
        {
            if (A[i][j] < A[min[0]][min[1]])
            {
                min = { i,j };
            }
            if (A[i][j] > A[max[0]][max[1]])
            {
                max = { i,j };
            }
        }
    }
    if (min[1] == max[1])
    {
        for (int i{ 0 }; i < M; i++)
        {
            for (int j{ 0 }; j < N; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << "\n";
        }
        return;
    }
    else
    {
        for (int i{ 0 }; i < M; i++)
        {
            buff = A[i][max[1]];
            A[i][max[1]] = A[i][min[1]];
            A[i][min[1]] = buff;
        }
        for (int i{ 0 }; i < M; i++)
        {
            for (int j{ 0 }; j < N; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << "\n";
        }
        return;
    }
}

void zd3()
{
    cout << "\n\n";
    vector<vector<int>> A{ {1,2,3,4}, {6,7,8,9}, {11,12,13,14}, {16,17,18,19} };
    vector<int> max{ 0, 0 }, min{ 0, 0 };
    int M = A.size(), N{ sizeof(A[0]) / sizeof(A[0][0]) }, buff;
    for (int i{ 0 }; i < M / 2; i++)
    {
        for (int j{ 0 }; j < N / 2; j++)
        {
            buff = A[i][j];
            A[i][j] = A[M - i - 1][N - j - 1];
            A[M - i - 1][N - j - 1] = buff;
        }
    }
    for (int i{ 0 }; i < M; i++)
    {
        for (int j{ 0 }; j < N; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";
    return;
}

void zd4()
{
    vector<vector<int>> A{ {1,2,3,4}, {11,12,13,14}, {6,7,8,9}, {16,17,18,19} };
    int M = A.size(), N{ sizeof(A[0]) / sizeof(A[0][0]) }, buff;
    for (int i{ 0 }; i < M - 1; i++)
    {
        for (int j{ i }; j < N; j++)
        {
            if (A[i][0] > A[j][0])
            {
                for (int k{ 0 }; k < N; k++)
                {
                    buff = A[i][k];
                    A[i][k] = A[j][k];
                    A[j][k] = buff;
                }
            }
        }
    }
    for (int i{ 0 }; i < M; i++)
    {
        for (int j{ 0 }; j < N; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    return;
}

void zd5()
{
    int i{ 1 }, k{ 0 }, S{ 0 };
    vector<vector<int>> A{ {1,2,3,4},  {6,7,8,9}, {11,12,13,14}, {16,17,18,19} };
    int M = A.size();
    cout << A[0][M - 1] << "\n";
    while (M - 1 - i >= 0)
    {
        while (M - 1 - i + k <= M - 1)
        {
            S = S + A[0 + k][M - 1 - i + k];
            k++;
        }
        cout << S << "\n";
        S = 0;
        if (k != 0)
        {
            i++;
        }
        k = 0;
    }
    i = 1;
    k = 0;
    while (i <= M - 1)
    {
        while (i + k <= M - 1)
        {
            S = S + A[i + k][0 + k];
            k++;
        }
        cout << S << "\n";
        S = 0;
        i++;
        k = 0;
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