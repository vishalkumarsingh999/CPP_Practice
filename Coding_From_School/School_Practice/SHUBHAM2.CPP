#include<iostream.h>
#include<conio.h>
#include <process.h>
void main()
{
 clrscr();
 int ar[100],find,pos=-1,n;
 char ch;
 cout<<"Enter the size of the array : ";
 cin>>n;
  for (int i=0;i<n;i++)
 {
  cout<<"Enter "<<i<<" position  element : ";
  cin>>ar[i];
 }
shubham:
{ cout<<"Enter element for linear search : ";
 cin>>find;
 for (int j=0;j<n;j++)
 {
  if (ar[j]==find) pos = j;
 }
 if (pos==-1) cout<<"Element "<<find<<" did not found...";
 else cout<<"Element "<<find<<" found at position "<<(pos+1);
 }
 cout<<"\nDo you want a new search ? Press 'Y' for yes : ";
 cin>>ch;
 if ((ch=='Y')||(ch=='y'))
  goto shubham;
 else exit(0);
 getch();
}