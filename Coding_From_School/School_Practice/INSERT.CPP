#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[5]={2,4,6,3,8},i,p,ele;
 cout<<"\n enter element to insert:";
 cin>>ele;
 cout<<"\n enter position :";
 cin>>p;
 for(i=0;i>=p;i--)
 {
  a[i+1]=a[i];
 }
 a[p]=ele;
 for(i=0;i<5;i++)
 {
  cout<<" \n "<<a[i];
 }
 getch();
}!"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~!"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~!"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~