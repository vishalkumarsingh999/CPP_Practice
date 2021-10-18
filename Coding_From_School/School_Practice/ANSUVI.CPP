#include<iostream.h>
#include<conio.h>
void main()
{ float a[100],temp;
  int i,n,j;
  clrscr();
  cout<<"\nEnter the size ofan array:-";
  cin>>n;
  cout<<"\nEnter"<<n<<"number:-";
  for(i=0;i<n;i++)
   cin>>a[i];
   cout<<"\nThe original Array is:-";
   for(i=0;i<n;i++)
   cout<<a[i]<<" ";
   for(i=0,j=n-1;i<n/2;i++,j--)
   {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
   }
   cout<<"\n The new Array is:-";
   for(i=0;i<n;i++)
   cout<<a[i]<<" ";

  getch();
   }

























