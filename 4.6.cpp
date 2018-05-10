#include <iostream>
struct CandyBar
{
    char name[20];
    float weight;
    int calories;
};
int main()
{
   CandyBar Cb[3]={{"Snickers", 0.2,387},{"Kit-Kat", 0.2,325},{"Twix", 0.2,451}};
   
   std::cout<<"Hera are my candies "<<Cb[0].name<<","<<Cb[1].name<<","<<Cb[2].name<<".";
    return 0;
}
