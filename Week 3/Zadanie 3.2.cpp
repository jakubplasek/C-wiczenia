#include <iostream>
using namespace std;
int main() {

    char to;
    cout << "Find a letter which stops this program: " << endl;
    cin >> to;
   do {
       cout << to << endl;
       cin >> to;
   } while(to != 't');

}
