#include<iostream.h>
#include<math.h>
int main()
{
float area,rad,len,bre,a,b,c,s;
int ch;
cout<<"Area Menu"<<"\n";
cout<<"1.Circle"<<"\n";
cout<<"2.Rectangle"<<"\n";
cout<<"Enter your choice:";
cin>>ch;
cout<<"\n";
switch(ch)
{
case 1:cout<<"Enter the radius of the circle";
cin>>rad;
area=3.14*rad*rad;
cout<<"\n"<<"The area of circle is:"<<area<<"\n";
break;
case 2:<<"\n"<<"Enter the length and breadth of the rectangle:";
cin>>len>>bre;
area=len*bre;
cout<<"\n"<<"The area of rectangle is"<<area<<"\n";
break;
default:cout<<"wrong choice";
}
getch();
}
}
}
