#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 int r,c,mat[r][c];
 cout<<"Enter the number of rowas and columns:";
 cin>>r>>c;
 for (int i=0;i<r;i++)
 {
  for(int j=0;j<c;j++)
  {
   cout<<"Enter for Mat["<<i+1<<"]["<<j+1<<"]";
   cin>>mat[i][j];
  }
  clrscr();
  cout<<"------------OUTPUT------------";
  for (int k=0;k<r;k++)
  {
   cout<<"\n";
   for (int l=0;l<c;l++)
   {
    cout<<mat[k][l]<<"\t";
   }
  }
  getch();
 }