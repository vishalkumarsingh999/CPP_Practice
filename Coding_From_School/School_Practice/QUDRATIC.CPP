#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
long float n,r,x=1,y=1;
cout<<"enter three number the value of N and C from NpR";

cin>>n>>r;
while(n>0)
{
 x=x*n;
 n--; }
 do
 {
 y=y*r;
 r--;  }
 while(r>0) ;
 cout<<x/y;
 getch();
 }


