#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the automobile gasoline consumption figure in European style:";
    double eur_cons;
    cin>>eur_cons;
    const double MtoKm=1.6;
    const double GtoL=0.2584;
    const double km_100=62.14;
    
    double x;
    x=(km_100/(eur_cons*GtoL))*(GtoL/MtoKm);
    cout<<"The automobile gasoline consumption figure in the U.S. Style is "<<x<<" miles per gallon.";
    

    return 0;
}
