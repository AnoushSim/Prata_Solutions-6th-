#include <iostream>
struct CandyBar
{
    char name[20];
    float weight;
    int calories;
};
int main()
{
    CandyBar snack={"Mocho Munch", 3.2,350};
    std::cout<<snack.name<<std::endl;
     std::cout<<snack.weight<<std::endl; 
     std::cout<<snack.calories<<std::endl;
    return 0;
}
