#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
 long int n,num,digit,rev=0;
  cout<<"enter the number";
  cin>>num;
  n=num;
  while(num!=0)
  {digit=num%10;
    rev=(rev*10)+digit;
    num=num/10;
    }
  cout<<"the reverse of the given number is:"<<rev;
  if(n==rev)
  cout<<"\n the given number is palindrome.";
  else
  cout<<"the given number is not palindrome.";
  getch();
  }