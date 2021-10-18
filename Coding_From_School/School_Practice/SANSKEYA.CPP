#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
     int N[5],*P;
     P=N;
     cout<<"\n N="<<N;
     for(int i=0;i<5;i++)
  {
     cout<<"&N[5]="<<&N[i];
  }
     getch();
}