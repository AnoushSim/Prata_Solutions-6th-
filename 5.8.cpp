#include <iostream>
#include <cstring>
const int n=30;
int main()
{  
  int i=0;
   char name[n];
   std::cin>>name;
   while(strcmp(name,"done"))
   { 
    i++;
    std::cin>>name;
   }
   std::cout<<i;
    return 0;
}
