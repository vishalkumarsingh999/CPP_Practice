#include<iostream.h>
#include<conio.h>
struct date
{int dd,mm,yyyy;
}x;
void main()
{clrscr();
 cout<<"dd mm yyyy";
 cin>>x.dd>>x.mm>>x.yyyy;
 cout<<""<<x.dd<<"/ "<<x.mm<<"/  "<<x.yyyy;
 getch();
 }
