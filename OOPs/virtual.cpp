#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
class st1
{
 int x,y;
 char a[];
 public:
     void fun(int a,int b)
     { int x=a;
       int y=b;
       cout<<" fun: "<<x<<" "<<y<<endl;
     }

};
class st2
{
    int var2;
public:
    st2()
    {
        var2=2;
        cout<<"\n class construstor #2 "<<endl;
    }
};
class st3:public st1,private st2
{
    int var3;
public:
    st3()
    {
        var3=3;
         cout<<"\n class construstor #3 "<<endl;
    }
};
main()
{ st3 x;
  x.fun(4,5);
}
