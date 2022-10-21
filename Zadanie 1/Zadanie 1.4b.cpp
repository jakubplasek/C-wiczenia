#include <iostream>

using namespace std;

int a, b, c;
 int main()
 {
     cout << "Write 3 numbers divided by space, so I will show you the biggest one ";
     cin >>a>>b>>c;
     if ((a>=b) && (a>=c))
     cout << "The biggest number is "<< a;
else if ((b>=a) && (b>=c))
     cout << "The biggest number is "<< b;
else if ((c>=a) && (c>=b))
     cout << "The biggest number is "<< c;
    
return 0;
 }