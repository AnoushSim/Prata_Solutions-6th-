#include <iostream>

int main()
{
    int ch, s=0;;
    std::cin>>ch;
    while(ch!=0)
    {
        s+=ch;
        std::cout<<"The sum is "<<s<<std::endl;
        std::cin>>ch;
    }
  std::cout<<s;
    return 0;
}
