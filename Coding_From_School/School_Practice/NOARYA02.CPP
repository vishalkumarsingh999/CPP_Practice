#include<iostream.h>
void main()
{
float cube(float);
float x,y;
cout<<"\nenter number whose cube is to be calculated:\n";
cin>>x;
y=cube(x);
cout<<"\nThe cube of"<<x<<"is"<<y<<"\n";
}
float cube(float a)
{
float n;
n=a*a*a;
return(n);
}