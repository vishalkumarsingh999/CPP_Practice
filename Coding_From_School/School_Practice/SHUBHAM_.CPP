#include<iostream.h>
#include<conio.h>
void convert_m(int x)
{
 cout<<"Enter any number in km : ";
 cin>>x;
 cout<<x<<" km = "<<x*1000<<" m";
}
void convert_cm(int x)
{
 cout<<"Enter any number in m : ";
 cin>>x;
 cout<<x<<" m = "<<x*100<<" cm";
}
void main()
{
 clrscr();
 int n,ch;
 cout<<"1)m to cm\n2)km to m";
 cout<<"\nEnter you want to evaluate (1/2): ";
 cin>>ch;
 if (ch==1) convert_cm(n);
 else convert_m(n);
 getch();
}
