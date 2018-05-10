#include <iostream>
#include <string>
const int n=12;
int main()
{  int i,j,s=0;
   std::string months[n]= { "January", "February", "March", 
   "April", "May", "June",
        "July", "August", "September", 
        "October", "November",  "December" }; 
   int  books_of_eachmonth[5][n];
   for( i = 0; i <5; i++)
    {
    std::cout << "Year " << y << ": " << std::endl;
    for( j = 0; j < n; j++)
      {
            std::cout << "Enter sale for " << months[m] << ": ";
            std::cin >> books_of_eachmonth[y][m];
        }
    }
   for(i=0;i<n;i++)
   { for( j = 0; j < n; j++)
    s+=books_of_eachmonth[i][n];
    std::cout<<"You sold "<< s<<" books.";}
    return 0;
}
