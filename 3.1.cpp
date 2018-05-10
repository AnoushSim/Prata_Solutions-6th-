#include <iostream>
using namespace std;
int main()
{   cout<<"Enter your height in inches_";
    int inches;
    cin>> inches;
    const int feet= 12;
    int a,m;
    a=inches/feet;
    m=inches%feet;
    cout<<"Your height in feets and inches is: "<<a<<" feet "<<m<<" inches!";
    return 0;
}
