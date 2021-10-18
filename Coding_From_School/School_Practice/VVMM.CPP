#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n;
float fac,sum=0;
cout<<"\n Enter the no of term :-";
cin>>n;
for(i=1;i<=n;i++)
{
fac=1;
for(j=1;j<=i;j++)
fac*=j;
sum+=i/fac;
}
cout<<"\n The sum is :-"<<sum;
getch();
}
