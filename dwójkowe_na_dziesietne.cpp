#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int bin2dec (string binarna)
{
    int dziesietna = strtol(binarna.c_str(), NULL, 2); //Konwertuje warto�� zapisan� w �a�cuchu znak�w w dowolnym
                                                       //systemie liczbowym do postaci liczby typu ca�kowitego.

    return dziesietna;
}

int main()
{
    string liczba;

    cout << "Podaj liczbe binarna:" << endl;
    cin >> liczba;
    cout << bin2dec(liczba) << endl;

    system ("pause >nul"); //odczekanie na wci�ni�cie dowolnego klawisza
    return 0;
}
