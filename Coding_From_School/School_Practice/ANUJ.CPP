#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n;
long int fac;
float sum=0.0;
cout<<"\n Enter the no of term up to which you want to add the series :-";
cin>>n;
if(n>0)
{
for(i=1;i<=n;i++)
{
fac=1;
for(j=1;j<=i;j++)
{
fac*=j;
}
sum+=i/fac;
}
cout<<"\n The sum of series is :-"<<sum;
}
else
cout<<"\n Invalid no of term";
getch();
}