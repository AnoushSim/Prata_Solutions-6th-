#include <iostream>
struct Pizza 
{
    char name[20];
    int diameter;
    int weight;
};
int main()
{
    Pizza p;
    std::cout<< "Please enter the parameters: ";
    std::cin.getline(p.name,20);
    std::cin>>p.diameter;
    std::cin>>p.weight;
   std::cout<<"Your order is:name: "<<p.name<<" , diameter: "<<p.diameter<<" ,weight: "<<p.weight;
    return 0;
}
