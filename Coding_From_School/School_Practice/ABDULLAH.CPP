#include<iostream.h>
#include<math.h>
#include<conio.h>
int main()
{
 clrscr();
 int a,b,c;
 double root1,root2,d;
 cout<<"Enter a,b,c"<<"\n";
 cin>>a>>b>>c;
 d=b*b-4*a*c;
 if(d==0)
{
 root1=root2=-b/(2*a);
 cout<<"Roots are Equal and Real"<<"\n";
 cout<<"Root 1="<<root1<<"\n";
 cout<<"Root 2="<<root2<<"\n";
}
 else if(d>0)
{
 root1=(-b+sqrt(d))/(2*a);
 root2=(-b-sqrt(d))/(2*a);
 cout<<"Roots are Unequal and Real"<<"\n";
 cout<<"Root 1="<<root1<<"\n";
 cout<<"Root 2="<<root2<<"\n";
}
 else if(d<0)
{ cout<<"Roots are Imaginary"<<"\n";
}
getch();
}

