#include<iostream.h>
#include<conio.h>
int main()
{int a[3] [3],b[3][3],r,c;
//read value in matrices
cout<<"enter first matrix row wise\n";
for(r=0;r<3;r++)
{for(c=0;c<3;c++)
{cin>>a[r][c];
}
}
cout<<"enter second matrix row wise\n";
for(r=0;r<3;r++)
{for(c=0;c<3;c++)
{cin>>b[r][c];
}
}
//loop to check equality
int flag=0;
for(r=0;r<3;r++)
{for(c=0;c<3;c++)
{  if(a[r][c]!=b