#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int r,c,m[20][20];
 cout<<"Enter the no. of rows and columns for Matrix:";
 cin>>r>>c;
 for (int i=0;i<r;i++)
 {
   for (int j=0;j<c;j++)
   {
     cout<<"Enter the value of Mat["<<i+1<<"]["<<j+1<<"]= ";
     cin>>m[i][j];
   }
 }
 clrscr();
 cout<<"-----------------OUTPUT OBTAINED------------\n";
 cout<<"Matrix entered by user is given below:-\n";
 for (int k=0;k<r;k++)
 {
  cout<<"\n";
  for (int l=0;l<c;l++)
  {
   cout<<m[k][l]<<"\t";
   }
 }
 getch();
 }
