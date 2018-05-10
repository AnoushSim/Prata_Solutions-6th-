#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter your height in feet and inches and your weight in pounds: "<<endl;
    int feet,inches,pounds;
    cout<<"Your height in feet:" ; 
    cin>>feet; 
    cout<<"Your height in inches:";
    cin>>inches; 
    cout<<"Your weight in pounds:";
    cin>>pounds; 
    const double ItoM=0.0254;
    const int F=12;
    int ftoi= F*feet+inches;
    double itom=ItoM*ftoi;
    const double PtoK=2.2;
    double ptok=pounds/PtoK;
    double BMI=ptok/(itom*itom);
    cout<<BMI<<endl;
     return 0;
}
