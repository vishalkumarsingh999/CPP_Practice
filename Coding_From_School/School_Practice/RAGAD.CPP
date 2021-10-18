#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct Addr
{int houseno;
char area[26];
char city[26];
char state[26];
};
struct Emp
{int empno;
char name[26];
char desig[16];
Addr address;
float basic;
}worker;
Emp sales_emp[10];
void display(int a);
void enter(void);
void main()
{clrscr();
int eno,i; char ch;
enter();
do
{cout<<"\n"<<"Enter employee no.whose informtion" <<"is to be display:"<<"\n";
cin>>eno;
int flag =0;
for(i=0;i< 10 ,++i)