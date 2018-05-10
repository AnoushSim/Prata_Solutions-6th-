#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the world's population: ";
    long pop;
    cin>>pop;
    cout<<"Enter the population of Indonesia: ";
    long ind_pop;
    cin>>ind_pop;
    double x;
    double n=100.0;
    x=n*ind_pop/pop;
    cout<<"The population of Indonesia is "<<x<<"% of the world population.";
    return 0;
}
