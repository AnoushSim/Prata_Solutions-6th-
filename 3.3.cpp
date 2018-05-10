#include <iostream>
using namespace std;
int main()
{
   cout<<"Enter latitude in degrees, minutes, and seconds:"<< endl;
   int degree, minute, second;
   cout<<"First enter the degrees:";
   cin>>degree;
   cout<<"Next, enter the minutes of arc:";
   cin>>minute;
   cout<<"Finally, enter the seconds of arc:";
   cin>>second;
   const double StoD=0.0003;
   const double MtoD=0.0167;
   double dms=degree+ MtoD * minute + StoD * second;
   cout<<degree<<"degrees, "<<minute<<" minutes, "<<second<<" seconds = "<<dms<<"degrees"<<endl;
    return 0;
}
