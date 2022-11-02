//Write the program which will creat squares and triangle and so on
#include <iostream>
using namespace std;
int main() {
    int a, b;
    //A
    cout << "Write number a for width: " << endl;
    cin >> a;
    cout << "Write number b for height " << endl;
    cin >> b;
    cout << "Width a == " << a << endl << "Height b == " << b << endl;
    cout <<endl;

    //B
    cout << "Row of equal length = " << a << endl;
    for (int width=1 ; width<=a ; width++)
    {
        cout << "*" << " ";
    }
    cout << endl << endl;


    //C
    cout << "Column of equal length = " << b << endl;
    for (int height=1; height<=b ; height++)
    {
        cout << "*"<<" "<< endl;
    }
    cout << endl << endl;

    //D
    cout << "Rectangle with dimensions a by b" << endl;
    for (int width=1; width<=b; width++) {
        for (int height = 1; height <= a; height++) {
            cout << "* ";
        }
    cout << endl;

    }
    cout << endl << endl;

    //E
    cout << "Perimeter of figure a on b" << endl;
    for (int width=1; width<=b; width++) {
        for (int height = 1; height <= a; height++) {
            if (width==1 || width==b || height==1 || height==a)
                cout << "* ";
            else cout << "  ";
        }
        cout << endl;

    }
    cout << endl << endl;

    //F
    cout << "Isosceles triangle with side length a = " << a << endl;
    for (int i=1; i<=a; i++){
        for (int j=1;j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl << endl;

    //G
    cout << "Mirror reflect of previous triangle with side length a = " << a << endl;
    for (int i=a; i>=1; i--){
        for(int k=a-i;k>0;k--){
            cout << " ";
        }
        for(int j=i;j>0;j--){
            cout << "*";
        }
    cout << endl;
    }


    return 0;
}





