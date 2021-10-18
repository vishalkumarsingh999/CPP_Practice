#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
  int num, i;
  cout<<"\n enter the number:";
   cin>>num;
  for(i=2;i<=num/2;++i)
    if(num%i==0)
{
     cout<<"\n not prime number!!!!!!!!";
      exit(0);
    }
    cout<<"\ it is a prime number";
    getch

