			 #include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{
clrscr();
float area,radius,l,b,a,c,s;
int ch;
cout<<"area menu"<<"\n";
cout<<"1.circle"<<"\n";
cout<<"2.rectangle"<<"\n";
cout<<"3.triangle"<<"\n";
cout<<"enter your choice";
cin>>ch;
switch(ch)
{
case 1:cout<<"enter rad. circle";
       cin>>radius;
       area=3.14*radius*radius;
       cout<<area;
       break;
case 2:cout<<"enter l and b of rect.";
       cin>>l>>b;
       area=l*b;
       cout<<area;
       break;
case 3:cout<<"enter 3 side";
       cin>>a>>b>>c;
       s=(a+b+c)/2;
       area=sqrt(s*(s-a)*(s-b)*(s-c));
       cout<<area;
       break;
default:cout<<"wrong choice";
       break;
}
getch();
}