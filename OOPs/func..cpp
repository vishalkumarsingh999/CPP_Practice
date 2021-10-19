#include<iostream>
#include<conio.h>
using namespace std;
void add (int&,int&);
int main()
{
 int x=1,y=2;

 cout<<x<<y;
 add(x,y);


getch();
return 0;
}


    void add(int& a,int& b)
     { int x;
       x=a;
       a=b;
       b=x;



         cout<<"\n "<<a<<b;


     }
