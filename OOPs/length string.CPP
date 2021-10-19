#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

main()
{int a,i;
 char x[100];
 cout<<"enter the string of any length : ";
 cin.getline(x,100);
 for(i=0;i<=100;i++)
 {if(x[i]=='\0')
  {goto y;
  }
 }
 y:
    a=i;
    cout<<"Length of string "<<x<<" is "<<a;

 }



