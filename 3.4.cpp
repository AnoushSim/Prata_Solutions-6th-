#include <iostream>
using namespace std;
int main()
{
   cout<<"enter th number of seconds: ";
   long second;
   cin>>second;
   const int StoD = 86400;
   const int StoH=3600;
   const int StoM=60;
   int d=second/StoD;
   int h1= second%StoD;
   int h=h1/StoH;
   int m1=h1%StoH;
   int m=m1/StoM;
   int s=m1%StoM;
   cout<<second<<" seconds= "<<d<<" days, "<<h<<" hours, "<<m<<" minutes, "<<s<<" seconds.";
   return 0;
}
