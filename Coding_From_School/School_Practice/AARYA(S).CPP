#include<iostream.h>
#include<conio.h>
struct date
{ int dd,mm,yyyy;};
struct student
{
int roll;
char name[20];
date dob;
}
x[100];
void main()
{ clrscr();
for(int i=0; i<50; i++)
{cin>> x[i].roll;
cin>>x[i].dob.dd;
cin>>x[i].dob.mm;
cin>>x[i].dob.yyyy;
clrscr();
  }
}