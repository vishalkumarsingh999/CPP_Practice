#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
class st1
{
 int x,y;
 char a[];
 public:
     st1()
     {
         cout<<"\n in base class \n";
     }
     void fun(int a,int b)
     { int x=a;
       int y=b;
       cout<<" fun: "<<x<<" "<<y<<endl;
     }
  ~st1()
  {
      cout<<"\n getting out of base class \n";
  }
};
class st2:virtual public st1
{
    int var2;
public:
    st2()
    {
        var2=2;
        cout<<"\n class construstor #2 "<<endl;
    }
    ~st2()
  {
      cout<<"\n getting out of st2 class \n";
  }
};
class st3:virtual public st1
{
    int var3;
public:
    st3()
    {
        var3=3;
         cout<<"\n class construstor #3 "<<endl;
    }
    ~st3()
  {
      cout<<"\n getting out of st3 class \n";
  }
};
class derive: public st2, public st3
{public:
    derive()
    {
        cout<<"\n in derive class \n"<<endl;
    }
};
main()
{ derive x;
  x.fun(4,5);
}
