/*program to show the roots of equation ax^2+bx+c and and determine its nature*/
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{ clrscr();
  float a, b, c, root1, root2, delta;
  cout<<"enter three number a, b & c of:"<<"ax^2 + bx +c:";
  cin>>a>>b>>c;
  if(!a)
     cout<<"value of\'a\'should not be zero"<<"\n aborting!!!!!!!"<<"\n";
     else
     {
	delta=b*b-4*a*c;
	if(delta>0)
	{
	root1=(-b+sqrt(delta))/ (2*a) ;
	root2=(-b-sqrt(delta))/(2*a);
	cout<<"roots are real and unequal"<<"\n" ;
	cout<<"root1="<<root1;
	cout<<"root2="<<root2<<"\n" ;
	}
	else if(delta==0)
	{
	root1=(-b+sqrt(delta))/(2*a);
	root2=(-b-sqrt(delta))/(2*a);
	cout<<"root are real and equal "<<"\n";
	cout<<"root1=" <<root1;
	cout<<"root2="<<root2<<"\n";
	}
     else
     cout<<"roots are complex and imaginary";
     }
      getch();
     }


