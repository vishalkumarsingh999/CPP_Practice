#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
float a,b,s,m,d,di,re;
int c,e;
char ch;
cout<<"enter a,b";
cin>>a>>b;
cout<<"\n enter any +,-,/,*,%";
cin>>ch;
cout<<"\n";
switch(ch)
{case '*' : m=a*b;
       cout<<"multiplication="<<m;
       break;
 case '+' : s=a+b;
       cout<<"sum of the no.="<<s;
       break;
 case '-' :d=a-b;
       cout<<"sub="<<d;
       break;
 case '/' : di=a/b;
       if(b==0)
       cout<<"divided by 0";
       else
       cout<<"division="<<di;
       break;
 case '%' : re=c%e;
	 cout<<"remainder="<<re;
       break;
 default:cout<<"wrong choice";
	  break;
	  }
	 getch(); }
