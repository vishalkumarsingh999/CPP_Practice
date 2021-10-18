#include <iostream.h>
#include <conio.h>

void main()
{
 clrscr();
 float cube(float);
 float n,r;
 cout<<"Enter any Number:";
 cin>>n;
 r=cube(n);
 cout<<"\n"<<"The Cube of "<<n<<"is "<<r;
 getch();
 }
 float cube(float x)
 {
 float y;
 y=x*x*x;
 return y;
5
 }