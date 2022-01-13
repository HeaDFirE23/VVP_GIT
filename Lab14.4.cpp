#include <iostream>
using namespace std;
int main()
{
    double proc;
    cin >> proc;
    if (proc < 0 || proc>25)
    {
        return 1;
    }
    double deposit = 1000;
    int count = 0;
    while (deposit < 1100)
    {
        deposit += deposit / proc;
        count++;
    }

    cout << "До превышения лимита вклада на сумму 1100р. понадобится: " << count << " месяца " << "\nсумма вклада составит: " << deposit << " руб.";
    return 0;
}