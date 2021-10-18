#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int ar[100],size,small,pos,tmp,i,j;
 cout<<"Enter the size of array : ";
 cin>>size;
 cout<<"Enter Array elements : ";
 for (i=0;i<size;i++)
  cin>>ar[i];
 for (i=0;i<size-1;i++)
 {
  small = ar[i];
  pos = i;
  for (j=i+1;j<size;j++)
  {
   if (small>ar[j])
   {
    small = ar[j];
    pos = j;
   }
  }
  tmp = ar[i];
  ar[i] = ar[pos];
  ar[pos] = tmp;
  }
  cout<<"Sorted Array Using Selection Short Method : \n";
  for (i=0;i<size;i++)
   cout<<ar[i]<<' ';
  getch();
 }