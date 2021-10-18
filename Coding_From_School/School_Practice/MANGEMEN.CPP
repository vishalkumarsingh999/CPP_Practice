#include<iostream.h>
#include<conio.h>
struct Date
{int dd,mm,yyyy;};
struct Student
{int Roll;
char Name[20];
Date DOB;
}x[100];
void main()
{
clrscr();
for(int i=0;i<50;i++)
{
cout<<"\nEnter the Roll Number:";
cin>>x[i].Roll;
cout<<"\nEnter the Name of Student:";
cin>>x[i].Name;
cout<<"\nEnter the DOB:\n";
cin>>x[i].DOB.dd;
cin>>x[i].DOB.mm;
cin>>x[i].DOB.yyyy;
clrscr;
cout<<"\nRoll Number:"<<x[i].Roll;
cout<<"\nName:"<<x[i].Name;
cout<<"\nDOB:"<<x[i].DOB.dd<<"-"<<x[i].DOB.mm<<"-"<<x[i].DOB.yyyy;
}
}