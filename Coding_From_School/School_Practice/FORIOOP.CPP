#include<iostream.h>
#include<conio.h>
int main()
{ clrscr();
  int a,i,j;
   cout<<"enter the number:";
   cin>>a;
	for (i=1;i<a;i++)
   {
	for(j=1;j<=i;j++)
      { cout<<j<<" ";
       }   cout<<"\n";
   }
     getch();
     return 0;
}