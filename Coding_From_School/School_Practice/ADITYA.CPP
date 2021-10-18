#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int A[3][3],B[3][3],r,c;
cout<<"enter fisrt matrix row wise\n";
for(r=0;r<3;r++)
{for(c=0;c<3;c++)
{cin>>A[r][c];
}
}
cout<<"enter second matrix row wise\n";
for(r=0;r<3;r++)
{for(c=0;c<3;c++)
{cin>>B[r][c];
}
}
int flag=0;
for(r=0;r<3;r++)
{for(c=0;c<3;c++)
{if(A[r][c]!=B[r][c])
{flag=1;break;
}
}
if(flag==1)break;
}
if(flag!=0)
cout<<"matrices are unequal\n";
else
cout<<"matrices are equal\n";
}