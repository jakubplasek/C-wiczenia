#include <iostream>
using namespace std;
int main()

{int miesiac;

    cout << "Podaj liczbe od 1 do 12, ktora reprezentowac bedzie miesiac: " << endl;
    cin >> miesiac;

      
    switch(miesiac)

    {
    case 1:
        cout << "Styczen " ;
        break;
    case 2:
        cout << "Luty ";
        break;
    case 3:
        cout << "Marzec ";
        break;
    case 4:
        cout << "Kwiecien ";
        break;
    case 5:
        cout << "May ";
        break;
    case 6:
        cout << "Czerwiec ";
        break;
    case 7:
        cout << "Lipiec ";
        break;
    case 8:
        cout << "Sierpien ";
        break;
    case 9:
        cout << "Wrzesen ";
        break;
    case 10:
        cout << "Pazdziernik ";
        break;
    case 11:
        cout << "Listopad ";
        break;
    case 12:
        cout << "Grudzien ";
        break;
    default:
    cout << "Miesiac odpowiedni dla tego numeru, nie istnieje " << endl;
    }
   if ( miesiac == 1 || miesiac ==  3 || miesiac ==  5 || miesiac ==  7 || miesiac ==  9 || miesiac ==  10 || miesiac == 12 ) {
        cout << endl << "Ten miesiac ma 31 dni " << endl;
        }
        else if( miesiac == 4 || miesiac ==  6 || miesiac == 8 || miesiac == 10 ) {
        cout << endl << "Ten miesiac ma 30 dni " << endl;
        }
        else if ( miesiac == 2) {
        cout << endl << "Ten miesiac ma 28 dni " << endl;
        }
    if (miesiac >= 4 && miesiac <= 9 ) {
        cout << "Ten miesiac powinien byc sloneczny " << endl; 
        }    
    else (miesiac <= 3 && miesiac >= 10); {
        cout << "Ten miesiac bedzie raczej pochmurny " << endl;
        }


    
return 0;
}
