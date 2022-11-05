#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    cout << "Ten program liczy sumę, różnicę, oraz iloczy i iloraz podanych dwóch liczb. Liczba zmienno przecinkowa powinna musi być z kropką!" << endl;

    float  x, y;
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "Podaj x: " << endl;
    cin >> x;
    cout << "Podaj y: " << endl;
    cin >> y;

    cout << "Suma = " << x + y  << endl << "Różnica = " << x - y << endl <<"Iloczyn = " << x * y << endl << "Iloraz = " << x / y ;








    return 0;
}
