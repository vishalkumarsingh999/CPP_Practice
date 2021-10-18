#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{int a,b,c,root1,root2;
float d;
cout<<"enter a,b,c";
cin>>a>>b>>c;
d=(b*b)-(4*a*c);
if(d==0)
{root1=root2=(-b)/(2*a);
cout<<"roots are equal and has value="<<root1;
}else if(d>0)
{root1=((-b)+sqrt(d))/(2*a);
root2=((-b)-sqrt(d))/(2*a);
cout<<"root1="<<root1<<"\n";
cout<<"root2="<<root2<<"\n";
}if(d<0)
{cout<<"roots are imaginary";
}
getch();
}