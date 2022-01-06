#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n";
    int N{ 21 };
    switch (N)
    {
    case 10:
        cout << "Десять ";
        break;
    case 11:
        cout << "Одиннадцать ";
        break;
    case 12:
        cout << "Двенадцать ";
        break;
    case 13:
        cout << "Тринадцать ";
        break;
    case 14:
        cout << "Четырнадцать ";
        break;
    case 15:
        cout << "Пятнадцать ";
        break;
    case 16:
        cout << "Шестнадцать ";
        break;
    case 17:
        cout << "Семнадцать ";
        break;
    case 18:
        cout << "Восемнадцать ";
        break;
    case 19:
        cout << "Девятнадцать ";
        break;
    }
    switch ((int)floor(N / 10))
    {
    case 2:
        cout << "Двадцать ";
        break;
    case 3:
        cout << "Тридцать ";
        break;
    case 4:
        cout << "Сорок ";
        break;
    }
    if (N > 20)
    {
        switch (N % 10)
        {
        case 1:
            cout << "одно ";
            break;
        case 2:
            cout << "два ";
            break;
        case 3:
            cout << "три ";
            break;
        case 4:
            cout << "четыре ";
            break;
        case 5:
            cout << "пять ";
            break;
        case 6:
            cout << "шесть ";
            break;
        case 7:
            cout << "семь ";
            break;
        case 8:
            cout << "восемь ";
            break;
        case 9:
            cout << "девять ";
            break;
        }
    }
    if ((N <= 20) || ((N > 24) && (N <= 29)) || ((N > 34) && (N <= 39)) || (N == 30) || (N == 40))
    {
        cout << "учебных заданий";
    }
    if ((N == 21) || (N == 31) || (N == 41))
    {
        cout << "учебное задание";
    }
    if (((N > 21) && (N <= 24)) || ((N > 31) && (N <= 34)))
    {
        cout << "учебных задания";
    }
}