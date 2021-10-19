#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class resort
{
     int Rno,days;
     char name[40];
     float charge;

     float computer(void)
     {float tot;
      tot=charge*days;
      if(tot>11000)
        tot=tot*1.02;

      return tot;}

  public:
    void getinfo()
    { cout<<"customer name :- "<<endl;
      cin.getline(name,40);
      cout<<endl<<"Room no. :- "<<endl;
      cin>>Rno;
      cout<<endl<<"Days :- "<<endl;
      cin>>days;
      cout<<endl<<"Charge :- "<<endl;
      cin>>charge;

    }
    void dispinfo()
    { cout<<"customer name :- "<<name<<endl;
      cout<<"Room no. :- "<<Rno<<endl;
      cout<<"Days :- "<<days<<endl;
      cout<<"Charge :- "<<charge<<endl;
      cout<<"Amaount :- "<<computer()<<endl;
    }

};

main ()
{resort x;
 x.getinfo();
system("cls");
 x.dispinfo();
}
