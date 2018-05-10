#include <iostream>
#include <array>
const int n=101;
int main()
{   
    std::array<long double,n> factorial;
    int i;
    factorial[0]=factorial[1]=1.0;
    for(i=2;i<n;i++)
    factorial[i]=(long double)i*factorial[i-1];
    for(i=0;i<n;i++)
    std::cout<<i<<"!="<<factorial[i]<<std::endl;
 
    return 0;
}
