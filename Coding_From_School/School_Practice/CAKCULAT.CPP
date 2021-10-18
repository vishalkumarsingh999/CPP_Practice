#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n1,n2,add,sub,ch;
cout<<"enter the number";
cin>>n1>>n2;
add=n1+n2;
//mul=n1*n2;
//div=n1/n2;
sub=n1-n2;
//remainder=n1%n2;
cout<<"1. add\n2.mul\n3.division\n4.subtraction";
cout<<"\nenter your choice :";
cin>>ch;
switch(ch)
{
case 1:cout<<"\n Addition="<<add;
       break;
case 2:cout<<"\n sub="<<sub;
       break;
case 3:cout<<"\n div="<<
default:cout<<"\n wrong choice";
}
getch();
}

