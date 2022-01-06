#include <iostream>
using namespace std;

int main()
    {
        int N{ 1983 };
        cout << "\n\nГод ";
        switch (((N - 1984) / 12) % 5)
        {
        case 0:
            cout << "зелёной(ого) ";
            break;
        case 1:
            cout << "красной(ого) ";
            break;
        case 2:
            cout << "жёлтой(ого) ";
            break;
        case 3:
            cout << "белой(ого) ";
            break;
        case 4:
            cout << "чёрной(ого) ";
            break;
        }
        switch ((N - 1984) % 12)
        {
        case 0:
            cout << "крысы";
            break;
        case 1:
            cout << "коровы";
            break;
        case 2:
            cout << "тигра";
            break;
        case 3:
            cout << "зайца";
            break;
        case 4:
            cout << "дракона";
            break;
        case 5:
            cout << "змеи";
            break;
        case 6:
            cout << "лошади";
            break;
        case 7:
            cout << "овцы";
            break;
        case 8:
            cout << "обезьяны";
            break;
        case 9:
            cout << "курицы";
            break;
        case 10:
            cout << "собаки";
            break;
        case 11:
            cout << "свиньи";
            break;
        }
    }