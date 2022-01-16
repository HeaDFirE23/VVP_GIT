#include <iostream>
#include <string>
using namespace std;

void zd1()
{
    char C{ 'S' };
    cout << (char)((int)C - 1) << " " << (char)((int)C + 1);
    cout << "\n\n";
    return;
}

void zd2()
{
    string SNAK{ "SSS" };
    int i{ 0 };
    while (i != SNAK.length() - 1)
    {
        if (SNAK[i] != ' ')
        {
            SNAK.insert(SNAK.begin() + i + 1, ' ');
        }
        i++;
    }
    cout << SNAK;
    cout << "\n\n";
    return;
}

void zd3()
{
    string SNAK{ "SSaS" };
    int i{ 0 }, c{ 0 };
    while (i < SNAK.length())
    {
        if ((int)SNAK[i] >= 65 && (int)SNAK[i] <= 90)
        {
            c++;
        }
        i++;
    }
    cout << c << "\n\n";
    return;
}

void zd4()
{
    string SNAK{ "SSaSaS" };
    char c{ 'a' };
    int i{ 0 };
    while (i != SNAK.length() - 1)
    {
        if (SNAK[i] == 'a')
        {
            SNAK.insert(SNAK.begin() + i + 1, 'a');
            i++;
        }
        i++;
    }
    cout << SNAK;
    cout << "\n\n";
    return;
}

void zd5()
{
    string SNAK{ "SSaSSaS" }, SNAK0{ "SS" }, PROV{ "" };
    int i{ 0 }, c{ 0 };
    while (i < SNAK.length() - SNAK0.length())
    {
        PROV.push_back(SNAK[i]);
        if (PROV.length() == 3)
        {
            PROV.erase(PROV.begin());
        }
        i++;
        cout << PROV << "\n";
        if (PROV == SNAK0)
        {
            c++;
        }
    }
    cout << c;
    cout << "\n\n";
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