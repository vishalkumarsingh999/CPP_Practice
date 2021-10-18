#include<iostream.h>
#include<conio.h>
int main()
{clrscr();
int ch,len,bre,rad,area;
cout<<"area menu"<<"\n";
cout<<"1.circle"<<"\n";
cout<<"2.ractangle"<<"\n";
cout<<"enter your choice:";
cin>>ch;
cout<<"\n";
switch(ch)
{
case 1:cout<<"enter radius of circle:";
cin>>rad;
area=3.14*rad*rad;
cout<<"\n"<<"the area of circle is"<<area<<"\n";
break;
case 2:cout<<"enter length and breadth of ractangle:";
cin>>len>>bre;
area=len*bre;
cout<<"\n"<<"the area of ractangle:"<<area;
break;
default:cout<<"wrong choice!!!!!!";
break;
}
return 0 ;
getch();
}
