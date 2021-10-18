#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
 char string[80],c;
 cout<<"enter string(max 79 character) :";
 cin.getline(string,80);
 //Loop to find the lenght of the string.
 for(int len=0 ;string[len] !='\0';len++);
 int i,j,flag=1;
 for(i=0,j=len-1;i<len/2;i++,j--)
 {
  if(string[i]!=string[j])
 {
 flag=0;
 break;
  }
 }
 if(flag!=0)         //i.e.,If flag is true
  cout<<"it is a palindrome.\n";
 else
  cout<<"It is not a palindrome.\n";
  getch();
 }