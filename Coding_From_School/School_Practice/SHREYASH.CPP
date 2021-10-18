#include<iostream.h>
#include<conio.h>
struct date
{int d,m,y;};
struct employee
{
int empno;
char empname[20];
char empdeg[15];
double empsal;
date empdoj, empdor;
};
void main()
{
clrscr();
employee emp1;
cout<<"Enter:/n";
cout<<"1-employee no:";
cin>>emp1.empno;
cout<<"2-Employee name:";
cin>>emp1.empname;
cout<<"3-Employee deg:";
cin>>emp1.empdeg;
cout<<"4-Employee Salary:";
cin>>emp1.empsal;
cout<<"5-Employee DOJ:";
cin>>emp1.empdoj.d>>emp1.empdoj.m>>emp1.dojx.y;
cout<<"6-Employee DOR:";
cin>>emp1.empdor.d>>emp1.empdor.m>>emp1.dor.y;
clrscr();
cout<<"--------------------OUTPUT-------------";
cout<<"\n";
cout<<"employee no.:"<<empl.empno;
cout<<"\n;
cout<<"employee name:"<<empl.empname;