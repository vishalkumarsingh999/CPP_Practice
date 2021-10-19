#include<iostream>
#include<conio.h>

using namespace std;
class outer
{
   int a;
   class inner
        { int b;
          public:
          int c;
          inner()
            {  b=5;
               c=10; }

          void prn()
          {
            cout<<"\n"<<"inner::prn()"<<endl;
            cout<<b<<' '<<c<<endl;}
            };
    inner ob1;
    public :
     inner ob2;
     void second(void);
     outer()
     {a=25;}
};
void outer::second(void)
     { cout<<endl<<"outer::second()"<<endl;
       cout<<" "<<ob2.c<<endl;
       cout<<"A="<<a<<endl;
     }
main()
{ outer x;
  x.ob2.prn();
  x.second();
}
