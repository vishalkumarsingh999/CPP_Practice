#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct date
{
 int dd,mm,yyyy;
};
struct Emp
{
 char name[50],desi[50];
 int sal
 date DOJ,DOR;
};
void main()
{
 clrscr();
 Emp;
 cout<<"Enter the following information:\n";
 cout<<"1-Emp Name : ";
 cin.getline(Emp.name,50);
 cout<<"\n2-Emp desi : ";
 cin.getline(Emp.desi,50);
 cout<<"\n3-Emp DOJ: ";
 cin>>Emp.DOJ.dd>>Emp.DOJ.mm>>Emp.DOJ.yyyy;
 cout<<"\n4-Emp DOR:";
 cin>>Emp.DOR.dd>>Emp.DOR.mm>>Emp.DOR.yyyy;

 cout<<"\n5-Emp sal : ";
 cin>>sal;
 clrscr();
 cout<<"----------OUTPUT-----------";
 cout<<"\n1-Name Of Emp : ";
 puts(Emp.name);
 cout<<"2-desi : ";
 cin>>(Emp.desi);
 cout<<"\n3- Date ofjoining:"<<Emp.DOJ.dd<<'-'<<Emp.DOJ.mm<<'-'<<Emp.DOJ.yyyy;
 cout<<"\n5-Date Of Retitrement : "<<Emp.DOR.dd<<'-'<<Emp.DOR.mm<<'-'<<Emp.DOR.yyyy;
 cout<<"\n5-Salary of Emp:';
 Cin>>Emp.sal;
 getch();
}