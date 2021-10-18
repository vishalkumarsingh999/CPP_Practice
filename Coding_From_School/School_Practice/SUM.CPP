#include<iostream.h>
#include<conio.h>
int sum(int n1, int n2)
{
int s=n1+n2;
return s;
}
void main()
{
clrscr();
cout<<"2 no.";
int a,b;
cin>>a>>b;
int ss=sum(a,b);
cout<<ss;
getch();
}