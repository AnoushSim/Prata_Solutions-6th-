#include <iostream>
using namespace std;
int CtoF(int);
int main()
{
   cout<<"Please enter a Celsius value:";
   int c;
   cin>>c;
   cout<<c<<" degrees Celsius is "<<CtoF(c)<< " degrees Farenheit";
    return 0;
}
int CtoF(int n)
{
    int k;
    k = n*9/5 + 32;
    return k;
}
