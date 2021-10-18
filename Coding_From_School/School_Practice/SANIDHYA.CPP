#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{
float a,b,c,r1,r2,d;
cout<<"enter 3 numbersa,b,c";
cin>>a>>b>>c;
if(!a)
cout<<"value ofa should not be 0";
else
{
d=b*b-4*a*c;
if(d>0)
{
r1=(-b+sqrt(d))/2*a;
r2=(-b-sqrt(d))/2*a;
cout<<"Roots are real and unequal"<<"\n";
cout<<"Roots are"<<r1<<"\n"<<r2;
}
else if(d==0)
{
r1=-b/2*a;
cout<<"Roots are real and equal";
cout<<"root are"<<r1;
}
else
cout<<"roots are complex and imaginary";
getch();
}}


