
#include <iostream.h>
#include<conio.h>
void main()
{clrscr();
long float cube(float);
long float x,y;
 cout<<"enter the number :";
 cin>>x;
 y=cube(x)  ;
 cout<<"the cube of "<<x<<"is equal to:-"<<y;
 getch();
 }
long float cube(float a)
 {long float n;
 n=a*a*a;
 return n;
	  }