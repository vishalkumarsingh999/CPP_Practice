#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,n,sum=0,fact;
clrscr();
cout<<"\nEnter the sum of series:-";
cin>>n;
if(n>=0)
{
for(i=0;i<=n;i++)
{
fact=1;
for(j=1;j<=n;j++)
fact*=j;
sum+=i/(float)fact;
}
cout<<"\nSum of the series is:-"<<sum;

else
cout<<"\nInvalide term";
}
getch();
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                