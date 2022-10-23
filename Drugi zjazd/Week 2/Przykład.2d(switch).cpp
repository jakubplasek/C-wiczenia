#include <iostream>
using namespace std;
int main()

{ int day;
    cout << "Write a number of day of a week: " << endl;
    cin >> day;
    switch(day)

    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
    cout << "You wrote te wrong number! " << endl;
    }
return 0;
}