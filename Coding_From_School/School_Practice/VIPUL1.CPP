#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{float a,b,c,r 1,r 2,d;
cout<<"enter the value of a,b,c of "<<"ax^2+bx+c:\n";
cin>>a>>b>>c;
if(!a)
{cout<<"value of \'a\should not be zero"
 cout<<"\n not a quadratic equation"<<"\n";
 }
 else
 {d=b*b-4*a*c;
 if(d>a)
 {r1 =(-b+sqrt(d))/(2*a);
   r2 =(-b-sqrt((d)/(2*a);
   cout<<"roots are real and unequal"<<"\n";
   cout<<"root one="<<r1 ;
   cout<<"second root="<<r2;
   }
   else if(d==0)
   {r1=-b/(2*a);
   cout<<"roots are real and equal"<<"\n";
   cout<<"root one="<<r1;
   cout<<"second root="<<r2;
   }
   else
   cout<<"roots are complex and imaginary";
getch();
}