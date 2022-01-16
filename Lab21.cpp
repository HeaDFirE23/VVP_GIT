#include <iostream>
#include <vector>
using namespace std;

void zd1()
{
    int p, a, n;
    vector<vector<double>> A{ {1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {16,17,18,19,20}, {21,22,23,24,25} };
    int m = A.size(); 
    p = m;
    for (int k{ m - 2 }; k > 0; k = k - 2)
    {
        --p;
        n = m - p - 1;

        cout << A[n][n] << " ";

        for (a = n + 1; a < p; a++)
        {
            cout << A[a][n] << " ";
        }

        cout << A[p][n] << " ";

        for (a = n + 1; a < p; a++)
        {
            cout << A[p][a] << " ";
        }

        cout << A[p][p] << " ";

        for (a = 1; p - a > n; a++)
        {
            cout << A[p - a][p] << " ";
        }

        cout << A[n][p] << " ";

        for (a = 1; p - a > n; a++)
        {
            cout << A[n][p - a] << " ";
        }
    }
    n = round(m / 2);
    cout << A[n][n];
}

void zd2()
{
    vector<vector<double>> A{ {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
    int N = A[0].size();
    int K{ 2 };
    double sum{ 0 }, pro{ 1 };
    for (int i{ 0 }; i < N; i++)
    {
        sum = sum + A[K - 1][i];
        pro = pro * A[K - 1][i];
    }
    std::cout << "\n\nСумма = " << sum << " Произведение = " << pro;
}

void zd3()
{
    vector<vector<double>> A{ {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
    int M = A.size();
    int N = A[0].size();
    int nomer, min, pro;

    int j{ 0 };
    pro = 1;
    for (int i{ 0 }; i < M; i++)
    {
        pro = pro * A[i][j];
    }
    min = pro;
    nomer = j + 1;

    for (j; j < N; j++)
    {
        pro = 1;
        for (int i{ 0 }; i < M; i++)
        {
            pro = pro * A[i][j];
        }

        if (pro < min)
        {
            min = pro;
            nomer = j + 1;
        }
    }
    cout << "\n\nНомер = " << nomer << " Произведение = " << min;
}

void zd4()
{
    vector < vector < double >> A{ {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
    int M = A.size();
    int N = A[0].size();
    int kolvo{ 0 };
    double sr{ 0 };
    cout << "\n\n";

    for (int j{ 0 }; j < N; j++)
    {
        for (int i{ 0 }; i < M; i++)
        {
            sr = sr + A[i][j];
        }
        sr = sr / M;

        for (int i{ 0 }; i < M; i++)
        {
            if (A[i][j] < sr)
            {
                kolvo = kolvo + 1;
            }
        }

        cout << j + 1 << " = " << kolvo << "\n";
        kolvo = 0;
        sr = 0;

    }
}

void zd5()
{
    vector<vector<int>> A{ {2,1,3}, {3,5,6}, {3,1,9}, {3,11,12} };
    int M = A.size();
    int N = A[0].size();
    bool nashel = false;
    for (int j{ 0 }; (j < N) && (nashel == false); j++)
    {
        bool nechet = true;
        for (int i{ 0 }; (i < M) && (nechet == true); i++)
        {
            int ost = A[i][j] % 2;
            if (ost != 1)
            {
                nechet = false;
            }
        }

        if (nechet == true)
        {
            nashel = true;
            cout << "\nНомер столбца " << j + 1;
        }
    }
    if (nashel == false)
    {
        cout << "\n0";
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    zd1();
    zd2();
    zd3();
    zd4();
    zd5();
    return 0;
}