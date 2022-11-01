//Ciąg 1+2+3.....n
#include <iostream>
using namespace std;
int main()
{
int i,n,sum;
sum =0;
cout<<"Podaj liczbe n, a obliczę dla ciebie ciąg n=";
cin>> n;
for(i=1;i<=n;i++)
{
    sum=sum +i;
}
cout<<"Ciąg n wynosi: "<< sum;
return 0;
}