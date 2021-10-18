#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
void swap(int&,int&);  //Function prototype accepting two reference values.
int a,b;
a=4;
b=40;
cout<<"\n The original values are:\n";
cout<<"a="<<a<<" "<<"b="<<b;
swap(a,b);
getch();
}
void swap (int&x,int&y)
{
int k;
k=x;
x=y;
y=k;
cout<<"\n The swapped values are:\n";
cout<<"a="<<x<<",b="<<y<<"\n";
}
