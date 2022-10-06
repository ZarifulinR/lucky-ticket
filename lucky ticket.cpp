#include <iostream>

using namespace std;

void main()
{
    setlocale(LC_ALL, "");
    int nomer = 0;
    cout << "Введите номер билета: ";
    cin >> nomer;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    a = nomer % 10;
    b = (nomer / 10) % 10;
    c = (nomer / 100) % 10;
    d = (nomer / 1000) % 10;
    e = (nomer / 10000) % 10;
    f = (nomer / 100000) % 10;
    if (a + b + c == e + d + f)
        cout << "Билет счастливый" << endl;
    else
        cout << "Не счастливый билет" << endl;
}