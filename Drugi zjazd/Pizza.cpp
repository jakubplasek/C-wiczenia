#include <iostream>
using namespace std;
int guest;
int pizza;
int main()
{
cout << "How many guests you have?: ";
cin >> guest;

cout << "How many slices of pizza you have?: ";
cin >> pizza;

if (pizza < guest )
{
cout << "Dive pizza on smaller pieces and give me number again: ";
cin >> pizza;
}


cout << "Number of slices for each guest: " << pizza/guest ;

 
cout << endl << "For Host: " << pizza % guest;

    return 0;
}