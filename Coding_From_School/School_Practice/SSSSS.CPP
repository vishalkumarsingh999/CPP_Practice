#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int i,n;
char a[100][50];
clrscr();
cout<<"Enter the name of students:-";
cin>>n;
cout<<"Name of "<<n<< " of students:-";
for(i=0;i<n;i++)
{

gets(a[i]);

}

cout<<"\nThe name is:-";
for(i=0;i<n;i++)

puts(a[i]);

getch();
}

