#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int ch;
float ar,l,b,r,s,a,c;
cout<<"\t!!!!!!Area Calculator!!!!!!";
cout<<"\n";
cout<<"\n\tMAIN MENU";
cout<<"\n";
cout<<"OPTIONS";
cout<<"\n1.Square";
cout<<"\n2.Rectangle";
cout<<"\n3.Circle";
cout<<"\n4.Triangle";
cout<<"\nEnter the choice(1-4):";
cin>>ch;
switch(ch)
{
case 1:
cout<<"You selected square";
cout<<"\nEnter the side:";
cin>>l;
ar=l*l;
cout<<"\nThe area is:"<<ar;
break;
case 2:
cout<<"You selected rectangle";
cout<<"\nEnter the length:";
cin>>l;
cout<<"\nEnter the breadth:";
cin>>b;
ar=l*b;
cout<<"\nThe area is:"<<ar;
break;
case 3:
cout<<"You selected circle";
cout<<"\nEnter the radius:";
cin>>r;
ar=r*r*22/7;
cout<<"\nThe area is:"<<ar;
break;
case 4:
cout<<"\nYou selected triangle";
cout<<"\nEnter three side a, b and c of the triangle:";
cout<<"\n";
cin>>a;
cout<<"\n";
cin>>b;
cout<<"\n";
cin>>c;
s=a+b+c/2;
ar=sqrt(s*s-a*s-b*s-c);
cout<<"\nArea is "<<ar;
break;
default:"\n!!!!!!!!WRONG CHOICE!!!!!!!!";
}
getch();
}