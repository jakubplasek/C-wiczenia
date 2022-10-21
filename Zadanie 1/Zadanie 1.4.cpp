#include <iostream>

using namespace std;

int a, b, c, m;

int main()
{
 cout << "Write 3 numbers divided by space, so I will show you the biggest one: ";
 cin>>a>>b>>c;
 m=a;
 if (b>m) m=b;
 if (c>m) m=c;
 cout<<"The biggest number is " <<m;

return 0;
}

