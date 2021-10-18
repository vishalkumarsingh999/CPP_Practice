#include<iostream.h>
#include<math.h>
int main()
{
float a,b,c,root1,root2,delta;
cout<<"enter three no. a,b,c of"<<"ax^2+bx+c:\n";
cin>>a>>b>>c;
if(!a)
{
cout<<"value of should not be zero";
}
else
{
delta=b*b-4*a*c;
if(delta>0)
{
root1=(-b+sqrt(delta))/(2*a);
root2=(+b+sqrt(delta))/(2*a);
cout<<"root are real and unequal"<<"\n";
cout<<"root1="<<root1<<"root2="<<root2;
}
else if(delta==0)
{
root1=-b/(2*a);
cout<<"root are real and equal"<<"\n";
cout<<"root1="<<root1;
cout<<"root2="<<root2<<"\n";
}
else
cout<<"root are complex and imaginery"<<"\n";
}
return 0;
}

