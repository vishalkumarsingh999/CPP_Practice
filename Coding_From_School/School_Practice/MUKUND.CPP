#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float a,b,c,r1,r2,d;
char ch;
cout<<"\nEnter the values of a,b,c of";
cout<<" Quadratic equation ax^2+bx+c\n\n";
cin>>a;
cin>>b;
cin>>c;
if(!a)
cout<<"\nThe value of\'a'\ should be zero"
<<"\nHalted!!!!!";
else
{
d=b*b-4*a*c;
if(d>0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
cout<<"\nRoots are REAL and UNEQUAL";
cout<<"\nRoot 1="<<r1;
cout<<"\nRoot 2="<<r2;
}
else if(d==0)
{
r1=-b/(2*a);
cout<<"\nRoots are REAL and EQUAL";
cout<<"\nRoot is ";
}
else
cout<<"\nRoots are COMPLEX and IMAGINARY";
}
getch();
}