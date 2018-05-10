#include <iostream>
#include <cstring>

int main()
{  
    const int n=20;
    char name[n];
    char lname[n];
    char fname[2*n];
    std::cout<<"Enter Your Firts name: ";
    std::cin.getline(name,n);
    std::cout<<"Enter Your Firts name: ";
    std::cin.getline(lname,n);
    strcpy(fname, lname);
    strcat(fname, ", ");
    strcat(fname, name);
    
    std::cout << "Here's the information in a single string: ";
    std::cout << fname << std::endl;
    return 0;
}
