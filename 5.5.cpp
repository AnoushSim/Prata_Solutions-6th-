#include <iostream>
#include <string>
const int n=12;
int main()
{   
    int i,s;
    int sale[n];
    std::string months[n] = {"January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November",
        "December" };
    
    for(i=0;i<n;i++)
    {
       std::cout<<"Enter the number of books in "<<months[i]<<": ";
       std::cin>>sale[i];
    }
   
    for(i=0;i<n;i++)
    s+=sale[i];
    std::cout<<"You sold "<< s<<" books.";
    return 0;
}
