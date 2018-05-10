#include <iostream>
#include <string>
const int n=12;
int main()
{  int j,s=0;
   std::string months[n]= { "January", "February", "March", 
   "April", "May", "June",
        "July", "August", "September", 
        "October", "November",  "December" }; 
   int  books_of_eachmonth[1][n];
  
    for( j = 0; j < n; j++)
      {
            std::cout << "Enter sale for " << months[j] << ": ";
            std::cin >> books_of_eachmonthy[1][j];
        }
     for( j = 0; j < n; j++)
     {
        s+=books_of_eachmonth[1][j];
    std::cout<<"You sold "<< s<<" books.";
     }
    return 0;
}
