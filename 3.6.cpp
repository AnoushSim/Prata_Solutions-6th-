#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the distance in kilometers:";
    double km;
    cin>>km;
    cout<<"Enter the amount of petrol in liters:";
    double l;
    cin>>l;
    double x_1km;
    x_1km=l/km;
    const double n=100.0;
    double x_100km=n*x_1km;
    cout<<"You used "<<x_100km<<" liters petrol per 100 kilometers.";
    return 0;
}
