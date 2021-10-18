#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
 float a,b;
 int ch;
 cout<<"enter the value of a and b:";
 cin>>a>>b;
 cout<<"enter the expression between them:";
 cout<<"\n1.+"<<"\n";
 cout<<"2.-"<<"\n";
 cout<<"3.*"<<"\n";
 cout<<"4./"<<"\n";
 cout<<"\n"<<"\n";
cin>>ch;
switch(ch)
{case 1:cout<<"the sum of both the numbers are:"<<a+b;
	break;
 case 2:
	 if(a>b)cout<<"the difference between them :"<<a-b;
	 else
	{cout<<"b-a";}
	break;
 case 3:cout<<"the product of both numbers is:"<<a*b;
	break;
 case 4:cout<<"a/b:"<<a/b;
	break;
 default:cout<<"you have entered wrong choice:";
 }
 getch();
 }

