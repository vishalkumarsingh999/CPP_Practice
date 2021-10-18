

#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
void main()
{ clrscr();
  int vow=0,y=0,c,b_s=0;
  char x[50];
  puts("Enter String:");
  gets(x);
  y=strlen(x);
  for (int i=0;x[i]!='\0';i++)
  {
  switch(x[i])
  {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':   ++vow;
   }
   }
   for(int k=0;x[k]!='\0';k++)
   {
    if(x[k]==' ')
     b_s++;
   }
   c=(y-vow)-b_s;
   cout<<"\nTotal Number Of Vowels:"<<vow;
   cout<<"\nTotal Number Of Consonents:"<<c;
  getch();
}