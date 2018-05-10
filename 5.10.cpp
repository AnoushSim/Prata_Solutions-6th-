#include <iostream>
int main()
{  using namespace std;
  cout<<"Enter the number of rows: ";
  int count;
  cin>>count;
   for( int i=0;i<count;i++)
   {
     for(int j = 0; j < count; j++)
        {
            if(count - j > i+1 )
                cout << ".";
            else
                cout << "*";
        }
        cout << endl;
   }
return 0;
}
