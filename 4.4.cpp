#include <iostream>
#include <string>


int main()
{  
    std::string name;
    std::string lname;
    std::string fname;
    std::cout<<"Enter Your First name: ";
    getline(std::cin,name);
    std::cout<<"Enter Your First name: ";
    getline(std::cin,lname);
    fname=lname+" , "+name;
    std::cout<<"Here is all info in one string: "<< fname<<". ";
    return 0;
}
