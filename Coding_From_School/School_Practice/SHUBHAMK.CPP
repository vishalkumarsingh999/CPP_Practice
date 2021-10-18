#include <iostream.h>
#include <conio.h>

void main()
{
 clrscr();
 int ar[100],size,small,pos,i,j,tmp;
 cout<<"Enter the size of the array : ";
 cin>>size;
 cout<<"Enter array elements : ";
 for (i=0;i<size;i++)
 cin>>ar[i];
 for (i=0;i<size-1;i++)
 {
  small = ar[i];
  pos=i;
  for (j=i+1;j<size;j++)
  {
   if (small > ar[j])
   {
    small = ar[j];
    pos = j;
   }
   tmp = small;
   small = ar[i];
   ar[i] = tmp;
   for (j=0;j<size;j++)
    cout<<"\nArray after loop "<<j+1<<" is :   "<<ar[j]<<' ';
  }
  cout<<"\nSorted Array : \n";
  for (j=0;j<size;j++)
   cout<<ar[j]<<' ';
  getch();
 }
 }
