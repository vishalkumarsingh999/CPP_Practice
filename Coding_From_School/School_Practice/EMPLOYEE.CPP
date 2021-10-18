//Program to store information of 10 employees and to display information of an employee depending upon the employee no given.
#include<iostream.h>
#include<stdio.h>
struct addr
{  int houseno;
   char area[26];
char city[26];
char state[26];
};
struct emp
{  int empno;
 char name[26];
char desig[26]
addr address ;   // another structure
float basic ;
} worker;
emp sales_emp[10];   //creates array of structures ofemp type
void display(int a);
void enter(void);    //prototypes declared
int main()
{
int eno,i; char ch;
enter();               //to read the information into array
do
{
   cout<<"\n"<<" enter employee no. whose information"
   <<"is to be displayed:"<<"\n";
cin>>eno;
//loop to find the given employe no.
int flag=0;
for(i=0;i<10;++i)
{
if(sales_emp[i].empno==eno) //if found then
{
display(i); flag=1; break;}
}
 if (!flag)
{
cout<<"\n"<<"sorry!no such employee exits."<<"\n" ;
}
cout<<"\n"<< "display more?(y/n).."<<"\n";
cin>>ch ;
}while(ch=='y');
return 0;
}
