#include<iostream.h>
#include<math.h>
int main()
{
float a,b,c, root1, root2, delta;
cout<<"enter three numbers a,b&c of"
<<"a*^2+bx +c:\n";
cin>>a>>b>>c;
if(!a)
cout<<"value of\'a\'should not be zero"
<<"\n aborting!!!!!!"<<"\n";
else
{
delta = b*b-4*a*c;
if(delta>0)
  {
  root1=(-b+sqrt(delta)) / (2*a);
  root2= (-b-sqrt(delta))/(2*a);
  cout<<"roots are real and equql"<<"\n";
  cout<<"root1="<<root1
  <<"root2="<<root2<<"\n";
  }else if(delta==0)
  {root1=-b/(2*a);
  cout<<"roots are real and equal"<<"\n";
  cout<<"root1="<<root1;
  cout<<"root2="<<root2<<"\n";
 }
 else
 cout<<"roots are complex and imaginary"<<"\n";
 }
return 0;
}
