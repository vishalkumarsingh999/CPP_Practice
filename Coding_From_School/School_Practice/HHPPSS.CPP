#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,j,i;
long int fact;
float sum=0.0;
cout<<"\n Sum of series:-";
cin>>n;
if(n>0)
{
for(i=1;i<=n;i++)
{ fact=1;
for(j=1;j<=i;j++)
fact*=j;
sum+=i/(float)fact;
}
cout<<"\n Sum of series is:-"<<sum;

}
getch();
}


