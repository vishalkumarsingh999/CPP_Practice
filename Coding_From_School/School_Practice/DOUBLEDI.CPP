#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
char a[90][40];
int b,i;
clrscr();
cout<<"\n How many array you want to enter : ";
cin>>b;
cout<<"\n Enter the "<<b<<" String : \n";
for(i=0;i<b;i++)
gets(a[i]);
cout<<"\n All entered string : \n";
for (i=0;i<b;i++)
puts(a[i]);
getch();
}
