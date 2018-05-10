#include <iostream>
#include <cstring>
#include <string>
int main()
{  
  int i=0;
   std::string name;
   std::cin>>name;
   while(name!="done")
   { 
    i++;
    std::cin>>name;
   }
   std::cout<<i;
    return 0;
}


//or the other result

#include <iostream>
#include <cstring>
#include <string>
int main()
{  
  int i=0;
   std::string name;
   getline(std::cin,name);
   while(name!="done")
   { 
    i++;
    std::cin>>name;
   }
   std::cout<<i;
    return 0;
}


