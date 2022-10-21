#include <iostream>

using namespace std;

int main()
{

    int number;

      cout << "Podaj liczbę całkowitą\n";

    cin >> number;

    if (number > 0)
    { 
      cout << "To liczba dodatnia: "  << number << endl;
    }
    else if (number = 0)
    {
      cout << "Ta liczba to po prostu: 0 "  << number << endl;
    }
    else if (number > 0)
    {
        cout << "Ta Liczba jest ujemna: "  << number << endl;
    }
    return 0;
    
}