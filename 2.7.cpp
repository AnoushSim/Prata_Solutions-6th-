#include <iostream>
using namespace std;
void time_(int, int);
int main()
{
   cout<<"Enter the number of hours: ";
   int hours;
   cin>>hours;
    cout<<"Enter the number of minutes: ";
   int minutes;
   cin>>minutes;
   time_(hours,minutes);
    return 0;
}
void time_(int h, int m)
{
    cout<<"Time: "<<h<<":"<<m;
}
