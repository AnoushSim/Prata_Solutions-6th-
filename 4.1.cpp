#include <iostream>
using namespace std;
int main()
{    char name[20]="Betty Sue";
    char lastname[20]="Yewe";
    char b='B';
    int a=22;
    cout<<"What is your fist name? : "<<name<<endl;
    cout<<"what is yot last name? : "<<lastname<<endl;
    cout<<"What letter grade do you reserve? : "<<b<<endl;
    int i=b;
    i+=1;
    b=i;
    cout<<"What is your age?:  "<<a<<endl;
    cout<<"Name: "<<lastname<<" , "<<name<<"."<<endl;
    cout<<"Grade:"<<b<<endl;
    cout<<"Age: "<<a;
    return 0;
}
