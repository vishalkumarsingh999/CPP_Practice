#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[80],i,n;
cout<<"\n Enter the size of array :";
cin>>n;
cout<<"\n Enter the "<<n<<" Element of array :";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\n The array is :";
for (i=0;i<n;i++)
cout<<a[i]<<" ";
getch();
}
