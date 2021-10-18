#include<iostream.h>
#include<conio.h>
 void main()
 {
 clrscr();
 int N[5],*P;
  // P=&N[5];
  // cout<<"N= "<<N;
   for(int i=0;i<5;i++)
   {cout<<"&N["<<i+1<<"]="<<&N[i]<<endl;
   }
   getch();

   }