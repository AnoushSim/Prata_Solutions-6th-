#include <iostream>
#include <array>
int main()
{  std::array<double,3> Array;
   std::cout<<"Please enter the value: ";
   std::cin>>Array[0];
   std::cout<<"Please enter the value: ";
   std::cin>>Array[1];
   std::cout<<"Please enter the value: ";
   std::cin>>Array[2];
   double avg = (Array[0] + Array[1] + Array[2])/3.0;
   std::cout<<avg;

    return 0;
}
