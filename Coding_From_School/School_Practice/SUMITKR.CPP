#include<iostream.h>
#include<conio.h>
void MERG(int a[], int b[],int c[],int m, int n)
{
int p1=0, p2=0, p3=0;
while(p1<m && p2<n)
{
if(a[p1]<=b[p2])
c[p3++]=a[p1++];
else
c[p3++]=b[p2++];
}
if(p1>=m)
while(p2<n)
c[p3++]=b[p2++];
if(p2>=n)
while(p1<m)
c[p3++]=a[p2++];
}
void main()
{
int a[100], b[100],c[200],m,n,i;
clrscr();
cout<<"\nEnter the size of first array:-";
cin>>n;
cout<<"\nEnter the size of second array:-";
cin>>m;
cout<<"\nEnter the"<<n<<"elelment of first array in descending order:-";
for(i=0;i<m;i++)
cin>>a[i];
cout<<"\nEnter the "<<m<<" element of second arrray in descending order:-";
for(i=0;i<n;i++)
cin>>b[i];
MERG(a,b,c,m,n);
cout<<"\nThe Merged array in descending order:-";
for(i=0;i<m+n;i++)
cout<<c[i]<<" ";
getch();
}