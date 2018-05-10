#include <iostream>
using namespace std;
int LYtoAU(int);
int main()
{
   cout<<"Enter the numbers of light year: ";
   int ly;
   cin>>ly;
   cout<<ly<<" light year =  "<<LYtoAU(ly)<< " astronomica units.";
    return 0;
}
int LYtoAU(int n)
{
    int k;
    k = n*63240;
    return k;
}
