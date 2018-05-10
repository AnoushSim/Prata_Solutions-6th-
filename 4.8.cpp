#include <iostream>
#include <string>
struct Pizza 
{
    std::string name;
    int diameter;
    int weight;
};
int main()
{
    Pizza * p= new Pizza;
    std::cout<< "Please enter the diameter: ";
    std::cin>>p->diameter;
    std::cout<< "Please enter the name: ";
    getline(std::cin,p->name);
   std::cout<<"Your order is: name: "<<p->name<<", diameter: "<<p->diameter<<".";
    return 0;
}
