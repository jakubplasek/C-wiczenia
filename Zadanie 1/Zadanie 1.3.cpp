#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Podaj liczbę całkowitą, a sprawdzę czy jest parzysta, nieparzysta, bądź = 0 \n ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "Podana liczba jest liczbą całkowitą i parzystą " << number << endl;
    }

    else if (number % 2 > 0)
    {
        cout << "Podana liczba jest liczbą nieparzystą " << number << endl;
    }

    else if (number == 0)

    {
        cout << "Podana liczba to po prostu 0 " << number << endl;
    }

    return 0;
}