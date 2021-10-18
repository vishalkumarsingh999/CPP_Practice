#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int r,c;
 cout<<"Enter the number of rows and columns:";
 cin>>r>>c;
 int m[r][c];
 for (int i=0;i<r;i++)
 {
   for (int j=0;j<c;j++)
   {
     cout<<"Enter the value of Mat["<<i+1<<"]["<<j+1<<"]= ";
     cin>>m[i][j];
   }
 }
 cout<<"Press any key to continue Matrix";
 getch();
 clrscr();
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
