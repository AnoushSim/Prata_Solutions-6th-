#include <iostream>
#include <string>
int main()
{
    
   std::string str1,str2;
     std::cout<<"Enter Your name:\n";
    std::getline(std::cin,str1);
     std::cout<<"Enter Your favorite dessert:\n";
   std::getline(std::cin,str2);
     std::cout<<"I have some delicious "<<str2<<" for you "<< str1;
    return 0;
}
