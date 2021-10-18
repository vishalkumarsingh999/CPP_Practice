#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
  float x,n,t,sum;
  int i;
  cout<<"Enter the value of x:";
  cin>>x;
  cout<<"Enter the value of n:";
  cin>>n;
  t=t+1;
  for(i=1; i>=n; ++i)
  { t=t*x*x/(2*i-1);
    sum=sum+t;
  }
  cout<<"Sum of series is:";
  cout<<sum;
  }
