#include <iostream>
using namespace std;

int main()
{
    char C{ 'В' };
    int N{ 1 }, K{ (int)(C) };
    switch (K)
    {
    case -47:
        K = 1;
        break;
    case -57:
        K = 2;
        break;
    case -34:
        K = 3;
        break;
    case -62:
        K = 4;
        break;
    }
    switch (N)
    {
    case 1:
        ++K;
        break;
    case -1:
        --K;
        break;
    }
    if (K == 5)
    {
        K = 1;
    }
    if (K == 0)
    {
        K = 4;
    }
    switch (K)
    {
    case 1:
        std::cout << "\n\nCевер";
        break;
    case 2:
        std::cout << "\n\nЗапад";
        break;
    case 3:
        std::cout << "\n\nЮг";
        break;
    case 4:
        std::cout << "\n\nВосток";
        break;
    }
}