#include <iostream>
struct CandyBar
{
    char name[20];
    float weight;
    int calories;
};
int main()
{
   CandyBar * CB=new CandyBar [3];
    
        CB[0] = {"Mocha Munch", 2.3, 350};
        CB[1] = {"Snickers", 0.3, 400};
        CB[2] = {"Twix", 0.3,250};
    
    for(int i = 0; i < 3; ++i)
    {
        cout << "Name: " << CB[i].name << endl;
        cout << "Weight: " << CB[i].weight << endl;
        cout << "Calories: " <<CB[i].calories << endl;   
    }
    
    delete [] CB;
    
  
}
