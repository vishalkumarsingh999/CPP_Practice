#include<iostream.h>
#include<conio.h>
struct date
{int dd,mm,yyyy;};
struct student
{int roll;
 char name[100];
 date dob;
 }X[100];
 void main()
 {clrscr();
  for( int i=0;i<50;i++)
  {
  cout<<"enter the roll no";
  cin>>X[i].roll;
  cout<<"enter the name";
   cin>>X[i].name;
   cout<<"enter the date dd";
   cin>>X[i].dob.dd;
   cout<<"enter the month mm";
   cin>>X[i].dob.mm;
   cout<<"enter the year yyyy";
   cin>>X[i].dob.yyyy;
    }
   clrscr();
   cout<<"------output-------";
   cout<<"/n--------------";

   for( i=0;i<50;i++)
   {cout<<X[i].roll;
    cout<<X[i].name;
    cout<<X[i].dob.dd;
    cout<<X[i].dob.mm;
    cout<<X[i].dob.yyyy;
    }
    getch();
    }