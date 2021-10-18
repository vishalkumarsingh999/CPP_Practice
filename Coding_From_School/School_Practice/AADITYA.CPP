#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int a,b,c;
float r1 , r2, D;
cout<<"enter value of a,b,c :" ;
cin>> a>>b>>c;
D=b*b-4*a*c;
if(D>0)
{
r1=(-b+sqrt(D))/2*a;
r2=(-b-sqrt(D))/2*a;
cout<<"roots are unequaland real and roots are"<<r1<<" "<<r2;
}
else if

}