#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
void main()
{clrscr();
int fact=1,n;
cout<<"Enter N=";
cin>>n;
cout<<n;
while(n>0)
{fact=fact*n;
n--;
};
cout<<"!="<<fact;
getch();
}