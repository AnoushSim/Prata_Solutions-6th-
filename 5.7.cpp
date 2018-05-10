#include <iostream>
#include <string>
struct Cars
{
std::string maker;
int year;
};
int main()
{
  std::cout<<"How many cars are in catalog: ";
  int count;
  std::cin>>count;
  Cars *pc=new Cars[count];
 for(int i = 1; i <=count; i++)
    {
  std::cout << "Car #" << i << ":" << std::endl;
  std::cout << "Please enter the maker: ";
  getline(std::cin, pc[i].maker);
  std::cout << "Please enter the year made: ";
  std::cin >>pc[i].year;
  std::cin.get();
    }
  std::cout<<"Here is your collection: "<<std::endl;
  for(int i = 1; i <=count; i++)
   std::cout<<pc[i].year << " " << pc[i].maker << std::endl;
   
   delete [] pc;
   return 0;
}
